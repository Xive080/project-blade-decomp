/* Toma la direccion de cada familia de funciones de plat_*: si una firma cambia
 * o falta la declaracion, no compila. Solo se compila, no se enlaza. */
#include "plat/plat.h"

/* Referencias a todos los simbolos para que un typo de firma salte al compilar
 * (sin definirlos: solo se toma su direccion en una funcion que no se ejecuta). */
int plat_header_selfcheck_refs(void) {
    void *fns[] = {
        (void *)plat_status_str, (void *)plat_mem_init, (void *)plat_mem_g2h, (void *)plat_file_open,
        (void *)plat_file_read_sectors, (void *)plat_input_read, (void *)plat_audio_play,
        (void *)plat_video_present, (void *)plat_card_sync, (void *)plat_time_wait_vblank, (void *)plat_init
    };
    return (int)(sizeof fns / sizeof fns[0]);
}

