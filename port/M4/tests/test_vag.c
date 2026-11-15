#include "plat_vag.h"
#include "test_common.h"

static void set_block(uint8_t *b, int filter, int shift, int flags, const int *nib) {
    int i;
    memset(b, 0, 16);
    b[0] = (uint8_t)((filter << 4) | shift);
    b[1] = (uint8_t)flags;
    for (i = 0; i < 28; i++) {
        int n = (nib ? nib[i] : 0) & 0xF;
        b[2 + i / 2] |= (uint8_t)((i & 1) ? (n << 4) : n);
    }
}

int main(void) {
    uint8_t blk[16];
    int16_t out[28];
    plat_adpcm_state st;
    int nib[28], i;

    /* filtro 0, shift 12: la muestra es el nibble con signo */
    for (i = 0; i < 28; i++) nib[i] = i % 16;
    set_block(blk, 0, 12, 0, nib);
    st.s1 = st.s2 = 0;
    CHECK_EQ(plat_adpcm_decode_block(blk, &st, out, 0), 0);
    for (i = 0; i < 28; i++) CHECK_EQ(out[i], (i % 16) >= 8 ? (i % 16) - 16 : (i % 16));

    /* shift 0: escala maxima; 7 -> 28672, 8 -> -32768 */
    nib[0] = 7; nib[1] = 8;
    set_block(blk, 0, 0, 0, nib);
    st.s1 = st.s2 = 0;
    plat_adpcm_decode_block(blk, &st, out, 0);
    CHECK_EQ(out[0], 28672); CHECK_EQ(out[1], -32768);

    /* shift invalido (13..15) se trata como 9 */
    set_block(blk, 0, 15, 0, nib);
    st.s1 = st.s2 = 0;
    plat_adpcm_decode_block(blk, &st, out, 0);
    CHECK_EQ(out[0], 7 * 8);

    /* filtro 1, shift 12, nibbles 1,1,1 -> 1,2,3 */
    for (i = 0; i < 28; i++) nib[i] = 0;
    nib[0] = nib[1] = nib[2] = 1;
    set_block(blk, 1, 12, 0, nib);
    st.s1 = st.s2 = 0;
    plat_adpcm_decode_block(blk, &st, out, 0);
    CHECK_EQ(out[0], 1); CHECK_EQ(out[1], 2); CHECK_EQ(out[2], 3);

    /* redondeo: nibble -1, filtro 1: floor da -2, hacia cero da -1 */
    for (i = 0; i < 28; i++) nib[i] = 0;
    nib[0] = nib[1] = 0xF;
    set_block(blk, 1, 12, 0, nib);
    st.s1 = st.s2 = 0;
    plat_adpcm_decode_block(blk, &st, out, 0);
    CHECK_EQ(out[0], -1); CHECK_EQ(out[1], -2);
    st.s1 = st.s2 = 0;
    plat_adpcm_decode_block(blk, &st, out, PLAT_VAG_OPT_RECOMP_COMPAT);
    CHECK_EQ(out[0], -1); CHECK_EQ(out[1], -1);

    /* saturacion: estado alto con filtro 4 */
    for (i = 0; i < 28; i++) nib[i] = 7;
    set_block(blk, 4, 0, 0, nib);
    st.s1 = 32767; st.s2 = 0;
    plat_adpcm_decode_block(blk, &st, out, 0);
    CHECK_EQ(out[0], 32767);

    /* filtro invalido (7) se trata como 0 */
    for (i = 0; i < 28; i++) nib[i] = 1;
    set_block(blk, 7, 12, 0, nib);
    st.s1 = 1000; st.s2 = 1000;
    plat_adpcm_decode_block(blk, &st, out, 0);
    CHECK_EQ(out[0], 1);

    /* datos crudos con bucle: 4 bloques, inicio en el 1, fin+repeticion en el 3 */
    {
        uint8_t raw[64];
        plat_pcm pcm;
        for (i = 0; i < 4; i++) set_block(raw + i * 16, 0, 12, 0, NULL);
        raw[16 + 1] = PLAT_ADPCM_FLAG_LOOP_START;
        raw[48 + 1] = PLAT_ADPCM_FLAG_END | PLAT_ADPCM_FLAG_REPEAT;
        CHECK_EQ(plat_adpcm_decode_raw(raw, 64 + 5, 0, &pcm), 0); /* 5 bytes sobrantes se ignoran */
        CHECK_EQ(pcm.count, 4 * 28);
        CHECK_EQ(pcm.has_loop, 1);
        CHECK_EQ(pcm.loop_start, 28);
        CHECK_EQ(pcm.loop_end, 4 * 28);
        plat_pcm_free(&pcm);
        raw[48 + 1] = PLAT_ADPCM_FLAG_END; /* fin sin repeticion: no hay bucle */
        CHECK_EQ(plat_adpcm_decode_raw(raw, 64, 0, &pcm), 0);
        CHECK_EQ(pcm.has_loop, 0);
        plat_pcm_free(&pcm);
    }

    /* cabecera VAGp */
    {
        size_t sz;
        uint8_t *d = make_vag(6, 22050, 1, &sz);
        plat_vag_info info;
        plat_pcm pcm;
        CHECK_EQ(plat_vag_parse_header(d, sz, &info), 0);
        CHECK_EQ(info.sample_rate, 22050);
        CHECK_EQ(info.data_size, 96);
        CHECK(strcmp(info.name, "synthetic") == 0);
        CHECK_EQ(plat_vag_decode(d, sz, 0, &pcm), 0);
        CHECK_EQ(pcm.count, 6 * 28);
        CHECK_EQ(pcm.sample_rate, 22050);
        plat_pcm_free(&pcm);
        /* truncado dentro de un bloque: se decodifican solo los bloques completos */
        CHECK_EQ(plat_vag_decode(d, sz - 7, 0, &pcm), 0);
        CHECK_EQ(pcm.count, 5 * 28);
        plat_pcm_free(&pcm);
        /* cabecera corta / magic erroneo */
        CHECK(plat_vag_decode(d, 47, 0, &pcm) != 0);
        d[0] = 'X';
        CHECK(plat_vag_decode(d, sz, 0, &pcm) != 0);
        /* magic invertido (pGAV) */
        memcpy(d, "pGAV", 4);
        CHECK_EQ(plat_vag_parse_header(d, sz, &info), 0);
        free(d);
    }

    if (g_fail) { printf("test_vag: %d fallos\n", g_fail); return 1; }
    printf("test_vag: ok\n");
    return 0;
}
