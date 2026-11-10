/*
 * main_pc.c — punto de entrada del port a PC (Camino B).
 *
 * El flujo real del juego vive en src/ (código decompilado). Este archivo solo
 * arranca el entorno de PC: inicializa librw (vía port/rw), prepara memoria,
 * archivos e input, y cede el control al main del juego decompilado.
 *
 * Todo bajo #ifdef PORT para no contaminar las unidades que deben byte-match.
 */
#ifdef PORT

#include "../rw/rw_glue.h"

/* Declarado por el código decompilado una vez se identifique el main real
 * del juego (aún por localizar partiendo del entry 0x00233218). */
extern int AirbladeGameMain(void);

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    if (AbRwEngineStart() != 0) {
        return 1;
    }

    int rc = AirbladeGameMain();

    AbRwEngineStop();
    return rc;
}

#endif /* PORT */
