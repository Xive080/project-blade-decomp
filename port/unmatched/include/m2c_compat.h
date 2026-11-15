/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * m2c_compat.h - macros que usan los borradores de m2c (build/a2/*.m2c) para que
 * compilen con clang/gcc/MSVC-clang. Reescritas aqui a partir de su significado
 * (campo a desplazamiento, tipo desconocido, error de decompilacion); no se copia
 * ningun fichero de m2c. Los borradores NO son comportamiento verificado:
 * con M2C_ERROR(...) el resultado es 0 (hipotesis: solo vale para compilar).
 */
#ifndef PORT_UNMATCHED_M2C_COMPAT_H
#define PORT_UNMATCHED_M2C_COMPAT_H
#ifndef M2C_UNK
typedef int M2C_UNK;
#endif
#ifndef NULL
#define NULL ((void *)0)
#endif
#if defined(__SIZEOF_INT128__)
typedef __int128 s128;   /* los borradores usan s128 como escalar de 128 bits (lq/sq, MMI) */
typedef unsigned __int128 u128;
#endif
#define M2C_FIELD(p, t, o) (*(t)((char *)(p) + (o)))
#define M2C_ERROR(msg) (0)
#define M2C_BITWISE(t, x) ((t)(x))
#define M2C_BREAK() ((void)0)
#define M2C_SYNC() ((void)0)
#endif
