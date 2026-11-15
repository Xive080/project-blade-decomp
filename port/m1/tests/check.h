/* SPDX-License-Identifier: AGPL-3.0-or-later */
/* Mini marco de pruebas propio (C99). */
#ifndef M1_CHECK_H
#define M1_CHECK_H
#include <stdio.h>
static int g_fail = 0, g_checks = 0;
#define CHECK(c) do { g_checks++; if (!(c)) { g_fail++; printf("FALLO %s:%d: %s\n", __FILE__, __LINE__, #c); } } while (0)
#define DONE(name) do { printf("%s: %d comprobaciones, %d fallos\n", name, g_checks, g_fail); return g_fail ? 1 : 0; } while (0)
#endif
