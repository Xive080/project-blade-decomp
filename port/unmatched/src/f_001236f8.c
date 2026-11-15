/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * 0x001236f8 - toupper por tabla de clases (hipotesis: libc del SDK/Metrowerks; sin nombre en el repo).
 * Via (b): ensamblador portado a C. NO tiene byte-match: el original usa MOVZ, que mwccps2 no genera.
 *
 *   lui a1,0x2f ; addiu v0,a0,-32 ; addiu a1,a1,-19647 ; addu a1,a0,a1 ; lbu v1,0(a1)
 *   andi v1,v1,2 ; jr ra ; movz v0,a0,v1            -> v0 = (tabla[a0] & 2) ? a0 - 32 : a0
 *
 * La tabla esta en 0x002EB341 (indice = caracter; 0x002EB340 + (c + 1)). Bit 0x02 = minuscula (hipotesis: por los
 * valores 0x01 para 'A'..'Z' y 0x02 para 'a'..'z' vistos en el ELF). Es dato del ELF del usuario: en el port
 * hay que cargarlo desde el disco, no se versiona. Rango valido del indice: el del original (sin comprobar).
 */
#include "m1_prelude.h"
#include "mmi_portable.h"

extern u8 D_002EB340[];

s32 func_001236f8(s32 c)
{
    s32 up = c - 32;                              /* addiu v0,a0,-32 (aritmetica de 32 bits con signo propagado) */
    u32 cls = D_002EB340[c + 1] & 2u;             /* lbu + andi */
    return (s32)mmi_movz(up, c, cls);             /* movz v0,a0,v1 : si cls == 0 -> v0 = a0 */
}
