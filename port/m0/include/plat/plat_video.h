/*
 * plat_video.h - salida de video y cinematicas (PORT_PLAN 3.7 y 3.8).
 * Ruta A: el GS (emulado) produce el framebuffer; aqui solo se presenta.
 * El cuadro de una cinematica llega como imagen RGBA8 en memoria del host.
 */
#ifndef PLAT_VIDEO_H
#define PLAT_VIDEO_H

#include "plat_types.h"

PLAT_EXTERN_C_BEGIN

typedef enum plat_pixel_format { PLAT_PIXEL_RGBA8 = 0, PLAT_PIXEL_BGRA8 = 1 } plat_pixel_format;

typedef struct plat_video_config {
    uint32_t    struct_size;
    uint32_t    width, height;     /* resolucion de la ventana; 0 = 640x448 */
    int         fullscreen;
    int         vsync;
    int         pal;               /* 1 = 50 Hz, 0 = 60 Hz */
    const char *title;
} plat_video_config;

typedef struct plat_frame {
    const void       *pixels;       /* puntero host, valido solo durante la llamada */
    uint32_t          width, height;
    uint32_t          stride_bytes;
    plat_pixel_format format;
} plat_frame;

PLAT_API plat_status plat_video_init(const plat_video_config *cfg);
PLAT_API void        plat_video_shutdown(void);

/* Presenta el framebuffer del GS (RGBA8). Debe copiar si necesita conservarlo. */
PLAT_API plat_status plat_video_present(const plat_frame *frame);
/* Cuadro de cinematica: se muestra en lugar del framebuffer hasta movie_end. */
PLAT_API plat_status plat_video_movie_frame(const plat_frame *frame);
PLAT_API void        plat_video_movie_end(void);

/* Hash estable del ultimo cuadro presentado (FNV-1a 64 de los pixeles) para
 * comparar con la recomp sin capturas (PORT_PLAN 6.4). */
PLAT_API uint64_t    plat_video_last_hash(void);

PLAT_API int         plat_video_should_close(void);

PLAT_EXTERN_C_END
#endif /* PLAT_VIDEO_H */
