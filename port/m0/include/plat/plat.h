/*
 * plat.h - cabecera paraguas de la capa plat_* (M0).
 *
 * Solo interfaces. Las implementaciones llegan en M1/M2/M4/M5 dentro de sus
 * carpetas; este hito fija nombres, tipos y semantica para que los hitos se
 * paralelicen sin pisarse.
 */
#ifndef PLAT_H
#define PLAT_H

#include "plat_types.h"
#include "plat_mem.h"
#include "plat_file.h"
#include "plat_input.h"
#include "plat_audio.h"
#include "plat_video.h"
#include "plat_card.h"
#include "plat_time.h"

PLAT_EXTERN_C_BEGIN

/* Arranque/parada de todo con valores por defecto; cada nucleo tambien se
 * puede iniciar suelto con su plat_*_init. Orden: time, mem, file, input,
 * video, audio, card. Parada en orden inverso. */
typedef struct plat_config {
    uint32_t          struct_size;
    plat_mem_config   mem;
    plat_file_config  file;
    plat_input_config input;
    plat_video_config video;
    plat_audio_config audio;
    plat_card_config  card;
    plat_time_config  time;
} plat_config;

PLAT_API plat_status plat_init(const plat_config *cfg);
PLAT_API void        plat_shutdown(void);

PLAT_EXTERN_C_END
#endif /* PLAT_H */
