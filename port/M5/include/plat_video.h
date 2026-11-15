/*
 * plat_video: decodificador de video MPEG-2 (cinematicas) por libavcodec (hito M5).
 *
 * Modelo de empuje, parecido a como AirBlade usa sceMpeg: el juego entrega bytes del
 * flujo elemental .M2V (sceMpegAddBs / DMA al IPU) y pide imagenes en orden de
 * presentacion (sceMpegGetPicture). Tambien hay atajos para leer un fichero o memoria.
 * Solo imagen: el audio de las cinematicas va aparte (.VAG) y es asunto de M4.
 *
 * Si libavcodec no esta (plat_video_available() == 0) todas las funciones fallan limpio.
 * Interfaz C.
 */
#ifndef PLAT_VIDEO_H
#define PLAT_VIDEO_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct plat_video plat_video;

/* Una imagen decodificada, YUV 4:2:0 planar de 8 bits. Los punteros son validos hasta la
 * siguiente llamada a plat_video_next_frame / plat_video_close sobre el mismo objeto. */
typedef struct plat_video_frame {
    const uint8_t *plane[3];
    int stride[3];
    int width, height;
    int64_t index;      /* numero de imagen en orden de presentacion, desde 0 */
    int pict_type;      /* 1=I 2=P 3=B (como AV_PICTURE_TYPE_*) */
} plat_video_frame;

enum { PLAT_VIDEO_EOF = 0, PLAT_VIDEO_FRAME = 1, PLAT_VIDEO_NEED_DATA = 2, PLAT_VIDEO_ERROR = -1 };

int plat_video_available(void);
const char *plat_video_backend_name(void); /* p. ej. "libavcodec 62.12.102" o "ninguno" */

/* Flujo alimentado por el llamador. */
plat_video *plat_video_open_stream(void);
/* Entrega bytes; false (<0) si el decodificador falla. len puede ser cualquiera. */
int plat_video_feed(plat_video *v, const uint8_t *data, size_t len);
/* No llegan mas datos: vacia el decodificador (imagenes retenidas por los cuadros B). */
int plat_video_feed_end(plat_video *v);

/* Atajos: el flujo sale de un fichero (se lee por trozos) o de memoria (se copia). */
plat_video *plat_video_open_file(const char *path);
plat_video *plat_video_open_memory(const uint8_t *data, size_t len);

/* Siguiente imagen en orden de presentacion. En modo flujo devuelve NEED_DATA si hace falta
 * mas entrada; en fichero/memoria lee sola. EOF al acabar. */
int plat_video_next_frame(plat_video *v, plat_video_frame *out);

/* Dimensiones y frecuencia conocidas tras la primera imagen (0 antes). */
int plat_video_info(const plat_video *v, int *width, int *height, int *fps_num, int *fps_den);

/* YUV -> RGBA8888 (R en el byte bajo; alfa 0x80 como sceIpuRGB32). BT.601 rango limitado,
 * submuestreo de croma por replicacion. dst necesita stride*height bytes. HIPOTESIS: no se
 * ha comprobado bit a bit contra el CSC del IPU real. */
void plat_video_frame_to_rgba(const plat_video_frame *f, uint8_t *dst, int dst_stride);

/* Igual, pero en el orden que entrega el IPU a sceMpegGetPicture: macrobloques de 16x16 en
 * orden de lectura, cada uno con sus 256 pixeles RGBA seguidos (fila a fila). dst necesita
 * (w/16)*(h/16)*1024 bytes. HIPOTESIS: orden deducido de la documentacion publica del IPU y
 * del 1280 (=40x32 macrobloques) que pasa el juego; no comprobado contra hardware. */
void plat_video_frame_to_rgba_mb(const plat_video_frame *f, uint8_t *dst);

void plat_video_close(plat_video *v);

#ifdef __cplusplus
}
#endif
#endif
