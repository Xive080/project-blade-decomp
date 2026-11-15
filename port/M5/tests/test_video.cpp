// Pruebas de plat_video. Genera su propio MPEG-2 sintetico con el codificador de libavcodec
// (cuadros I/P/B) y compara contra un oraculo independiente (libavformat + libavcodec por
// el desmultiplexor mpegvideo). Con AB_M2V_FILE=<ruta> prueba tambien un M2V real (solo lectura).
#include "plat_video.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <filesystem>
#include <string>
#include <vector>
#include <chrono>

#ifdef PLAT_HAVE_LIBAV
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavutil/imgutils.h>
#ifdef PLAT_HAVE_AVFORMAT
#include <libavformat/avformat.h>
#endif
}
#endif

[[maybe_unused]] static int g_fail = 0;
#define CHECK(c) do { if (!(c)) { std::printf("FALLO %s:%d  %s\n", __FILE__, __LINE__, #c); ++g_fail; } } while (0)

struct Img { int w = 0, h = 0, type = 0; std::vector<uint8_t> p[3]; };

#ifdef PLAT_HAVE_LIBAV

static void make_frame(AVFrame *f, int i) {
    const int w = f->width, h = f->height;
    for (int y = 0; y < h; ++y) for (int x = 0; x < w; ++x) {
        int v = (x * 3 + y * 2 + i * 7) & 255;
        const int dx = x - (20 + i * 6), dy = y - (h / 2);
        if (dx * dx + dy * dy < 400) v = 235 - (i * 9 & 63);
        f->data[0][y * f->linesize[0] + x] = uint8_t(16 + v * 219 / 255);
    }
    for (int y = 0; y < h / 2; ++y) for (int x = 0; x < w / 2; ++x) {
        f->data[1][y * f->linesize[1] + x] = uint8_t(128 + ((x - i) & 31) - 16);
        f->data[2][y * f->linesize[2] + x] = uint8_t(128 + ((y + i) & 31) - 16);
    }
}

// Codifica n cuadros; devuelve el flujo elemental y las imagenes de origen.
static bool encode(int w, int h, int n, std::vector<uint8_t> &es, std::vector<Img> &src) {
    const AVCodec *c = avcodec_find_encoder(AV_CODEC_ID_MPEG2VIDEO);
    if (!c) return false;
    AVCodecContext *e = avcodec_alloc_context3(c);
    e->width = w; e->height = h; e->time_base = {1, 25}; e->framerate = {25, 1};
    e->pix_fmt = AV_PIX_FMT_YUV420P; e->bit_rate = 6000000; e->gop_size = 6; e->max_b_frames = 2;
    if (avcodec_open2(e, c, nullptr) < 0) return false;
    AVFrame *f = av_frame_alloc(); AVPacket *pk = av_packet_alloc();
    f->format = e->pix_fmt; f->width = w; f->height = h;
    av_frame_get_buffer(f, 32);
    auto pull = [&]() {
        while (avcodec_receive_packet(e, pk) == 0) { es.insert(es.end(), pk->data, pk->data + pk->size); av_packet_unref(pk); }
    };
    for (int i = 0; i < n; ++i) {
        av_frame_make_writable(f);
        make_frame(f, i);
        f->pts = i;
        Img im; im.w = w; im.h = h;
        const int pw[3] = {w, w / 2, w / 2}, ph[3] = {h, h / 2, h / 2};
        for (int k = 0; k < 3; ++k) { im.p[k].resize(size_t(pw[k]) * ph[k]);
            for (int y = 0; y < ph[k]; ++y) std::memcpy(&im.p[k][size_t(y) * pw[k]], f->data[k] + y * f->linesize[k], pw[k]); }
        src.push_back(std::move(im));
        avcodec_send_frame(e, f); pull();
    }
    avcodec_send_frame(e, nullptr); pull();
    av_frame_free(&f); av_packet_free(&pk); avcodec_free_context(&e);
    return true;
}

