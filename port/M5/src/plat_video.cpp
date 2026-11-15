// Reproductor de video MPEG-2 sobre libavcodec. Diseno propio (parser + decodificador,
// cola de imagenes copiadas), sin codigo de third_party.
#include "plat_video.h"

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <string>
#include <vector>

#ifdef PLAT_HAVE_LIBAV
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavutil/avutil.h>
#include <libavutil/imgutils.h>
}
#endif

extern "C" {

int plat_video_available(void) {
#ifdef PLAT_HAVE_LIBAV
    return 1;
#else
    return 0;
#endif
}

const char *plat_video_backend_name(void) {
#ifdef PLAT_HAVE_LIBAV
    static char buf[64];
    unsigned v = avcodec_version();
    std::snprintf(buf, sizeof buf, "libavcodec %u.%u.%u", v >> 16, (v >> 8) & 255, v & 255);
    return buf;
#else
    return "ninguno";
#endif
}

} // extern "C"

#ifdef PLAT_HAVE_LIBAV

namespace {
struct Pic {
    std::vector<uint8_t> p[3];
    int stride[3], w, h, type;
};
}

struct plat_video {
    AVCodecContext *ctx = nullptr;
    AVCodecParserContext *parser = nullptr;
    AVPacket *pkt = nullptr;
    AVFrame *frm = nullptr;
    std::deque<Pic> q;
    Pic cur;               // la imagen entregada al llamador
    int64_t next_index = 0;
    bool flushed = false, failed = false;
    int fps_num = 0, fps_den = 0, w = 0, h = 0;
    // fuente opcional
    FILE *fp = nullptr;
    std::vector<uint8_t> mem;
    size_t mem_pos = 0;
    bool have_source = false;

    bool init() {
        const AVCodec *c = avcodec_find_decoder(AV_CODEC_ID_MPEG2VIDEO);
        if (!c) return false;
        ctx = avcodec_alloc_context3(c);
        parser = av_parser_init(AV_CODEC_ID_MPEG2VIDEO);
        pkt = av_packet_alloc();
        frm = av_frame_alloc();
        if (!ctx || !parser || !pkt || !frm) return false;
        ctx->thread_count = 1; // determinista y barato; las cinematicas son 640x512
        return avcodec_open2(ctx, c, nullptr) == 0;
    }
    ~plat_video() {
        if (fp) std::fclose(fp);
        av_frame_free(&frm);
        av_packet_free(&pkt);
        if (parser) av_parser_close(parser);
        avcodec_free_context(&ctx);
    }

    int drain() {
        for (;;) {
            int r = avcodec_receive_frame(ctx, frm);
            if (r == AVERROR(EAGAIN) || r == AVERROR_EOF) return 0;
            if (r < 0) return -1;
            if (frm->format != AV_PIX_FMT_YUV420P) { av_frame_unref(frm); return -1; } // HIPOTESIS: todas son 4:2:0
            Pic p;
            p.w = frm->width; p.h = frm->height; p.type = int(frm->pict_type);
            const int cw = (p.w + 1) / 2, ch = (p.h + 1) / 2;
            const int pw[3] = {p.w, cw, cw}, ph[3] = {p.h, ch, ch};
            for (int i = 0; i < 3; ++i) {
                p.stride[i] = pw[i];
                p.p[i].resize(size_t(pw[i]) * ph[i]);
                for (int y = 0; y < ph[i]; ++y)
                    std::memcpy(&p.p[i][size_t(y) * pw[i]], frm->data[i] + size_t(y) * frm->linesize[i], size_t(pw[i]));
            }
            if (!w) {
                w = p.w; h = p.h;
                AVRational fr = ctx->framerate;
                if (fr.num > 0) { fps_num = fr.num; fps_den = fr.den; }
            }
            q.push_back(std::move(p));
            av_frame_unref(frm);
        }
    }
    int send(const uint8_t *d, size_t n) {
        while (n > 0) {
            uint8_t *out = nullptr; int outsz = 0;
            int used = av_parser_parse2(parser, ctx, &out, &outsz, d, int(n > 1u << 28 ? 1u << 28 : n),
                                        AV_NOPTS_VALUE, AV_NOPTS_VALUE, 0);
            if (used < 0) return -1;
            d += used; n -= size_t(used);
            if (outsz > 0) {
                av_packet_unref(pkt);
                if (av_new_packet(pkt, outsz) < 0) return -1;
                std::memcpy(pkt->data, out, size_t(outsz));
                int r = avcodec_send_packet(ctx, pkt);
                if (r < 0 && r != AVERROR(EAGAIN)) {
                    // flujo corrupto: se ignora el paquete como haria un decodificador tolerante
                } else if (drain() < 0) return -1;
            } else if (used == 0) break;
        }
        return 0;
    }
    int end() {
        if (flushed) return 0;
        flushed = true;
        uint8_t *out = nullptr; int outsz = 0;
        av_parser_parse2(parser, ctx, &out, &outsz, nullptr, 0, AV_NOPTS_VALUE, AV_NOPTS_VALUE, 0);
        if (outsz > 0) {
            av_packet_unref(pkt);
            if (av_new_packet(pkt, outsz) == 0) {
                std::memcpy(pkt->data, out, size_t(outsz));
                avcodec_send_packet(ctx, pkt);
                drain();
            }
        }
        avcodec_send_packet(ctx, nullptr);
        return drain();
    }
    // Lee un trozo de la fuente; false si se acabo.
    bool pump() {
        if (!have_source || flushed) return false;
        uint8_t buf[1 << 16]; size_t n = 0;
        if (fp) n = std::fread(buf, 1, sizeof buf, fp);
        else { n = std::min(sizeof buf, mem.size() - mem_pos); std::memcpy(buf, mem.data() + mem_pos, n); mem_pos += n; }
        if (n == 0) { end(); return true; }
        if (send(buf, n) < 0) failed = true;
        return true;
    }
};

