/*
 * plat_vfs.h - VFS/CD nativo del port (hito M2a).
 *
 * Abre los ficheros del disco del usuario desde una carpeta extraida o
 * directamente desde una imagen ISO 9660, con rutas al estilo del juego
 * ("cdrom0:\DIR\FICHERO.BIN;1"). Cada operacion queda en una traza de texto
 * ordenada que se puede comparar con la de la recomp.
 *
 * Diseno propio. Un plat_vfs NO es seguro entre hilos (hipotesis de uso: el
 * juego accede al CD desde un solo hilo de E/S; si no, hay que poner un mutex
 * por encima).
 */
#ifndef PLAT_VFS_H
#define PLAT_VFS_H

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

#define PLAT_VFS_SECTOR 2048u
#define PLAT_VFS_NO_LSN 0xFFFFFFFFu

typedef struct plat_vfs plat_vfs;
typedef struct plat_vfs_file plat_vfs_file;

typedef enum plat_vfs_trace_op {
    PLAT_VFS_OP_OPEN = 0,      /* apertura correcta */
    PLAT_VFS_OP_OPEN_FAIL = 1, /* ruta no encontrada o invalida */
    PLAT_VFS_OP_READ = 2,      /* lectura en bytes: offset, bytes realmente leidos */
    PLAT_VFS_OP_READSEC = 3,   /* lectura en sectores: offset=sector relativo al fichero, length=sectores pedidos */
    PLAT_VFS_OP_CLOSE = 4
} plat_vfs_trace_op;

typedef struct plat_vfs_trace_entry {
    uint64_t seq;
    plat_vfs_trace_op op;
    char path[256]; /* ruta normalizada (mayusculas, '/', sin ;1) */
    int64_t offset;
    int64_t length;
} plat_vfs_trace_entry;

/* Callback de recorrido: devuelve 0 para continuar. */
typedef int (*plat_vfs_walk_cb)(void *user, const char *path, int64_t size, uint32_t lsn);

/* Fuentes. Devuelven NULL si no se puede abrir (carpeta inexistente, ISO sin "CD001"...). */
plat_vfs *plat_vfs_open_dir(const char *root);
plat_vfs *plat_vfs_open_iso(const char *iso_path);
/* Directorio o fichero: elige solo. */
plat_vfs *plat_vfs_open_auto(const char *path);
void plat_vfs_close(plat_vfs *vfs);

int plat_vfs_is_iso(const plat_vfs *vfs);

/*
 * Normaliza una ruta del juego: quita "cdrom0:"/"cdrom:", cambia '\' por '/',
 * quita barras iniciales, "." y el sufijo ";N" de cada componente, pasa a
 * mayusculas. Rechaza "..", otros dispositivos ("host:", "mc0:") y rutas vacias.
 * Devuelve 0 si vale, -1 si no.
 */
int plat_vfs_normalize(const char *guest_path, char *out, size_t out_size);

/* Abre un fichero (solo lectura). NULL si no existe. Registra la traza. */
plat_vfs_file *plat_vfs_open(plat_vfs *vfs, const char *guest_path);
void plat_vfs_file_close(plat_vfs_file *f);
/* Lee hasta 'size' bytes desde la posicion actual; devuelve los leidos (0 en EOF) o -1. */
int64_t plat_vfs_read(plat_vfs_file *f, void *dst, size_t size);
/* whence: 0 SET, 1 CUR, 2 END. Devuelve la nueva posicion o -1. */
int64_t plat_vfs_seek(plat_vfs_file *f, int64_t offset, int whence);
int64_t plat_vfs_tell(const plat_vfs_file *f);
int64_t plat_vfs_size(const plat_vfs_file *f);
/* LSN de inicio del fichero en el ISO; PLAT_VFS_NO_LSN en carpeta. */
uint32_t plat_vfs_file_lsn(const plat_vfs_file *f);
/*
 * Lectura al estilo sceCdRead: 'count' sectores de 2048 bytes desde el sector
 * 'first' RELATIVO al fichero. El ultimo sector parcial se rellena con ceros.
 * Devuelve los sectores entregados (los que quedan dentro del fichero) o -1.
 */
int plat_vfs_read_sectors(plat_vfs_file *f, uint32_t first, uint32_t count, void *dst);

/* Existe / tamano / LSN sin abrir (no registra traza). 0 si existe. */
int plat_vfs_stat(plat_vfs *vfs, const char *guest_path, int64_t *size, uint32_t *lsn);
/* Lectura cruda por LSN absoluto (solo ISO), como sceCdRead sobre el disco. Devuelve sectores leidos o -1. */
int plat_vfs_read_lsn(plat_vfs *vfs, uint32_t lsn, uint32_t count, void *dst);
/* Resuelve un LSN al fichero que lo contiene (solo ISO). 0 si lo encuentra. */
int plat_vfs_lsn_to_path(plat_vfs *vfs, uint32_t lsn, char *path, size_t path_size, uint32_t *sector_in_file);
/* Recorre todos los ficheros (orden estable, alfabetico por componente). */
int plat_vfs_walk(plat_vfs *vfs, plat_vfs_walk_cb cb, void *user);

/* Traza. Activada por defecto; se puede apagar para ahorrar memoria. */
void plat_vfs_trace_enable(plat_vfs *vfs, int enable);
void plat_vfs_trace_clear(plat_vfs *vfs);
size_t plat_vfs_trace_count(const plat_vfs *vfs);
int plat_vfs_trace_get(const plat_vfs *vfs, size_t index, plat_vfs_trace_entry *out);
/*
 * Formato de texto, una linea por evento (comparable entre implementaciones):
 *   <seq> <OPEN|OPEN_FAIL|READ|READSEC|CLOSE> <RUTA> <offset> <length>
 */
void plat_vfs_trace_write(const plat_vfs *vfs, FILE *out);
/*
 * Compara dos trazas de texto. opens_only: solo lineas OPEN en orden (nombre);
 * si no, se comparan todas las lineas salvo el numero de secuencia.
 * Devuelve 0 si iguales; si no, el numero de evento (base 1) de la primera
 * divergencia, o -1 en error de lectura. 'msg' recibe una descripcion.
 */
long plat_vfs_trace_diff(FILE *a, FILE *b, int opens_only, char *msg, size_t msg_size);

#ifdef __cplusplus
}
#endif
#endif
