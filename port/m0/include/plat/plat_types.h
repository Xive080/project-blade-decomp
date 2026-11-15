/*
 * plat_types.h - tipos y convenciones comunes de la capa plat_*.
 *
 * Reglas de la capa:
 *  - C99 puro con extern "C": la usa el C decompilado y el C++ de los nucleos.
 *  - Sin tipos del SDK de Sony ni de ningun SO en las firmas.
 *  - Las direcciones del juego son siempre plat_gaddr (u32); los punteros host
 *    solo aparecen donde el nombre lo dice (..._host).
 *  - Toda funcion que puede fallar devuelve plat_status (0 = bien, <0 = error).
 *  - Los recursos son manejadores opacos (plat_*_handle); 0 es invalido.
 *  - Ningun hilo propio salvo donde se indique; el unico propietario de la
 *    ventana, la entrada y el audio es el host (plat_host_*, ver plat.h).
 */
#ifndef PLAT_TYPES_H
#define PLAT_TYPES_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
#  define PLAT_EXTERN_C_BEGIN extern "C" {
#  define PLAT_EXTERN_C_END   }
#else
#  define PLAT_EXTERN_C_BEGIN
#  define PLAT_EXTERN_C_END
#endif

#ifndef PLAT_API
#  define PLAT_API
#endif

/* Versionado de la interfaz: sube MAJOR en cambios incompatibles. */
#define PLAT_API_VERSION_MAJOR 0
#define PLAT_API_VERSION_MINOR 1

typedef uint32_t plat_gaddr;   /* direccion del juego (espacio PS2 de 32 bits) */
typedef uint32_t plat_handle;  /* manejador opaco generico; 0 = invalido */

typedef int32_t plat_status;
enum {
    PLAT_OK            =  0,
    PLAT_E_FAIL        = -1,  /* error generico */
    PLAT_E_INVALID     = -2,  /* argumento invalido o manejador desconocido */
    PLAT_E_NOTFOUND    = -3,
    PLAT_E_NOMEM       = -4,
    PLAT_E_RANGE       = -5,  /* direccion o tamano fuera de la arena */
    PLAT_E_UNSUPPORTED = -6,  /* no implementado en esta plataforma */
    PLAT_E_BUSY        = -7,  /* operacion asincrona pendiente */
    PLAT_E_IO          = -8
};

/* Cadena estatica y legible de un codigo; nunca NULL. */
PLAT_EXTERN_C_BEGIN
PLAT_API const char *plat_status_str(plat_status s);
PLAT_EXTERN_C_END

#define PLAT_STATIC_ASSERT(cond, tag) typedef char plat_sa_##tag[(cond) ? 1 : -1]

#endif /* PLAT_TYPES_H */