static std::vector<Img> decode_ours(plat_video *v, int max = -1) {
    std::vector<Img> out; plat_video_frame f;
    while ((max < 0 || int(out.size()) < max) && plat_video_next_frame(v, &f) == PLAT_VIDEO_FRAME) {
        CHECK(f.index == (long long)out.size());
        Img im; im.w = f.width; im.h = f.height; im.type = f.pict_type;
        const int pw[3] = {f.width, f.width / 2, f.width / 2}, ph[3] = {f.height, f.height / 2, f.height / 2};
        for (int k = 0; k < 3; ++k) { im.p[k].resize(size_t(pw[k]) * ph[k]);
            for (int y = 0; y < ph[k]; ++y) std::memcpy(&im.p[k][size_t(y) * pw[k]], f.plane[k] + size_t(y) * f.stride[k], pw[k]); }
        out.push_back(std::move(im));
    }
    return out;
}

static int max_diff(const Img &a, const Img &b) {
    if (a.w != b.w || a.h != b.h) return 1000;
    int m = 0;
    for (int k = 0; k < 3; ++k) for (size_t i = 0; i < a.p[k].size(); ++i) m = std::max(m, std::abs(int(a.p[k][i]) - int(b.p[k][i])));
    return m;
}
static double psnr(const Img &a, const Img &b) {
    double se = 0; size_t n = 0;
    for (size_t i = 0; i < a.p[0].size(); ++i) { double d = double(a.p[0][i]) - b.p[0][i]; se += d * d; ++n; }
    return se == 0 ? 99.0 : 10.0 * std::log10(255.0 * 255.0 * n / se);
}

#ifdef PLAT_HAVE_AVFORMAT
// Oraculo: libavformat (demux mpegvideo) + libavcodec generico, sin tocar nuestro parser.
static bool decode_oracle(const std::string &path, std::vector<Img> &out, int max = -1) {
    AVFormatContext *fc = nullptr;
    if (avformat_open_input(&fc, path.c_str(), nullptr, nullptr) < 0) return false;
    avformat_find_stream_info(fc, nullptr);
    int si = av_find_best_stream(fc, AVMEDIA_TYPE_VIDEO, -1, -1, nullptr, 0);
    if (si < 0) return false;
    const AVCodec *c = avcodec_find_decoder(fc->streams[si]->codecpar->codec_id);
    AVCodecContext *d = avcodec_alloc_context3(c);
    avcodec_parameters_to_context(d, fc->streams[si]->codecpar);
    d->thread_count = 1;
    avcodec_open2(d, c, nullptr);
    AVFrame *f = av_frame_alloc(); AVPacket *pk = av_packet_alloc();
    auto take = [&]() {
        while (avcodec_receive_frame(d, f) == 0) {
            if (max >= 0 && int(out.size()) >= max) { av_frame_unref(f); continue; }
            Img im; im.w = f->width; im.h = f->height;
            const int pw[3] = {f->width, f->width / 2, f->width / 2}, ph[3] = {f->height, f->height / 2, f->height / 2};
            for (int k = 0; k < 3; ++k) { im.p[k].resize(size_t(pw[k]) * ph[k]);
                for (int y = 0; y < ph[k]; ++y) std::memcpy(&im.p[k][size_t(y) * pw[k]], f->data[k] + y * f->linesize[k], pw[k]); }
            out.push_back(std::move(im)); av_frame_unref(f);
        }
    };
    while (av_read_frame(fc, pk) >= 0) {
        if (pk->stream_index == si) { avcodec_send_packet(d, pk); take(); }
        av_packet_unref(pk);
        if (max >= 0 && int(out.size()) >= max) break;
    }
    avcodec_send_packet(d, nullptr); take();
    av_frame_free(&f); av_packet_free(&pk); avcodec_free_context(&d); avformat_close_input(&fc);
    return true;
}
#endif

