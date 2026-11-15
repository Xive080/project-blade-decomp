// Compara plat_vag contra ps2_vag::decode de la recomp (solo se compila si CMake recibe
// -DPLAT_M4_RECOMP_VAG_CPP=<ruta a ps2_audio_vag.cpp>). Datos sinteticos generados aqui.
#include <vector>
#include <cstdint>
#include <cstdio>
extern "C" {
#include "plat_vag.h"
}
extern "C++" {
#include "test_common.h"
}

namespace ps2_vag {
bool decode(const uint8_t *data, uint32_t sizeBytes, std::vector<int16_t> &outPcm, uint32_t &outSampleRate);
}

int main() {
    int maxdiff_default = 0, maxdiff_gentle = 0;
    size_t total = 0, differing = 0;
    for (int iter = 0; iter < 300; iter++) {
        size_t nblocks = 1 + rnd() % 200, sz;
        uint32_t rate = (iter % 7 == 0) ? 0 : 8000 + rnd() % 40000;
        uint8_t *d = make_vag(nblocks, rate, 1, &sz);
        // algunos bloques con flags de bucle para comprobar que ambos los ignoran al decodificar
        for (size_t b = 0; b < nblocks; b += 5) d[48 + b * 16 + 1] = (uint8_t)(rnd() & 7);
        std::vector<int16_t> ref;
        uint32_t refRate = 0;
        bool ok = ps2_vag::decode(d, (uint32_t)sz, ref, refRate);
        CHECK(ok);

        plat_pcm a;
        CHECK_EQ(plat_vag_decode(d, sz, PLAT_VAG_OPT_RECOMP_COMPAT, &a), 0);
        CHECK_EQ(a.count, ref.size());
        CHECK_EQ(a.sample_rate, refRate);
        if (a.count == ref.size())
            CHECK(memcmp(a.samples, ref.data(), ref.size() * 2) == 0);  // identico bit a bit
        plat_pcm_free(&a);

        plat_pcm b2;
        CHECK_EQ(plat_vag_decode(d, sz, 0, &b2), 0);
        for (size_t i = 0; i < ref.size() && i < b2.count; i++) {
            int df = abs(b2.samples[i] - ref[i]);
            if (df > maxdiff_default) maxdiff_default = df;
            differing += df != 0;
            total++;
        }
        plat_pcm_free(&b2);
        free(d);
    }
    // Sin cabecera la recomp rechaza el dato (formato de los .VAG del disco de AirBlade).
    {
        size_t sz;
        uint8_t *d = make_vag(4, 0, 0, &sz);
        std::vector<int16_t> ref;
        uint32_t r;
        CHECK(!ps2_vag::decode(d, (uint32_t)(sz < 48 ? 48 : sz), ref, r));
        free(d);
    }
    // Datos "suaves" (shift 9..12, como audio real): el redondeo >>6 frente a /64 casi no se nota.
    for (int iter = 0; iter < 200; iter++) {
        size_t nblocks = 1 + rnd() % 100, sz;
        uint8_t *d = make_vag(nblocks, 22050, 1, &sz);
        for (size_t b = 0; b < nblocks; b++) d[48 + b * 16] = (uint8_t)((d[48 + b * 16] & 0xF0) | (9 + rnd() % 4));
        std::vector<int16_t> ref;
        uint32_t rr;
        ps2_vag::decode(d, (uint32_t)sz, ref, rr);
        plat_pcm p;
        plat_vag_decode(d, sz, 0, &p);
        for (size_t i = 0; i < ref.size(); i++) { int df = abs(p.samples[i] - ref[i]); if (df > maxdiff_gentle) maxdiff_gentle = df; }
        plat_pcm_free(&p);
        free(d);
    }
    printf("suaves: max |diff| = %d\n", maxdiff_gentle);
    printf("test_vs_recomp: modo compat identico; modo por defecto: %zu/%zu muestras difieren, max |diff| = %d\n",
           differing, total, maxdiff_default);
    // con datos aleatorios extremos (shift 0, filtros 3-4) el realimentado amplifica el redondeo: solo informativo
    CHECK(maxdiff_gentle <= 128);  // cota empirica, ver docs/port/M4.md
    if (g_fail) { printf("test_vs_recomp: %d fallos\n", g_fail); return 1; }
    printf("test_vs_recomp: ok\n");
    return 0;
}
