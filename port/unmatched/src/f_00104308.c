/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * 0x00104308 - suma saturada de dos bloques de s16 a bytes [0,255] (24 iteraciones x 32 bytes de cada fuente
 * -> 384 bytes de destino). Parece un "add residual + clamp" de decodificacion MPEG (hipotesis por el patron;
 * sin llamador identificado). Via (b): ensamblador portado a C con MMI portable.
 * NO tiene byte-match: usa MMI real (paddh/pminh/pmaxh/ppacb) que mwccps2 no genera desde C.
 *
 *   t4=24 ; t3 = lq(0x001043B0)            (vector constante; en el ELF son 8 x 0x00FF)
 *   bucle: t0=lq(a1) ; t5=lq(a2) ; t1=lq(a1+16) ; v0=lq(a2+16)
 *          t0=pmaxh(pminh(paddh(t0,t5),t3),0) ; t1=pmaxh(pminh(paddh(t1,v0),t3),0)
 *          sq(a0, ppacb(t1,t0)) ; a0+=16 ; a1+=32 ; a2+=32 ; t4-- hasta 0
 *
 * La suma de medias palabras es modular (paddh) y el clamp va despues, con signo. El original usa lq/sq, que (hipotesis)
 * ignoran los 4 bits bajos de la direccion; aqui memcpy: dst/a/b deben ir alineados a 16 igual que en el original.
 * En v0 el original deja el ultimo lq (basura): la funcion es void. Registros t0-t5 tambien se pierden (convencion).
 */
#include "m1_prelude.h"
#include "mmi_portable.h"

#define F_00104308_ITER 24

void func_00104308(u8 *dst, const s16 *a, const s16 *b)
{
    int i;
    ps2_v128 lim, zero;
    for (i = 0; i < 8; i++) mmi_h_set(&lim, i, 0x00FF);   /* constante leida de 0x001043B0 en el ELF (ff00 x8, LE) */
    memset(&zero, 0, sizeof zero);
    for (i = 0; i < F_00104308_ITER; i++) {
        ps2_v128 t0 = mmi_lq(a), t5 = mmi_lq(b), t1 = mmi_lq(a + 8), v0 = mmi_lq(b + 8);
        t0 = mmi_pmaxh(mmi_pminh(mmi_paddh(t0, t5), lim), zero);
        t1 = mmi_pmaxh(mmi_pminh(mmi_paddh(t1, v0), lim), zero);
        mmi_sq(dst, mmi_ppacb(t1, t0));
        dst += 16; a += 16; b += 16;
    }
}
