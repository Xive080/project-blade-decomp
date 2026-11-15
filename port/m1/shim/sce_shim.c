/* SPDX-License-Identifier: AGPL-3.0-or-later */
/* Shim SDK minimo (M1). Vease sce_shim.h. Ideas del SDK publico; codigo propio. */
#include "sce_shim.h"
#include "m1/m1_arena.h"

#include <string.h>

#define U(x) ((uint64_t)(uintptr_t)(x))
#define REC(name, a0, a1, a2, a3, ret) \
    m1sh_record(name, (uint64_t)(a0), (uint64_t)(a1), (uint64_t)(a2), (uint64_t)(a3), (int64_t)(ret))

static struct {
    int sif_init, iop_heap, cd_init, cd_media, gs_path, gs_graph, dma_reset;
    int next_module;
    uint32_t vsync;
    sceDmaChan chan[SCE_DMA_NUM_CHAN];
    m1sh_cd_read_fn cd_read; void *cd_user;
} S;

/* direccion del juego de un puntero host, 0 si no esta en la arena (o sin arena) */
static uint32_t gaddr_of(const void *p) {
    plat_gaddr a;
    if (!p || plat_mem_h2g(p, &a) != PLAT_OK) return 0;
    return a;
}

void m1sh_shim_state_reset(void) {
    m1sh_cd_read_fn f = S.cd_read; void *u = S.cd_user;  /* el gancho de M2 sobrevive al reset */
    memset(&S, 0, sizeof S);
    S.cd_read = f; S.cd_user = u;
    S.next_module = 1;
}

void m1sh_set_cd_read(m1sh_cd_read_fn fn, void *user) { S.cd_read = fn; S.cd_user = user; }

/* ---- SIF ---- */
void sceSifInitRpc(unsigned int mode) { S.sif_init = 1; REC("sceSifInitRpc", mode, 0, 0, 0, 0); }
void sceSifExitRpc(void) { S.sif_init = 0; REC("sceSifExitRpc", 0, 0, 0, 0, 0); }
int  sceSifInitIopHeap(void) { S.iop_heap = 1; REC("sceSifInitIopHeap", 0, 0, 0, 0, 0); return 0; }
int  sceSifRebootIop(const char *img) { REC("sceSifRebootIop", U(img), 0, 0, 0, 1); return 1; }
int  sceSifSyncIop(void) { REC("sceSifSyncIop", 0, 0, 0, 0, 1); return 1; }
int  sceSifLoadModule(const char *path, int args, const char *argp) {
    int id = S.next_module++;
    REC("sceSifLoadModule", U(path), args, U(argp), 0, id);
    return id;
}
int sceSifLoadFileReset(void) { REC("sceSifLoadFileReset", 0, 0, 0, 0, 0); return 0; }

/* ---- CD ---- */
int sceCdInit(int mode) { S.cd_init = 1; REC("sceCdInit", mode, 0, 0, 0, 1); return 1; }
int sceCdMmode(int media) { S.cd_media = media; REC("sceCdMmode", media, 0, 0, 0, 1); return 1; }
int sceCdDiskReady(int mode) { REC("sceCdDiskReady", mode, 0, 0, 0, SCECdComplete); return SCECdComplete; }
int sceCdGetDiskType(void) { REC("sceCdGetDiskType", 0, 0, 0, 0, SCECdDVDV); return SCECdDVDV; }
int sceCdSync(int mode) { REC("sceCdSync", mode, 0, 0, 0, 0); return 0; }   /* 0 = ya termino */
int sceCdRead(uint32_t lbn, uint32_t sectors, void *buf, sceCdRMode *mode) {
    int r = 1;
    if (S.cd_read) r = S.cd_read(lbn, sectors, buf, S.cd_user);
    REC("sceCdRead", lbn, sectors, gaddr_of(buf) ? gaddr_of(buf) : U(buf), U(mode), r);
    return r;
}

/* ---- DMA ---- */
static const uint32_t dma_hw[SCE_DMA_NUM_CHAN] = {
    0x10008000u, 0x10009000u, 0x1000A000u, 0x1000B000u, 0x1000B400u,
    0x1000C000u, 0x1000C400u, 0x1000C800u, 0x1000D000u, 0x1000D400u };