static void test_rgba() {
    uint8_t Y[4] = {16, 235, 81, 16}, U[1] = {128}, V[1] = {128};
    plat_video_frame f{}; f.plane[0] = Y; f.plane[1] = U; f.plane[2] = V;
    f.stride[0] = 2; f.stride[1] = 1; f.stride[2] = 1; f.width = 2; f.height = 2;
    uint8_t px[16];
    plat_video_frame_to_rgba(&f, px, 8);
    CHECK(px[0] == 0 && px[1] == 0 && px[2] == 0 && px[3] == 0x80);
    CHECK(px[4] == 255 && px[5] == 255 && px[6] == 255);
    CHECK(std::abs(px[8] - 75) <= 1 && std::abs(px[9] - 75) <= 1 && std::abs(px[10] - 75) <= 1); // Y=81 -> 75 (BT.601 limitado)
    uint8_t Vr[1] = {240}, Uz[1] = {128}; f.plane[1] = Uz; f.plane[2] = Vr; // V alto -> rojo
    plat_video_frame_to_rgba(&f, px, 8);
    CHECK(px[12] > 150 && px[13] == 0 && px[14] == 0); // Y=16, V alto -> rojo puro

    // orden por macrobloques: imagen 32x16 con Y distinto en cada mitad
    std::vector<uint8_t> Yb(32 * 16), Ub(16 * 8, 128), Vb(16 * 8, 128);
    for (int y = 0; y < 16; ++y) for (int x = 0; x < 32; ++x) Yb[y * 32 + x] = x < 16 ? 16 : 235;
    plat_video_frame g{}; g.plane[0] = Yb.data(); g.plane[1] = Ub.data(); g.plane[2] = Vb.data();
    g.stride[0] = 32; g.stride[1] = 16; g.stride[2] = 16; g.width = 32; g.height = 16;
    std::vector<uint8_t> mb(2 * 1024);
    plat_video_frame_to_rgba_mb(&g, mb.data());
    CHECK(mb[0] == 0 && mb[1023 - 3] == 0);        // macrobloque 0 (negro)
    CHECK(mb[1024] == 255 && mb[2047 - 3] == 255); // macrobloque 1 (blanco)
}

static void test_synthetic(int w, int h, int n) {
    std::vector<uint8_t> es; std::vector<Img> src;
    CHECK(encode(w, h, n, es, src));
    std::printf("sintetico %dx%d: %d cuadros, %zu bytes de flujo\n", w, h, n, es.size());
    namespace fs = std::filesystem;
    const fs::path tmp = fs::temp_directory_path() / ("plat_video_test_" + std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()) + ".m2v");
    { FILE *f = std::fopen(tmp.string().c_str(), "wb"); std::fwrite(es.data(), 1, es.size(), f); std::fclose(f); }

    // (1) memoria
    plat_video *v = plat_video_open_memory(es.data(), es.size());
    CHECK(v != nullptr);
    std::vector<Img> a = decode_ours(v);
    int fw = 0, fh = 0, fn = 0, fd = 0;
    CHECK(plat_video_info(v, &fw, &fh, &fn, &fd) == 0 && fw == w && fh == h && fn == 25 && fd == 1);
    plat_video_close(v);
    CHECK(int(a.size()) == n);
    bool sawB = false, sawP = false;
    for (auto &i : a) { sawB |= i.type == 3; sawP |= i.type == 2; }
    CHECK(sawB && sawP);

    // (2) orden de presentacion y calidad frente al origen
    double minp = 99;
    for (size_t i = 0; i < a.size() && i < src.size(); ++i) minp = std::min(minp, psnr(a[i], src[i]));
    std::printf("  PSNR minimo Y frente al origen: %.1f dB\n", minp);
    CHECK(minp > 28.0); // umbral propuesto (HIPOTESIS); un orden mal daria < 15

    // (3) fichero == memoria bit a bit
    v = plat_video_open_file(tmp.string().c_str());
    std::vector<Img> b = decode_ours(v); plat_video_close(v);
    CHECK(b.size() == a.size());
    int m = 0; for (size_t i = 0; i < std::min(a.size(), b.size()); ++i) m = std::max(m, max_diff(a[i], b[i]));
    CHECK(m == 0);

    // (4) flujo por trozos irregulares (como el DMA del IPU) == memoria
    for (size_t chunk : {size_t(1), size_t(7), size_t(997), size_t(65536)}) {
        v = plat_video_open_stream();
        std::vector<Img> c; plat_video_frame f; bool needed = false;
        size_t pos = 0;
        for (;;) {
            int r = plat_video_next_frame(v, &f);
            if (r == PLAT_VIDEO_FRAME) {
                Img im; im.w = f.width; im.h = f.height;
                const int pw[3] = {f.width, f.width / 2, f.width / 2}, ph[3] = {f.height, f.height / 2, f.height / 2};
                for (int k = 0; k < 3; ++k) { im.p[k].resize(size_t(pw[k]) * ph[k]);
                    for (int y = 0; y < ph[k]; ++y) std::memcpy(&im.p[k][size_t(y) * pw[k]], f.plane[k] + size_t(y) * f.stride[k], pw[k]); }
                c.push_back(std::move(im));
            } else if (r == PLAT_VIDEO_NEED_DATA) {
                needed = true;
                if (pos < es.size()) { size_t k = std::min(chunk, es.size() - pos); CHECK(plat_video_feed(v, es.data() + pos, k) == 0); pos += k; }
                else CHECK(plat_video_feed_end(v) == 0);
            } else { CHECK(r == PLAT_VIDEO_EOF); break; }
        }
        plat_video_close(v);
        CHECK(needed && c.size() == a.size());
        int mm = 0; for (size_t i = 0; i < std::min(a.size(), c.size()); ++i) mm = std::max(mm, max_diff(a[i], c[i]));
        if (mm != 0) std::printf("  trozo %zu: diferencia %d\n", chunk, mm);
        CHECK(mm == 0);
    }

