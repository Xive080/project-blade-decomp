/*
 * plat_file.h - ficheros y disco (PORT_PLAN 3.2 y 3.5).
 *
 * El CD se sustituye por ficheros sueltos extraidos de la ISO del usuario
 * bajo una raiz configurable. Las rutas del juego ("cdrom0:\\X.BIN;1",
 * "host:...") se normalizan aqui; nunca se aceptan "..", rutas absolutas ni
 * letras de unidad del llamador.
 */
#ifndef PLAT_FILE_H
#define PLAT_FILE_H

#include "plat_types.h"

PLAT_EXTERN_C_BEGIN

#define PLAT_SECTOR_SIZE 2048u

typedef plat_handle plat_file_handle;

typedef enum plat_seek_whence { PLAT_SEEK_SET = 0, PLAT_SEEK_CUR = 1, PLAT_SEEK_END = 2 } plat_seek_whence;

typedef struct plat_file_config {
    uint32_t    struct_size;
    const char *data_root;   /* carpeta con los ficheros del disco; copia interna */
    const char *mods_root;   /* NULL = sin mods; tiene prioridad sobre data_root */
    const char *save_root;   /* base de las tarjetas (plat_card.h); NULL = junto a data_root */
} plat_file_config;

PLAT_API plat_status plat_file_init(const plat_file_config *cfg);
PLAT_API void        plat_file_shutdown(void);

/* Traza de accesos para comparar con la recomp (PORT_PLAN 6.3): se llama en
 * cada apertura y lectura con nombre normalizado, offset y longitud. */
typedef void (*plat_file_trace_fn)(void *user, const char *op, const char *path,
                                   uint64_t offset, uint64_t length);
PLAT_API void plat_file_set_trace(plat_file_trace_fn fn, void *user);

/* Normaliza una ruta del juego a relativa con '/' en minusculas-mantenidas.
 * Devuelve PLAT_E_INVALID si intenta salir de la raiz. out recibe la ruta. */
PLAT_API plat_status plat_file_normalize(const char *game_path, char *out, size_t out_size);

PLAT_API plat_status plat_file_exists(const char *game_path);
PLAT_API plat_status plat_file_open(const char *game_path, plat_file_handle *out);
PLAT_API void        plat_file_close(plat_file_handle h);
PLAT_API int64_t     plat_file_size(plat_file_handle h);          /* <0 error */
PLAT_API int64_t     plat_file_seek(plat_file_handle h, int64_t off, plat_seek_whence w);
PLAT_API int64_t     plat_file_read(plat_file_handle h, void *dst, size_t len); /* bytes leidos o <0 */

/* Lectura estilo sceCdRead: sectores de 2048 B desde el inicio del fichero (o
 * desde un LBN si el indice lo conoce), relleno a cero hasta el sector. dst es
 * un puntero host; el shim traduce desde plat_gaddr con plat_mem_g2h. */
PLAT_API plat_status plat_file_read_sectors(plat_file_handle h, uint32_t first_sector,
                                            uint32_t sector_count, void *dst);

/* Tabla LBN -> fichero (el inventario del disco la rellena; M2). */
PLAT_API plat_status plat_file_register_lbn(uint32_t lbn, const char *game_path, uint32_t size_bytes);
PLAT_API plat_status plat_file_open_lbn(uint32_t lbn, plat_file_handle *out);

PLAT_EXTERN_C_END
#endif /* PLAT_FILE_H */
