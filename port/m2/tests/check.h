// Mini marco de pruebas (propio).
#pragma once
#include <cstdio>
#include <cstdlib>
static int g_fail = 0, g_checks = 0;
#define CHECK(c) do { g_checks++; if (!(c)) { g_fail++; std::printf("FALLO %s:%d: %s\n", __FILE__, __LINE__, #c); } } while (0)
#define DONE(name) do { std::printf("%s: %d comprobaciones, %d fallos\n", name, g_checks, g_fail); return g_fail ? 1 : 0; } while (0)
