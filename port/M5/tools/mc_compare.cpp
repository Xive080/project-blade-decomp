// mc_compare <carpetaA> <carpetaB>: compara dos carpetas de tarjeta (p. ej. mc0 del port y
// mc0 de la recomp tras la misma secuencia de acciones). Codigo de salida 0 = identicas.
#include "plat_memcard.h"
#include <cstdio>
int main(int argc, char **argv) {
    if (argc != 3) { std::fprintf(stderr, "uso: mc_compare <A> <B>\n"); return 2; }
    char msg[512];
    int r = plat_mc_compare_trees(argv[1], argv[2], msg, sizeof msg);
    std::printf(r == 0 ? "identicas\n" : "distintas: %s\n", msg);
    return r == 0 ? 0 : 1;
}
