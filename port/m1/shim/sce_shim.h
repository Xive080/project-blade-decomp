/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * sce_shim.h - shim SDK minimo (M1): las llamadas del SDK de Sony que revela el
 * arranque del juego, como implementaciones minimas que registran la llamada
 * (m1_shim.h) y mantienen el estado justo para que el arranque avance.
 *
 * Los nombres y el orden de argumentos siguen el SDK publico conocido; las
 * estructuras son PROPIAS y minimas (no tienen el layout de libgraph/libdma):
 * (hipotesis) el juego solo las trata como bloques opacos que pasa por puntero.
 * Los punteros son punteros host (el C decompilado con PORT usa host, hipotesis);
 * donde importa una direccion del juego se traduce con Port_Addr().
 */
#ifndef SCE_SHIM_H
#define SCE_SHIM_H

#include <stdint.h>
#include "m1_shim.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- constantes ---- */
#define SCECdComplete 0x02
#define SCECdNotReady 0x06
#define SCECdDVDV     0x14   /* tipo de disco DVD de PS2 (hipotesis del valor) */
#define SCE_DMA_VIF0 0
#define SCE_DMA_VIF1 1
#define SCE_DMA_GIF  2
#define SCE_DMA_NUM_CHAN 10

/* ---- SIF / IOP ---- */
void sceSifInitRpc(unsigned int mode);
void sceSifExitRpc(void);
int  sceSifInitIopHeap(void);
int  sceSifRebootIop(const char *img);
int  sceSifSyncIop(void);                 /* 1 = IOP listo */
int  sceSifLoadModule(const char *path, int args, const char *argp);  /* id > 0 */
int  sceSifLoadFileReset(void);

/* ---- CD/DVD ---- */
typedef struct sceCdRMode { uint8_t trycount, spindlctrl, datapattern, pad; } sceCdRMode;
int sceCdInit(int mode);
int sceCdMmode(int media);
int sceCdDiskReady(int mode);
int sceCdGetDiskType(void);
int sceCdSync(int mode);
int sceCdRead(uint32_t lbn, uint32_t sectors, void *buf, sceCdRMode *mode);

/* Gancho que M2 puede enchufar para servir sceCdRead de verdad (1 = ok, 0 = error).
 * Sin gancho, sceCdRead devuelve 1 y no escribe en buf. */
typedef int (*m1sh_cd_read_fn)(uint32_t lbn, uint32_t sectors, void *buf, void *user);
void m1sh_set_cd_read(m1sh_cd_read_fn fn, void *user);

/* ---- DMA ---- */
typedef struct sceDmaChan { uint32_t chan_id; uint32_t hw_addr; uint32_t sends; uint32_t last_tag_gaddr; } sceDmaChan;
int          sceDmaReset(int mode);
sceDmaChan  *sceDmaGetChan(int id);
int          sceDmaSend(sceDmaChan *d, void *tag);
int          sceDmaSync(sceDmaChan *d, int mode, int timeout);

/* ---- GS (libgraph) ---- */
typedef struct sceGsDBuff {
    int16_t  psm, w, h, ztest, zpsm, clear;
    uint32_t swap_count;     /* sceGsSwapDBuff */
    uint32_t initialised;    /* 1 tras sceGsSetDefDBuff */
    uint8_t  reserved[448];  /* relleno nominal (hipotesis: tamano real distinto) */
} sceGsDBuff;
int sceGsResetPath(void);
int sceGsResetGraph(int mode, int inter, int omode, int ffmode);
int sceGsSetDefDBuff(sceGsDBuff *db, int psm, int w, int h, int ztest, int zpsm, int clear);
int sceGsSwapDBuff(sceGsDBuff *db, int id);
int sceGsSyncV(int mode);                 /* devuelve la paridad del campo (0/1) */
int sceGsSyncPath(int mode, uint32_t timeout);

/* ---- sceGifPkt (empaquetador de listas GIF) ---- */
typedef struct sceGifPacket {
    uint64_t *base;      /* inicio del paquete (qwords de 128 bits = 2 x u64) */
    uint64_t *cur;       /* siguiente posicion libre */
    uint64_t *tag;       /* GIFtag abierto, NULL si no hay */
    uint32_t  nloop;     /* registros escritos en el GIFtag abierto */
} sceGifPacket;
void      sceGifPkInit(sceGifPacket *p, uint64_t *base);
void      sceGifPkReset(sceGifPacket *p);
uint64_t *sceGifPkTerminate(sceGifPacket *p);        /* cierra, devuelve el final */
void      sceGifPkOpenGifTag(sceGifPacket *p, uint64_t tag_lo, uint64_t tag_hi);
void      sceGifPkCloseGifTag(sceGifPacket *p);
void      sceGifPkAddGsAD(sceGifPacket *p, uint64_t addr, uint64_t data);
uint32_t  sceGifPkQwc(const sceGifPacket *p);        /* qwords escritos (propio, para tests) */

/* ---- cache / kernel ---- */
int FlushCache(int mode);

#ifdef __cplusplus
}
#endif
#endif /* SCE_SHIM_H */
