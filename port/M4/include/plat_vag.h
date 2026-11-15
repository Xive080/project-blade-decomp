/* plat_vag: decodificador ADPCM de PS2 (SPU/SPU2), escrito desde la especificacion.
 * Bloque de 16 bytes: [0]=(filtro<<4)|shift, [1]=flags, [2..15]=28 nibbles (bajo primero). */
#ifndef PLAT_VAG_H
#define PLAT_VAG_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define PLAT_ADPCM_BLOCK_BYTES 16
#define PLAT_ADPCM_BLOCK_SAMPLES 28
#define PLAT_VAG_HEADER_BYTES 48

/* flags del byte 1 de cada bloque */
#define PLAT_ADPCM_FLAG_END 0x01
#define PLAT_ADPCM_FLAG_REPEAT 0x02
#define PLAT_ADPCM_FLAG_LOOP_START 0x04

/* Opciones de decodificacion. */
#define PLAT_VAG_OPT_RECOMP_COMPAT 0x1 /* redondeo (x+32)/64 hacia cero, igual que ps2_audio_vag.cpp */

typedef struct plat_adpcm_state {
    int32_t s1; /* muestra anterior */
    int32_t s2; /* la anterior a esa */
} plat_adpcm_state;

typedef struct plat_vag_info {
    uint32_t version;
    uint32_t data_size;   /* bytes ADPCM declarados en la cabecera */
    uint32_t sample_rate; /* 0 en cabecera se informa como 44100 */
    char name[17];
} plat_vag_info;

typedef struct plat_pcm {
    int16_t *samples;      /* mono; liberar con plat_pcm_free */
    size_t count;
    uint32_t sample_rate;  /* 0 si no se conoce (datos crudos) */
    int has_loop;          /* 1 si algun bloque marca bucle completo */
    size_t loop_start;     /* indice de muestra */
    size_t loop_end;       /* exclusivo */
} plat_pcm;

/* Decodifica un bloque. Devuelve el byte de flags. out debe tener 28 posiciones. */
uint8_t plat_adpcm_decode_block(const uint8_t block[16], plat_adpcm_state *st, int16_t out[28], unsigned opts);

/* Cabecera "VAGp" (magic big endian; se acepta tambien el magic invertido). 0 = error. */
int plat_vag_parse_header(const uint8_t *data, size_t size, plat_vag_info *info);

/* Datos ADPCM sin cabecera (el formato de los .VAG del disco de AirBlade, ver docs/port/M4.md).
 * size se trunca a multiplo de 16. Devuelve 0 si ok. */
int plat_adpcm_decode_raw(const uint8_t *data, size_t size, unsigned opts, plat_pcm *out);

/* Fichero VAG con cabecera de 48 bytes. Devuelve 0 si ok. */
int plat_vag_decode(const uint8_t *data, size_t size, unsigned opts, plat_pcm *out);

void plat_pcm_free(plat_pcm *p);

#ifdef __cplusplus
}
#endif
#endif
