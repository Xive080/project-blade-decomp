/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * m1_prelude.h - tipos que los ficheros de src/matched dan por supuestos
 * (los fragmentos no llevan cabeceras). Se inyecta con -include al compilar
 * con PORT definido. u64/s64 son de 64 bits (el "long" de PS2 tambien lo es,
 * segun PORT_PLAN 3.1; en macOS/Linux 64 bits `long` ya mide 8 B).
 * En Windows (LLP64) `long` mide 4 B: alli se usa `long long` para que u64
 * siga siendo de 64 bits (hipotesis: sin probar en Windows; en LP64 se usa
 * `long` porque varios ficheros repiten el typedef y deben coincidir).
 */
#ifndef M1_PRELUDE_H
#define M1_PRELUDE_H
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
#if defined(_WIN32)
typedef unsigned long long u64;
typedef long long s64;
#else
typedef unsigned long u64;
typedef long s64;
#endif
typedef float f32;
#endif
