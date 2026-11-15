/*
 * plat_pad.h - entrada del port (hito M2b).
 *
 * Capa abstracta: un backend (teclado/mando) responde "esta tecla/boton esta
 * pulsado" y "valor de este eje"; plat_pad aplica los enlaces (rebind), la
 * deadzone y produce el informe DualShock 2 de 32 bytes al estilo scePadRead.
 * Incluye grabacion y reproduccion de entrada por tick.
 *
 * Diseno propio. Formato del informe (hipotesis: layout de libpad, sin
 * verificar contra el ELF de AirBlade):
 *   [0] 0x00 = lectura correcta (la recomp pone 0x01, ver flag recomp_compat)
 *   [1] 0x73 = modo analogico (tipo 7, 3 palabras)
 *   [2],[3] botones, ACTIVOS A 0, bit i = plat_pad_button i (SELECT=bit0 ... SQUARE=bit15)
 *   [4]=RX [5]=RY [6]=LX [7]=LY, 0x80 = centro
 *   [8..19] presion (0xFF pulsado): der, izq, arr, abj, tri, cir, cruz, cuad, L1, R1, L2, R2
 */
#ifndef PLAT_PAD_H
#define PLAT_PAD_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define PLAT_PAD_PORTS 2
#define PLAT_PAD_REPORT_SIZE 32
#define PLAT_PAD_SRC_PER_BUTTON 3
#define PLAT_PAD_SRC_PER_AXIS 2

typedef enum plat_pad_button {
    PLAT_PAD_SELECT = 0, PLAT_PAD_L3, PLAT_PAD_R3, PLAT_PAD_START,
    PLAT_PAD_UP, PLAT_PAD_RIGHT, PLAT_PAD_DOWN, PLAT_PAD_LEFT,
    PLAT_PAD_L2, PLAT_PAD_R2, PLAT_PAD_L1, PLAT_PAD_R1,
    PLAT_PAD_TRIANGLE, PLAT_PAD_CIRCLE, PLAT_PAD_CROSS, PLAT_PAD_SQUARE,
    PLAT_PAD_BUTTON_COUNT
} plat_pad_button;

typedef enum plat_pad_axis { PLAT_AXIS_LX = 0, PLAT_AXIS_LY, PLAT_AXIS_RX, PLAT_AXIS_RY, PLAT_AXIS_COUNT } plat_pad_axis;

/* Teclas abstractas (independientes de SDL). */
#define PLAT_KEY_LIST(X) \
    X(A) X(B) X(C) X(D) X(E) X(F) X(G) X(H) X(I) X(J) X(K) X(L) X(M) \
    X(N) X(O) X(P) X(Q) X(R) X(S) X(T) X(U) X(V) X(W) X(X) X(Y) X(Z) \
    X(0) X(1) X(2) X(3) X(4) X(5) X(6) X(7) X(8) X(9) \
    X(UP) X(DOWN) X(LEFT) X(RIGHT) X(SPACE) X(ENTER) X(ESCAPE) X(TAB) \
    X(LSHIFT) X(RSHIFT) X(LCTRL) X(RCTRL) X(BACKSPACE) X(KP0) X(KP1) X(KP2) X(KP3)
/* Botones de mando abstractos (estilo SDL_GamepadButton). */
#define PLAT_GBTN_LIST(X) \
    X(SOUTH) X(EAST) X(WEST) X(NORTH) X(BACK) X(GUIDE) X(START) X(LSTICK) X(RSTICK) \
    X(LSHOULDER) X(RSHOULDER) X(DPAD_UP) X(DPAD_DOWN) X(DPAD_LEFT) X(DPAD_RIGHT)
/* Ejes de mando: sticks en [-1,1], gatillos en [0,1]. */
#define PLAT_GAXIS_LIST(X) X(LX) X(LY) X(RX) X(RY) X(LTRIG) X(RTRIG)

typedef enum plat_key {
#define X(n) PLAT_KEY_##n,
    PLAT_KEY_LIST(X)
#undef X
    PLAT_KEY_COUNT
} plat_key;
typedef enum plat_gbtn {
#define X(n) PLAT_GBTN_##n,
    PLAT_GBTN_LIST(X)
#undef X
    PLAT_GBTN_COUNT
} plat_gbtn;
typedef enum plat_gaxis {
#define X(n) PLAT_GAXIS_##n,
    PLAT_GAXIS_LIST(X)
#undef X
    PLAT_GAXIS_COUNT
} plat_gaxis;

typedef enum plat_src_type {
    PLAT_SRC_NONE = 0,
    PLAT_SRC_KEY,       /* code = plat_key */
    PLAT_SRC_GBTN,      /* code = plat_gbtn */
    PLAT_SRC_GAXIS_POS, /* boton digital: eje > trigger_threshold (gatillos) */
    PLAT_SRC_GAXIS_NEG  /* eje < -trigger_threshold */
} plat_src_type;

typedef struct plat_src { int type; int code; } plat_src;

/* Backend de entrada. Todos los punteros son opcionales (NULL = nada pulsado). */
typedef struct plat_input_backend {
    void *user;
    void (*poll)(void *user);                              /* una vez por lectura/tick */
    int (*key_down)(void *user, int key);                  /* plat_key */
    int (*gamepad_connected)(void *user, int device);
    int (*gamepad_button)(void *user, int device, int b);  /* plat_gbtn */
    float (*gamepad_axis)(void *user, int device, int a);  /* plat_gaxis */
} plat_input_backend;

