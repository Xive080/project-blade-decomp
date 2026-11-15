// m2v_probe <fichero.m2v> [max_cuadros] [raw]: decodifica con plat_video y escribe una linea
// por cuadro (indice, tipo, CRC-32 de Y/U/V). Con "raw" escribe en su lugar los planos
// yuv420p por stdout (para comparar con ffmpeg -pix_fmt yuv420p -f rawvideo). Lectura solo.
#include "plat_video.h"
#include <cstdio>
#include <cstdlib>
#include <string>
static uint32_t crc(const uint8_t *p, int w, int h, int st, uint32_t c) {
    for (int y = 0; y < h; ++y) for (int x = 0; x < w; ++x) {
        c ^= p[y * st + x];
        for (int k = 0; k < 8; ++k) c = (c >> 1) ^ (0xEDB88320u & (0u - (c & 1)));
    }
    return c;
}
int main(int argc, char **argv) {
    if (argc < 2) { std::fprintf(stderr, "uso: m2v_probe <fichero> [max]\n"); return 2; }
    const long mx = argc > 2 ? std::atol(argv[2]) : -1;
    plat_video *v = plat_video_open_file(argv[1]);
    if (!v) { std::fprintf(stderr, "no se pudo abrir (%s)\n", plat_video_backend_name()); return 1; }
    plat_video_frame f; long n = 0;
    const bool raw = argc > 3 && std::string(argv[3]) == "raw";
    while ((mx < 0 || n < mx) && plat_video_next_frame(v, &f) == PLAT_VIDEO_FRAME) {
        if (raw) {
            for (int k = 0; k < 3; ++k)
                for (int y = 0; y < (k ? f.height / 2 : f.height); ++y)
                    std::fwrite(f.plane[k] + size_t(y) * f.stride[k], 1, size_t(k ? f.width / 2 : f.width), stdout);
            ++n; continue;
        }
        uint32_t c = 0xFFFFFFFFu;
        c = crc(f.plane[0], f.width, f.height, f.stride[0], c);
        c = crc(f.plane[1], f.width / 2, f.height / 2, f.stride[1], c);
        c = crc(f.plane[2], f.width / 2, f.height / 2, f.stride[2], c);
        std::printf("%lld %d %dx%d %08x\n", (long long)f.index, f.pict_type, f.width, f.height, ~c);
        ++n;
    }
    plat_video_close(v);
    return 0;
}
