/* SPDX-License-Identifier: AGPL-3.0-or-later */
#include "check.h"
#include "m1/m1_arena.h"
#include "sce_shim.h"
#include <string.h>

static int cd_calls, trace_calls;
static int cd_hook(uint32_t lbn, uint32_t sectors, void *buf, void *user) {
    (void)user; cd_calls++;
    if (lbn == 0xDEAD) return 0;
    memset(buf, 0xCD, sectors * 4);   /* basta para comprobar que llega a buf */
    return 1;
}
static void trace(const m1sh_call *c, void *u) { (void)c; (*(int *)u)++; }

int main(void) {
    sceGsDBuff *db;
    sceDmaChan *ch;
    sceGifPacket pk;
    uint64_t *pb, *end;
    plat_gaddr gdb;
    uint8_t *mem;
    int i, id1, id2;

    CHECK(m1_arena_init(NULL) == PLAT_OK);
    mem = plat_mem_base();

    /* secuencia de arranque plausible (orden de SDK habitual: hipotesis) */
    m1sh_reset();
    m1sh_set_milestone("sceGsSetDefDBuff");
    CHECK(!m1sh_milestone_reached() && m1sh_milestone_seq() == -1);
    m1sh_set_trace(trace, &trace_calls);

    gdb = m1_heap_alloc(sizeof(sceGsDBuff), 64);
    db = (sceGsDBuff *)Port_Ptr(gdb);
    sceSifInitRpc(0);
    sceSifInitIopHeap();
    CHECK(sceSifRebootIop("cdrom0:\\IOPRP.IMG;1") == 1);
    CHECK(sceSifSyncIop() == 1);
    id1 = sceSifLoadModule("cdrom0:\\IRX\\SIO2MAN.IRX;1", 0, NULL);
    id2 = sceSifLoadModule("cdrom0:\\IRX\\PADMAN.IRX;1", 0, NULL);
    CHECK(id1 > 0 && id2 == id1 + 1);
    sceCdInit(0);
    sceCdMmode(2);
    CHECK(sceCdDiskReady(0) == SCECdComplete);
    CHECK(sceCdGetDiskType() == SCECdDVDV);
    CHECK(sceCdSync(0) == 0);
    sceDmaReset(1);
    sceGsResetPath();
    CHECK(!m1sh_milestone_reached());
    sceGsResetGraph(0, 1, 2, 1);
    CHECK(sceGsSetDefDBuff(db, 0, 640, 448, 1, 1, 1) == 0);

    CHECK(m1sh_milestone_reached());
    CHECK(m1sh_milestone_seq() == (int64_t)m1sh_first_seq("sceGsSetDefDBuff"));
    CHECK(db->initialised == 1 && db->w == 640 && db->h == 448 && db->psm == 0 && db->clear == 1 && db->zpsm == 1);
    CHECK(sceGsSetDefDBuff(NULL, 0, 0, 0, 0, 0, 0) == -1);

    /* orden y conteos */
    CHECK(m1sh_get(0) && strcmp(m1sh_get(0)->name, "sceSifInitRpc") == 0);
    CHECK(m1sh_first_seq("sceSifInitRpc") < m1sh_first_seq("sceCdInit"));
    CHECK(m1sh_first_seq("sceCdInit") < m1sh_first_seq("sceDmaReset"));
    CHECK(m1sh_first_seq("sceDmaReset") < m1sh_first_seq("sceGsResetPath"));
    CHECK(m1sh_first_seq("sceGsResetGraph") < m1sh_first_seq("sceGsSetDefDBuff"));
    CHECK(m1sh_count("sceSifLoadModule") == 2 && m1sh_count("sceGsSetDefDBuff") == 2);
    CHECK(m1sh_count("nada") == 0 && m1sh_first_seq("nada") == -1);
    CHECK(m1sh_total() == (uint32_t)trace_calls);
    CHECK(m1sh_get(0)->arg[0] == 0 && m1sh_get(m1sh_total()) == NULL);
    /* el puntero del juego se registra como puntero host: se vuelve a traducir */
    {
        const m1sh_call *c = m1sh_get((uint32_t)m1sh_first_seq("sceGsSetDefDBuff"));
        CHECK(c && c->arg[0] == (uint64_t)(uintptr_t)db && c->arg[2] == 640 && c->arg[3] == 448);
        CHECK(Port_Addr((void *)(uintptr_t)c->arg[0]) == gdb);
    }

    /* GS: swap y vsync */
    sceGsSwapDBuff(db, 1); sceGsSwapDBuff(db, 0);
    CHECK(db->swap_count == 2);
    CHECK(sceGsSyncV(0) == 1 && sceGsSyncV(0) == 0 && sceGsSyncV(0) == 1);
    CHECK(sceGsSyncPath(0, 0) == 0);

    /* DMA */
    ch = sceDmaGetChan(SCE_DMA_GIF);
    CHECK(ch && ch->hw_addr == 0x1000A000u && ch->chan_id == 2);
    CHECK(sceDmaGetChan(99) == NULL && sceDmaGetChan(-1) == NULL);
    CHECK(sceDmaSend(ch, mem + 0x32f480) == 0);
    CHECK(ch->sends == 1 && ch->last_tag_gaddr == 0x32f480);
    CHECK(sceDmaSend(NULL, NULL) == -1);
    CHECK(sceDmaSync(ch, 0, 0) == 0);
    CHECK(sceDmaGetChan(SCE_DMA_VIF1)->hw_addr == 0x10009000u);
    {   /* la traza registra el canal por su direccion de hardware, como la recomp (ch=0x1000a000) */
        const m1sh_call *c = m1sh_get((uint32_t)m1sh_first_seq("sceDmaSend"));
        CHECK(c && c->arg[0] == 0x1000A000u && c->arg[1] == 0x32f480);
    }

    /* sceGifPkt: GIFtag con NLOOP cerrado al final */
    pb = (uint64_t *)Port_Ptr(m1_heap_alloc(256, 16));
    sceGifPkInit(&pk, pb);
    CHECK(sceGifPkQwc(&pk) == 0);
    sceGifPkOpenGifTag(&pk, 0x1000000000008000ull | 0x7FFF, 0xEull);   /* nloop basura que debe limpiarse */
    sceGifPkAddGsAD(&pk, 0x4C, 0xAAAA);
    sceGifPkAddGsAD(&pk, 0x4D, 0xBBBB);
    sceGifPkCloseGifTag(&pk);
    CHECK((pb[0] & 0x7FFF) == 2 && (pb[0] >> 15) == (0x1000000000008000ull >> 15) && pb[1] == 0xE);
    CHECK(pb[2] == 0xAAAA && pb[3] == 0x4C && pb[4] == 0xBBBB && pb[5] == 0x4D);
    CHECK(sceGifPkQwc(&pk) == 3);
    sceGifPkAddGsAD(&pk, 1, 2);                 /* sin tag abierto: no escribe */
    CHECK(sceGifPkQwc(&pk) == 3);
    sceGifPkOpenGifTag(&pk, 0, 0);
    sceGifPkAddGsAD(&pk, 0x50, 1);
    end = sceGifPkTerminate(&pk);               /* cierra el tag abierto */
    CHECK(end == pb + 10 && (pb[6] & 0x7FFF) == 1);
    sceGifPkReset(&pk);
    CHECK(sceGifPkQwc(&pk) == 0);
    sceGifPkInit(NULL, pb); sceGifPkAddGsAD(NULL, 0, 0);   /* tolera NULL */

    /* CD: sin gancho devuelve 1 sin tocar buf; con gancho lo sirve */
    {
        uint8_t *buf = mem + 0x500000;
        CHECK(sceCdRead(100, 2, buf, NULL) == 1 && buf[0] == 0);
        m1sh_set_cd_read(cd_hook, NULL);
        CHECK(sceCdRead(100, 2, buf, NULL) == 1 && buf[0] == 0xCD && cd_calls == 1);
        CHECK(sceCdRead(0xDEAD, 1, buf, NULL) == 0);
        {
            const m1sh_call *c = m1sh_get((uint32_t)m1sh_first_seq("sceCdRead"));
            CHECK(c && c->arg[0] == 100 && c->arg[1] == 2 && c->arg[2] == 0x500000);   /* destino como direccion del juego */
        }
    }
    CHECK(FlushCache(0) == 0);

    /* reset: limpia registro y hito, conserva el gancho de CD */
    m1sh_reset();
    CHECK(m1sh_total() == 0 && !m1sh_milestone_reached() && m1sh_count("sceCdInit") == 0);
    CHECK(sceSifLoadModule("x", 0, NULL) == 1);
    m1sh_set_cd_read(NULL, NULL);

    /* registro lleno: sigue contando pero no guarda mas */
    m1sh_reset();
    for (i = 0; i < (int)M1SH_LOG_CAP + 10; i++) sceCdSync(0);
    CHECK(m1sh_total() == M1SH_LOG_CAP + 10 && m1sh_count("sceCdSync") == M1SH_LOG_CAP + 10);
    CHECK(m1sh_get(M1SH_LOG_CAP - 1) != NULL && m1sh_get(M1SH_LOG_CAP) == NULL);

    /* volcado de texto */
    m1sh_reset();
    sceSifInitRpc(0);
    {
        FILE *f = tmpfile();
        char line[128] = {0};
        if (f) {
            m1sh_dump(f); rewind(f);
            CHECK(fgets(line, sizeof line, f) && strncmp(line, "0 sceSifInitRpc(0x0,", 20) == 0);
            fclose(f);
        }
    }

    m1_arena_shutdown();
    DONE("test_shim");
}
