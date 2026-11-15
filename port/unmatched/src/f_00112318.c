/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * 0x00112318 - despacho por tabla con tail call `j` (mwccps2 no lo genera: sin byte-match).
 * Via (b): ensamblador portado a C.
 *
 *   sltiu v0,a0,8 ; beqz v0,L
 *   (delay) lui v0,0x2f
 *   lui v0,0x2e ; sll v1,a0,2 ; addiu v0,v0,-17232 ; move a0,a1 ; addu v1,v1,v0
 *   j 0x00121a58 ; (delay) lw a1,0(v1)        -> return func_00121a58(out, tabla[idx])
 *  L: lbu v1,-22816(v0) ; jr ra ; (delay) sb v1,0(a1)   -> *out = D_002EA6E0
 *
 * idx (a0) se compara SIN signo con 8. Tabla: u32 D_002DBCB0[8]. out (a1): puntero a byte.
 * El segundo argumento de func_00121a58 sale de `lw` (palabra de 32 bits con signo propagado a 64 en el original):
 * se pasa como u32 (hipotesis: es una direccion del juego; si el callee espera un s32/puntero, ajustar al hacerse
 * con func_00121a58, que tampoco tiene match). En la rama sin tail call el original deja basura en v0 (0x2f0000):
 * se devuelve 0 (hipotesis: ningun llamador lee ese retorno; no comprobado).
 */
#include "m1_prelude.h"

extern u32 D_002DBCB0[];
extern u8 D_002EA6E0;
extern s32 func_00121a58(void *out, u32 value);

s32 func_00112318(u32 idx, u8 *out)
{
    if (idx < 8u)
        return func_00121a58(out, D_002DBCB0[idx]);   /* tail call: el retorno del callee es el nuestro */
    *out = D_002EA6E0;
    return 0;
}
