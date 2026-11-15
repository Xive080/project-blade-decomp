/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * ab_sdk_map.c - SDK de Sony enlazado "con nombre" al shim (M1-main).
 *
 * El C decompilado llama a las funciones del SDK por direccion (func_XXXXXXXX);
 * hasta ahora eran stubs que devolvian 0 (y el bucle de arranque
 * `do {} while (sceSifRebootIop(..) == 0)` de func_001953c0 se colgaba). Cada
 * funcion de aqui lleva la direccion del ELF SCES_502.46 (PAL), el nombre del
 * SDK y como se identifico. gen_stubs.py las detecta (--provided, por defecto
 * este directorio) y no genera stub para ellas.
 *
 * Todo lo identificado por forma del codigo y no por simbolo es (hipotesis):
 * ver docs/port/m1.md, seccion "M1-main". Escrito desde el desensamblado
 * propio del ELF y el SDK publico; no se copio nada de PS2Recomp (GPLv3) ni
 * de Tenkaichi3Decomp.
 *
 * Punteros: el C decompilado con PORT pasa punteros host (hipotesis de M1).
 */
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#include "m1_shim.h"
#include "sce_shim.h"

/* ---- libsif / libcdvd (confirmado: argumentos y flujo de func_001953c0) ---- */

/* 0x0010c588 sceSifInitRpc(0): llama a sceSifGetReg/sceSifSetReg (0x10a0f0/0x10a0e0). */
long long func_0010c588(int mode) { sceSifInitRpc((unsigned)mode); return 0; }

/* 0x00111960 sceSifRebootIop(img): el juego repite hasta que devuelve != 0. */
long long func_00111960(const char *img) { return sceSifRebootIop(img); }

/* 0x00111928 sceSifSyncIop(): el juego repite hasta que devuelve != 0. */
long long func_00111928(void) { return sceSifSyncIop(); }

/* 0x00111460 sceSifLoadModule(path, args, argp): el juego repite mientras < 0 (22b5f0). */
long long func_00111460(const char *path, int args, const char *argp) {
    return sceSifLoadModule(path, args, argp);
}

/* 0x00113c60 sceCdInit(mode) (hipotesis: por posicion y argumento 0). */
long long func_00113c60(int mode) { return sceCdInit(mode); }

/* 0x00114138 sceCdMmode(2) (hipotesis: argumento 2 = DVD, tras sceCdInit). */
long long func_00114138(int media) { return sceCdMmode(media); }

/* 0x00113f40 sceCdDiskReady(0) (hipotesis: usa PollSema/SignalSema y RPC de CD). */
long long func_00113f40(int mode) { return sceCdDiskReady(mode); }

/* 0x00110bf0 sceSifLoadFileReset() (hipotesis: pone un global a -1 y borra 4 bytes). */
long long func_00110bf0(void) { return sceSifLoadFileReset(); }

/* 0x0010dcc0 sceFsReset() (hipotesis: mismo patron que el anterior; no esta en el shim). */
long long func_0010dcc0(void) { m1sh_record("sceFsReset", 0, 0, 0, 0, 0); return 0; }

/* ---- libgraph (confirmado por forma: ver docs/port/m1.md) ---- */

/* 0x00100000 sceGsResetGraph(mode, inter, omode, ffmode): escribe CSR=0x200
 * (0x12001000), cola de SetGsCrt (0x1098e0), switch por modo 0/1/5. */
long long func_00100000(int mode, int inter, int omode, int ffmode) {
    return sceGsResetGraph(mode, inter, omode, ffmode);
}

/* 0x00101848 sceGsSetDefDBuff(db, psm, w, h, ztest, zpsm, clear): 7 argumentos,
 * rellena disp/draw/clear de dos buffers con 0x100208/0x100600/0x1015e0/0x1007e8. */
long long func_00101848(void *db, int psm, int w, int h, int ztest, int zpsm, int clear) {
    return sceGsSetDefDBuff((sceGsDBuff *)db, psm, w, h, ztest, zpsm, clear);
}

/* ---- libc de MWCC (el juego enlaza la suya) ---- */

/* 0x0011ec80 memset(dst, val, n): confirmado (relleno de bytes con sq de 128 bits). */
void *func_0011ec80(void *dst, int val, unsigned long n) { return memset(dst, val, n); }

/* 0x001214b8 sprintf(dst, fmt, ...) (hipotesis: formato "cdrom0:\%s;1" en 0x2efe10).
 * Los buffers de los llamadores conocidos son de 128 y 256 B: se acota a 128. */
/* Los llamadores del C decompilado la declaran SIN prototipo (`extern void func_001214b8();`), asi que los
 * argumentos variables viajan en registros; en arm64 de Apple una funcion variadica los leeria de la pila.
 * Por eso aqui los argumentos extra son 4 enteros de 64 bits fijos (a2..a5) y se reenvian a snprintf.
 * Limite: no admite %f (los float no van en registros enteros) ni mas de 4 argumentos extra. */
int func_001214b8(char *dst, const char *fmt, long long a2, long long a3, long long a4, long long a5) {
    return snprintf(dst, 128, fmt ? fmt : "", a2, a3, a4, a5);
}

/* 0x00121a58 strcpy(dst, src) (hipotesis: se usa para copiar "cd0:" y "/"). */
char *func_00121a58(char *dst, const char *src) {
    size_t n = src ? strnlen(src, 255) : 0;
    if (n) memcpy(dst, src, n);
    dst[n] = 0;
    return dst;
}

/* ---- libgraph, funciones que el arranque de RenderWare (func_001e8650) usa ---- */

/* 0x001009d8 sceGsSyncV(mode) (hipotesis): lee CSR (0x12001000) bit 13 = FIELD y lo devuelve. */
long long func_001009d8(int mode) { return sceGsSyncV(mode); }

/* 0x00101b30 sceGsSwapDBuff(db, id) (hipotesis): sceGsPutDispEnv(disp[id&1]) + sceGsPutDrawEnv
 * sobre offsets 0x50 / 0x1c0 del sceGsDBuff. */
long long func_00101b30(void *db, int id) { return sceGsSwapDBuff((sceGsDBuff *)db, id); }

/* ---- kernel (syscalls): 0x001099c0 = `li v1,16; syscall` = AddIntcHandler(cause, handler, next) (confirmado
 * por el numero de syscall 16 del kernel de PS2; argumentos por la llamada de func_00133a60: cause=2,
 * handler=0x00133cb0, next=0). Devuelve un id >= 0 (aqui ids crecientes desde 1; hipotesis: el valor real
 * no importa mientras no sea -1). El handler no se invoca (sin interrupciones hasta M2). */
long long func_001099c0(int cause, const void *handler, int next) {
    static int ids;
    (void)handler;
    m1sh_record("AddIntcHandler", (uint64_t)cause, 0, (uint64_t)next, 0, ids + 1);
    return ++ids;
}