/* Eje: teclas negativa/positiva o un eje analogico de mando. */
typedef struct plat_axis_src {
    int type;      /* 0 ninguno, 1 teclas, 2 eje de mando */
    int key_neg, key_pos;
    int gaxis;     /* plat_gaxis */
    int invert;
} plat_axis_src;

typedef struct plat_pad_cfg {
    plat_src button[PLAT_PAD_BUTTON_COUNT][PLAT_PAD_SRC_PER_BUTTON];
    plat_axis_src axis[PLAT_AXIS_COUNT][PLAT_PAD_SRC_PER_AXIS];
    float deadzone;          /* 0..0.95; 0.15 por defecto */
    int radial;              /* 0 = cuadrada por eje (estilo original), 1 = radial por stick */
    int rescale;             /* 1 = reescalar el rango tras la deadzone (defecto) */
    float trigger_threshold; /* para PLAT_SRC_GAXIS_* */
    int gamepad_device;      /* indice de mando en el backend; -1 = sin mando */
    int recomp_compat;       /* 1 = byte [0] = 0x01 como el ps2_pad.cpp de la recomp */
} plat_pad_cfg;

/* Estado "crudo" ya procesado, antes de serializar. */
typedef struct plat_pad_state {
    uint16_t buttons; /* ACTIVO A 1 internamente; el informe lo invierte */
    uint8_t stick[PLAT_AXIS_COUNT]; /* LX LY RX RY, 0x80 centro */
} plat_pad_state;

typedef struct plat_pad plat_pad;

plat_pad *plat_pad_create(const plat_input_backend *backend); /* backend NULL = sin entrada */
void plat_pad_destroy(plat_pad *p);
void plat_pad_set_backend(plat_pad *p, const plat_input_backend *backend);

/* Configuracion y rebind. */
void plat_pad_cfg_default(plat_pad_cfg *cfg, int port);
plat_pad_cfg *plat_pad_cfg_get(plat_pad *p, int port);
int plat_pad_bind_button(plat_pad *p, int port, int button, int slot, plat_src src);
int plat_pad_clear_button(plat_pad *p, int port, int button);
int plat_pad_bind_axis(plat_pad *p, int port, int axis, int slot, plat_axis_src src);
/* Texto de configuracion (una linea por enlace). Devuelve 0/ -1. Escritura en buffer. */
int plat_pad_cfg_to_text(const plat_pad_cfg *cfg, char *out, size_t out_size);
int plat_pad_cfg_from_text(plat_pad_cfg *cfg, const char *text);
const char *plat_pad_button_name(int b);
const char *plat_key_name(int k);
const char *plat_gbtn_name(int g);

/* Procesado puro (testeable sin backend). v en [-1,1]. */
void plat_pad_apply_deadzone(const plat_pad_cfg *cfg, float x, float y, float *ox, float *oy);
uint8_t plat_pad_axis_to_byte(float v);
void plat_pad_state_to_report(const plat_pad_state *s, int recomp_compat, uint8_t out[PLAT_PAD_REPORT_SIZE]);
void plat_pad_report_to_state(const uint8_t in[PLAT_PAD_REPORT_SIZE], plat_pad_state *s);

/* Lectura. */
int plat_pad_sample(plat_pad *p, int port, plat_pad_state *out); /* 0 ok */
/* Equivalente a scePadRead: rellena 32 bytes, devuelve 32 o 0 (desconectado/puerto invalido). */
int plat_pad_read(plat_pad *p, int port, uint8_t out[PLAT_PAD_REPORT_SIZE]);
/* Equivalente a scePadGetState: 6 = estable, 0 = desconectado. */
int plat_pad_get_state(plat_pad *p, int port);

/* Tick de simulacion: lo fija quien lleva el contador de vblank. Lo usan grabacion y replay. */
void plat_pad_set_tick(plat_pad *p, uint64_t tick);

/* Grabacion (guarda un fotograma solo cuando el informe cambia) y reproduccion. */
int plat_pad_record_start(plat_pad *p);
void plat_pad_record_stop(plat_pad *p);
int plat_pad_record_save(const plat_pad *p, const char *path);
int plat_pad_replay_load(plat_pad *p, const char *path);
int plat_pad_replay_from_text(plat_pad *p, const char *text);
void plat_pad_replay_stop(plat_pad *p);
int plat_pad_replaying(const plat_pad *p);
size_t plat_pad_record_frames(const plat_pad *p);

/* Backend programable (para tests, replays y mandos virtuales). */
typedef struct plat_input_scripted plat_input_scripted;
plat_input_scripted *plat_input_scripted_create(plat_input_backend *out_backend);
void plat_input_scripted_destroy(plat_input_scripted *s);
void plat_input_scripted_set_key(plat_input_scripted *s, int key, int down);
void plat_input_scripted_set_gbtn(plat_input_scripted *s, int dev, int b, int down);
void plat_input_scripted_set_gaxis(plat_input_scripted *s, int dev, int a, float v);
void plat_input_scripted_set_connected(plat_input_scripted *s, int dev, int connected);

#ifdef PLAT_WITH_SDL3
/* Backend SDL3: el anfitrion es dueno de SDL_Init y del bucle de eventos. */
int plat_input_sdl3_create(plat_input_backend *out_backend);
void plat_input_sdl3_destroy(plat_input_backend *backend);
#endif

#ifdef __cplusplus
}
#endif
#endif
