/*
 * plat_input.h - entrada (PORT_PLAN 3.3).
 * El informe es el de un DualShock 2 en modo analogico, 32 bytes, con los
 * botones ACTIVOS A 0 (como lo entrega scePadRead), para que el shim copie el
 * bloque tal cual a la estructura del juego.
 */
#ifndef PLAT_INPUT_H
#define PLAT_INPUT_H

#include "plat_types.h"

PLAT_EXTERN_C_BEGIN

#define PLAT_PAD_PORTS      2
#define PLAT_PAD_REPORT_SIZE 32

/* Mascaras de botones en la palabra de 16 bits (bytes 2-3 del informe); un bit a 0 = pulsado. */
enum {
    PLAT_PAD_SELECT = 1u << 0, PLAT_PAD_L3 = 1u << 1, PLAT_PAD_R3 = 1u << 2, PLAT_PAD_START = 1u << 3,
    PLAT_PAD_UP = 1u << 4, PLAT_PAD_RIGHT = 1u << 5, PLAT_PAD_DOWN = 1u << 6, PLAT_PAD_LEFT = 1u << 7,
    PLAT_PAD_L2 = 1u << 8, PLAT_PAD_R2 = 1u << 9, PLAT_PAD_L1 = 1u << 10, PLAT_PAD_R1 = 1u << 11,
    PLAT_PAD_TRIANGLE = 1u << 12, PLAT_PAD_CIRCLE = 1u << 13, PLAT_PAD_CROSS = 1u << 14, PLAT_PAD_SQUARE = 1u << 15
};

typedef struct plat_pad_report {
    uint8_t bytes[PLAT_PAD_REPORT_SIZE];
    /* 0: 0 (ok) | 1: 0x79 (modo analogico 2, 12 palabras) | 2-3: botones (activos a 0)
     * | 4..7: sticks RX RY LX LY (0..255, 128 = centro) | 8..19: presion analogica | resto 0 */
} plat_pad_report;
PLAT_STATIC_ASSERT(sizeof(plat_pad_report) == PLAT_PAD_REPORT_SIZE, pad_report_size);

typedef struct plat_input_config {
    uint32_t struct_size;
    int      radial_deadzone;  /* 0 = cuadrada original, 1 = radial */
    float    deadzone;         /* 0..1 */
} plat_input_config;

PLAT_API plat_status plat_input_init(const plat_input_config *cfg);
PLAT_API void        plat_input_shutdown(void);

/* Estado del puerto en este tick (lo alimenta el host o un replay). */
PLAT_API plat_status plat_input_read(int port, plat_pad_report *out);
PLAT_API int         plat_input_connected(int port);

/* Vibracion: pequeno (0/1) y grande (0..255); caduca solo a los frames dados. */
PLAT_API plat_status plat_input_rumble(int port, uint8_t small_motor, uint8_t large_motor, uint32_t frames);

/* Grabacion y reproduccion: un registro por tick; el formato lo define el nucleo. */
PLAT_API plat_status plat_input_record_begin(const char *path);
PLAT_API plat_status plat_input_replay_begin(const char *path);
PLAT_API void        plat_input_record_end(void);
PLAT_API int         plat_input_replay_active(void);

/* Para el host: inyectar un informe (rellena las dos fuentes: teclado/mando). */
PLAT_API void        plat_input_host_set(int port, const plat_pad_report *rep);

PLAT_EXTERN_C_END
#endif /* PLAT_INPUT_H */
