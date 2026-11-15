/*
 * plat_memcard: tarjeta de memoria nativa (hito M5).
 *
 * Modelo: cada puerto (0 y 1) es una carpeta del disco. Misma disposicion que la recomp
 * (mc0/mc1 junto al ELF): un fichero guardado por el juego es un fichero normal con los
 * mismos bytes. Las operaciones imitan libmc (sceMc*): cada orden se completa al instante,
 * su resultado queda pendiente y plat_mc_sync() lo entrega una vez (o -1 si no hay nada).
 *
 * No toca memoria del invitado: el pegamento del shim SDK (M1) traduce punteros.
 * C++17 por dentro, interfaz C. Sin rutas absolutas: las raices las pasa quien llama.
 */
#ifndef PLAT_MEMCARD_H
#define PLAT_MEMCARD_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Resultados (valores de sceMc: negativos = error). */
enum {
    PLAT_MC_OK = 0,
    PLAT_MC_CHANGED_CARD = -1,
    PLAT_MC_NO_FORMAT = -2,
    PLAT_MC_NO_ENTRY = -4,
    PLAT_MC_DENIED = -5,
    PLAT_MC_NOT_EMPTY = -6,
    PLAT_MC_TOO_MANY_HANDLES = -7
};

/* Ordenes (valores de sceMc, devueltos por plat_mc_sync). */
enum {
    PLAT_MC_CMD_GETINFO = 0x01, PLAT_MC_CMD_OPEN = 0x02, PLAT_MC_CMD_CLOSE = 0x03,
    PLAT_MC_CMD_SEEK = 0x04, PLAT_MC_CMD_READ = 0x05, PLAT_MC_CMD_WRITE = 0x06,
    PLAT_MC_CMD_FLUSH = 0x0A, PLAT_MC_CMD_MKDIR = 0x0B, PLAT_MC_CMD_CHDIR = 0x0C,
    PLAT_MC_CMD_GETDIR = 0x0D, PLAT_MC_CMD_SETFILEINFO = 0x0E, PLAT_MC_CMD_DELETE = 0x0F,
    PLAT_MC_CMD_FORMAT = 0x10, PLAT_MC_CMD_UNFORMAT = 0x11, PLAT_MC_CMD_GETENTSPACE = 0x12,
    PLAT_MC_CMD_RENAME = 0x13
};

/* Banderas de apertura (valores de SCE_*: coinciden con la recomp). */
enum {
    PLAT_MC_O_RDONLY = 0x0001, PLAT_MC_O_WRONLY = 0x0002, PLAT_MC_O_RDWR = 0x0003,
    PLAT_MC_O_APPEND = 0x0100, PLAT_MC_O_CREAT = 0x0200, PLAT_MC_O_TRUNC = 0x0400
};

enum { PLAT_MC_SEEK_SET = 0, PLAT_MC_SEEK_CUR = 1, PLAT_MC_SEEK_END = 2 };

/* Atributos de entrada de directorio (sceMcTblGetDir.AttrFile). */
enum {
    PLAT_MC_ATTR_READABLE = 0x0001, PLAT_MC_ATTR_WRITEABLE = 0x0002, PLAT_MC_ATTR_FILE = 0x0010,
    PLAT_MC_ATTR_SUBDIR = 0x0020, PLAT_MC_ATTR_CLOSED = 0x0080, PLAT_MC_ATTR_EXISTS = 0x8000
};

#define PLAT_MC_CARD_TYPE_PS2 2
#define PLAT_MC_FREE_CLUSTERS 0x2000 /* constante, como en la recomp */
#define PLAT_MC_ENT_SPACE 1024

/* sceMcStDateTime: 8 bytes, little endian. */
typedef struct plat_mc_datetime {
    uint8_t resv2, sec, min, hour, day, month;
    uint16_t year;
} plat_mc_datetime;

/* sceMcTblGetDir: 64 bytes exactos. */
typedef struct plat_mc_dirent {
    plat_mc_datetime create, modify;
    uint32_t file_size;
    uint16_t attr;
    uint16_t resv1;
    uint32_t resv2;
    uint32_t pda_apl_no;
    char name[32];
} plat_mc_dirent;

typedef struct plat_mc plat_mc;

/* root0 y root1 pueden ser NULL: root0 -> "mc0" relativo al directorio actual; root1 se
 * deriva de root0 con plat_mc_derive_root. Las carpetas se crean si faltan. */
plat_mc *plat_mc_create(const char *root0, const char *root1);
void plat_mc_destroy(plat_mc *mc);

/* Regla de la recomp: raiz de puerto 0 con hoja "mc0" -> hermana "mc1"; otra hoja X ->
 * "X_slot1". Escribe en out (cap bytes); devuelve 0 o -1 si no cabe. */
int plat_mc_derive_root(const char *root0, int port, char *out, size_t cap);
const char *plat_mc_root(const plat_mc *mc, int port);

/* Ordenes: devuelven 0 (orden aceptada) y dejan el resultado pendiente, salvo donde se
 * indica. Los parametros invalidos tambien dejan un resultado de error pendiente. */
int plat_mc_init(plat_mc *mc);
int plat_mc_end(plat_mc *mc);
int plat_mc_get_slot_max(const plat_mc *mc); /* 1, como la recomp */
int plat_mc_get_info(plat_mc *mc, int port, int slot, int *type, int *free_clusters, int *format);
int plat_mc_open(plat_mc *mc, int port, int slot, const char *path, unsigned flags);
int plat_mc_close(plat_mc *mc, int fd);
int plat_mc_read(plat_mc *mc, int fd, void *dst, int size);
int plat_mc_write(plat_mc *mc, int fd, const void *src, int size);
int plat_mc_seek(plat_mc *mc, int fd, int offset, int origin);
int plat_mc_flush(plat_mc *mc, int fd);
int plat_mc_mkdir(plat_mc *mc, int port, int slot, const char *path);
int plat_mc_chdir(plat_mc *mc, int port, int slot, const char *path, char *cwd_out, size_t cwd_cap);
/* table puede ser NULL (solo cuenta). Resultado = numero de entradas. */
int plat_mc_get_dir(plat_mc *mc, int port, int slot, const char *pattern, int max_entries,
                    plat_mc_dirent *table);
int plat_mc_delete(plat_mc *mc, int port, int slot, const char *path);
int plat_mc_rename(plat_mc *mc, int port, int slot, const char *old_path, const char *new_path);
int plat_mc_format(plat_mc *mc, int port, int slot);
int plat_mc_unformat(plat_mc *mc, int port, int slot);
int plat_mc_set_file_info(plat_mc *mc, int port, int slot, const char *path);
int plat_mc_get_ent_space(plat_mc *mc);

/* Como sceMcSync: devuelve -1 si no habia orden pendiente (sondeo ocioso); si habia, 1 y
 * rellena cmd/result (punteros opcionales) y consume la orden. */
int plat_mc_sync(plat_mc *mc, int *cmd, int *result);

/* Ayuda para pruebas/herramientas: compara dos carpetas de tarjeta byte a byte (arbol,
 * nombres y contenido; ignora fechas). 0 = identicas; 1 = distintas (la primera diferencia
 * se escribe en msg); <0 error de E/S. */
int plat_mc_compare_trees(const char *dir_a, const char *dir_b, char *msg, size_t msg_cap);

#ifdef __cplusplus
}
#endif
#endif