extern "C" {

plat_video *plat_video_open_stream(void) {
    auto *v = new plat_video();
    if (!v->init()) { delete v; return nullptr; }
    return v;
}
plat_video *plat_video_open_file(const char *path) {
    if (!path) return nullptr;
    plat_video *v = plat_video_open_stream();
    if (!v) return nullptr;
    v->fp = std::fopen(path, "rb");
    if (!v->fp) { delete v; return nullptr; }
    v->have_source = true;
    return v;
}
plat_video *plat_video_open_memory(const uint8_t *data, size_t len) {
    if (!data && len) return nullptr;
    plat_video *v = plat_video_open_stream();
    if (!v) return nullptr;
    v->mem.assign(data, data + len);
    v->have_source = true;
    return v;
}
int plat_video_feed(plat_video *v, const uint8_t *data, size_t len) {
    if (!v || v->flushed || (!data && len)) return -1;
    if (v->send(data, len) < 0) { v->failed = true; return -1; }
    return 0;
}
int plat_video_feed_end(plat_video *v) { return v ? v->end() : -1; }

int plat_video_next_frame(plat_video *v, plat_video_frame *out) {
    if (!v || !out) return PLAT_VIDEO_ERROR;
    while (v->q.empty()) {
        if (v->failed) return PLAT_VIDEO_ERROR;
        if (v->flushed && !v->have_source) return PLAT_VIDEO_EOF;
        if (!v->have_source) return PLAT_VIDEO_NEED_DATA;
        if (v->flushed) return PLAT_VIDEO_EOF;
        v->pump();
    }
    v->cur = std::move(v->q.front());
    v->q.pop_front();
    for (int i = 0; i < 3; ++i) { out->plane[i] = v->cur.p[i].data(); out->stride[i] = v->cur.stride[i]; }
    out->width = v->cur.w; out->height = v->cur.h; out->pict_type = v->cur.type;
    out->index = v->next_index++;
    return PLAT_VIDEO_FRAME;
}

int plat_video_info(const plat_video *v, int *w, int *h, int *n, int *d) {
    if (!v || !v->w) return -1;
    if (w) *w = v->w;
    if (h) *h = v->h;
    if (n) *n = v->fps_num;
    if (d) *d = v->fps_den;
    return 0;
}

void plat_video_close(plat_video *v) { delete v; }

} // extern "C"

#else // sin libavcodec

extern "C" {
plat_video *plat_video_open_stream(void) { return nullptr; }
int plat_video_feed(plat_video *, const uint8_t *, size_t) { return -1; }
int plat_video_feed_end(plat_video *) { return -1; }
plat_video *plat_video_open_file(const char *) { return nullptr; }
plat_video *plat_video_open_memory(const uint8_t *, size_t) { return nullptr; }
int plat_video_next_frame(plat_video *, plat_video_frame *) { return PLAT_VIDEO_ERROR; }
int plat_video_info(const plat_video *, int *, int *, int *, int *) { return -1; }
void plat_video_close(plat_video *) {}
}

#endif

extern "C" void plat_video_frame_to_rgba(const plat_video_frame *f, uint8_t *dst, int dst_stride) {
    auto clamp = [](int x) { return uint8_t(x < 0 ? 0 : x > 255 ? 255 : x); };
    for (int y = 0; y < f->height; ++y) {
        const uint8_t *Y = f->plane[0] + size_t(y) * f->stride[0];
        const uint8_t *U = f->plane[1] + size_t(y / 2) * f->stride[1];
        const uint8_t *V = f->plane[2] + size_t(y / 2) * f->stride[2];
        uint8_t *o = dst + size_t(y) * dst_stride;
        for (int x = 0; x < f->width; ++x) {
            const int c = (int(Y[x]) - 16) * 298, d = int(U[x / 2]) - 128, e = int(V[x / 2]) - 128;
            o[4 * x + 0] = clamp((c + 409 * e + 128) >> 8);
            o[4 * x + 1] = clamp((c - 100 * d - 208 * e + 128) >> 8);
            o[4 * x + 2] = clamp((c + 516 * d + 128) >> 8);
            o[4 * x + 3] = 0x80;
        }
    }
}

extern "C" void plat_video_frame_to_rgba_mb(const plat_video_frame *f, uint8_t *dst) {
    std::vector<uint8_t> tmp(size_t(f->width) * f->height * 4);
    plat_video_frame_to_rgba(f, tmp.data(), f->width * 4);
    const int mbw = f->width / 16, mbh = f->height / 16;
    for (int my = 0; my < mbh; ++my)
        for (int mx = 0; mx < mbw; ++mx) {
            uint8_t *o = dst + (size_t(my) * mbw + mx) * 1024;
            for (int y = 0; y < 16; ++y)
                std::memcpy(o + y * 64, &tmp[(size_t(my) * 16 + y) * f->width * 4 + size_t(mx) * 64], 64);
        }
}
