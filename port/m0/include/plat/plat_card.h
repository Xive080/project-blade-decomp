/*
 * plat_card.h - tarjeta de memoria (PORT_PLAN 3.6).
 * Una tarjeta = una carpeta del host (puerto 0 slot 0 hoy). El juego usa un
 * protocolo asincrono (inicio + sync); aqui cada operacion deja UN resultado
 * pendiente que plat_card_sync devuelve. Las rutas se sanean (sin "..").
 */
#ifndef PLAT_CARD_H
#define PLAT_CARD_H

#include "plat_types.h"

PLAT_EXTERN_C_BEGIN

typedef plat_handle plat_card_handle;

#define PLAT_CARD_NAME_MAX 32

typedef struct plat_card_entry {
    char     name[PLAT_CARD_NAME_MAX];
    uint32_t size;
    uint32_t is_dir;
    uint16_t mtime[8];   /* sec,min,hour,day,month,year(lo,hi) como sceMcTblGetDir; 0 si no se sabe */
} plat_card_entry;

typedef enum plat_card_mode { PLAT_CARD_R = 1, PLAT_CARD_W = 2, PLAT_CARD_RW = 3, PLAT_CARD_CREATE = 8, PLAT_CARD_TRUNC = 0x10 } plat_card_mode;

typedef struct plat_card_config {
    uint32_t    struct_size;
    const char *root;   /* carpeta de la tarjeta; NULL = <save_root>/mc0 */
} plat_card_config;

PLAT_API plat_status plat_card_init(const plat_card_config *cfg);
PLAT_API void        plat_card_shutdown(void);

PLAT_API plat_status plat_card_get_info(int port, int slot, int *type, int *free_clusters, int *format);
PLAT_API plat_status plat_card_open(int port, int slot, const char *path, int mode, plat_card_handle *out);
PLAT_API plat_status plat_card_close(plat_card_handle h);
PLAT_API plat_status plat_card_read(plat_card_handle h, void *dst, uint32_t len);
PLAT_API plat_status plat_card_write(plat_card_handle h, const void *src, uint32_t len);
PLAT_API plat_status plat_card_seek(plat_card_handle h, int32_t off, int whence /* 0 set, 1 cur, 2 end */);
PLAT_API plat_status plat_card_mkdir(int port, int slot, const char *path);
PLAT_API plat_status plat_card_delete(int port, int slot, const char *path);
PLAT_API plat_status plat_card_rename(int port, int slot, const char *from, const char *to);
/* Lista una carpeta con patron simple ("*" y "?"); devuelve cuantas entradas
 * caben en out (max) y en *total el numero total. */
PLAT_API plat_status plat_card_list(int port, int slot, const char *pattern, plat_card_entry *out,
                                    uint32_t max, uint32_t *total);
PLAT_API plat_status plat_card_format(int port, int slot);

/* Resultado de la ultima operacion lanzada (>=0 bytes/ok, <0 error). Un solo
 * resultado pendiente: llamarla lo consume; sin pendiente devuelve PLAT_E_NOTFOUND. */
PLAT_API plat_status plat_card_sync(int block, int32_t *result);

PLAT_EXTERN_C_END
#endif /* PLAT_CARD_H */