#ifdef PLAT_HAVE_AVFORMAT
    // (5) oraculo independiente
    std::vector<Img> o;
    CHECK(decode_oracle(tmp.string(), o));
    CHECK(o.size() == a.size());
    int mo = 0; for (size_t i = 0; i < std::min(a.size(), o.size()); ++i) mo = std::max(mo, max_diff(a[i], o[i]));
    std::printf("  diferencia maxima por muestra frente al oraculo: %d\n", mo);
    CHECK(mo == 0);
#endif
    std::error_code ec; fs::remove(tmp, ec);
}

static void test_real(const char *path, int max) {
    std::printf("M2V real: %s (hasta %d cuadros)\n", "AB_M2V_FILE", max);
    plat_video *v = plat_video_open_file(path);
    CHECK(v != nullptr);
    if (!v) return;
    std::vector<Img> a = decode_ours(v, max);
    int w = 0, h = 0, n = 0, d = 0; plat_video_info(v, &w, &h, &n, &d);
    plat_video_close(v);
    std::printf("  %zu cuadros, %dx%d, %d/%d fps\n", a.size(), w, h, n, d);
    CHECK(!a.empty());
#ifdef PLAT_HAVE_AVFORMAT
    std::vector<Img> o;
    if (decode_oracle(path, o, max)) {
        int mo = 0; size_t k = std::min(a.size(), o.size());
        for (size_t i = 0; i < k; ++i) mo = std::max(mo, max_diff(a[i], o[i]));
        std::printf("  oraculo: %zu cuadros, diferencia maxima por muestra %d\n", o.size(), mo);
        CHECK(a.size() == o.size() && mo == 0);
    }
#endif
}

int main() {
    std::printf("backend: %s\n", plat_video_backend_name());
    test_rgba();
    test_synthetic(64, 48, 10);
    test_synthetic(640, 512, 14);
    if (const char *p = std::getenv("AB_M2V_FILE")) {
        const char *m = std::getenv("AB_M2V_FRAMES");
        test_real(p, m ? std::atoi(m) : 60);
    }
    std::printf(g_fail ? "test_video: %d FALLOS\n" : "test_video: OK\n", g_fail);
    return g_fail ? 1 : 0;
}

#else
int main() { std::printf("test_video: SALTADA (sin libavcodec)\n"); return 77; }
#endif