int sceDmaReset(int mode) {
    int i;
    S.dma_reset = 1;
    for (i = 0; i < SCE_DMA_NUM_CHAN; i++) {
        S.chan[i].chan_id = (uint32_t)i; S.chan[i].hw_addr = dma_hw[i];
        S.chan[i].sends = 0; S.chan[i].last_tag_gaddr = 0;
    }
    REC("sceDmaReset", mode, 0, 0, 0, 0);
    return 0;
}
sceDmaChan *sceDmaGetChan(int id) {
    sceDmaChan *c = (id >= 0 && id < SCE_DMA_NUM_CHAN) ? &S.chan[id] : NULL;
    if (c && !c->hw_addr) { c->chan_id = (uint32_t)id; c->hw_addr = dma_hw[id]; }
    REC("sceDmaGetChan", id, 0, 0, 0, c ? c->hw_addr : 0);
    return c;
}
int sceDmaSend(sceDmaChan *d, void *tag) {
    int r = d ? 0 : -1;
    if (d) { d->sends++; d->last_tag_gaddr = gaddr_of(tag); }
    REC("sceDmaSend", d ? d->hw_addr : 0, gaddr_of(tag) ? gaddr_of(tag) : U(tag), 0, 0, r);
    return r;
}
int sceDmaSync(sceDmaChan *d, int mode, int timeout) {
    REC("sceDmaSync", d ? d->hw_addr : 0, mode, timeout, 0, 0);
    return 0;
}

/* ---- GS ---- */
int sceGsResetPath(void) { S.gs_path = 1; REC("sceGsResetPath", 0, 0, 0, 0, 0); return 0; }
int sceGsResetGraph(int mode, int inter, int omode, int ffmode) {
    S.gs_graph = 1; REC("sceGsResetGraph", mode, inter, omode, ffmode, 0); return 0;
}
int sceGsSetDefDBuff(sceGsDBuff *db, int psm, int w, int h, int ztest, int zpsm, int clear) {
    if (db) {
        db->psm = (int16_t)psm; db->w = (int16_t)w; db->h = (int16_t)h;
        db->ztest = (int16_t)ztest; db->zpsm = (int16_t)zpsm; db->clear = (int16_t)clear;
        db->swap_count = 0; db->initialised = 1;
    }
    REC("sceGsSetDefDBuff", U(db), psm, w, h, db ? 0 : -1);   /* solo se guardan 4 args; el resto va en db */
    return db ? 0 : -1;
}
int sceGsSwapDBuff(sceGsDBuff *db, int id) {
    if (db) db->swap_count++;
    REC("sceGsSwapDBuff", U(db), id, 0, 0, 0);
    return 0;
}
int sceGsSyncV(int mode) {
    int field = (int)(++S.vsync & 1u);   /* (hipotesis) 1 vblank por llamada hasta M2 */
    REC("sceGsSyncV", mode, 0, 0, 0, field);
    return field;
}
int sceGsSyncPath(int mode, uint32_t timeout) { REC("sceGsSyncPath", mode, timeout, 0, 0, 0); return 0; }

/* ---- sceGifPkt ---- */
void sceGifPkInit(sceGifPacket *p, uint64_t *base) {
    if (p) { p->base = base; p->cur = base; p->tag = NULL; p->nloop = 0; }
    REC("sceGifPkInit", U(p), gaddr_of(base) ? gaddr_of(base) : U(base), 0, 0, 0);
}
void sceGifPkReset(sceGifPacket *p) {
    if (p) { p->cur = p->base; p->tag = NULL; p->nloop = 0; }
    REC("sceGifPkReset", U(p), 0, 0, 0, 0);
}
void sceGifPkOpenGifTag(sceGifPacket *p, uint64_t lo, uint64_t hi) {
    if (p && p->cur) {
        p->tag = p->cur; p->cur[0] = lo & ~0x7FFFull; p->cur[1] = hi; p->cur += 2; p->nloop = 0;
    }
    REC("sceGifPkOpenGifTag", U(p), lo, hi, 0, 0);
}
static void close_tag(sceGifPacket *p) {
    if (p && p->tag) { p->tag[0] = (p->tag[0] & ~0x7FFFull) | (p->nloop & 0x7FFFu); p->tag = NULL; }
}
void sceGifPkCloseGifTag(sceGifPacket *p) {
    close_tag(p);
    REC("sceGifPkCloseGifTag", U(p), 0, 0, 0, 0);
}
void sceGifPkAddGsAD(sceGifPacket *p, uint64_t addr, uint64_t data) {
    if (p && p->cur && p->tag) { p->cur[0] = data; p->cur[1] = addr; p->cur += 2; p->nloop++; }
    REC("sceGifPkAddGsAD", U(p), addr, data, 0, 0);
}
uint64_t *sceGifPkTerminate(sceGifPacket *p) {
    uint64_t *end = NULL;
    if (p) { close_tag(p); end = p->cur; }
    REC("sceGifPkTerminate", U(p), 0, 0, 0, gaddr_of(end));
    return end;
}
uint32_t sceGifPkQwc(const sceGifPacket *p) { return (p && p->base) ? (uint32_t)((p->cur - p->base) / 2) : 0; }

/* ---- kernel ---- */
int FlushCache(int mode) { REC("FlushCache", mode, 0, 0, 0, 0); return 0; }
