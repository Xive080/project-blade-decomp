/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * m1_rw.c - piezas de RenderWare del arranque (hasta el primer sceGsSetDefDBuff) hechas A MANO para el port.
 *
 * Estas funciones NO tienen byte-match ni fuente en src/: el original esta en el ELF sin simbolos y
 * aqui solo se reimplementa el comportamiento minimo de la ruta, leido del desensamblado (objdump
 * de toolchain/binutils, solo lectura del ELF) y escrito de nuevo. Los nombres RenderWare son
 * (hipotesis) por forma y orden. Cada funcion dice QUE NO HACE respecto al original.
 *
 * Datos: direcciones guest sobre la imagen (m1_gmem.h). Motor RW (hipotesis de layout, medido en el
 * desensamblado): objeto en 0x0032a620; dispositivo copiado en +16 (0x0032a630); +0x13c/+0x140/+0x144
 * punteros de funcion; +0x14c estado (0 nuevo, 1 iniciado, 2 abierto, 3 arrancado).
 * El dispositivo estatico del ELF esta en 0x002e4dc0 con fpSystem = 0x001e9810 en +4.
 */
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include "m1_gmem.h"
#include "m1/m1_arena.h"

#define RW_ENGINE   0x0032a620u
#define RW_DEVICE   (RW_ENGINE + 16u)
#define RW_STATE    (RW_ENGINE + 0x14cu)
#define RW_DEV_ROM  0x002e4dc0u          /* dispositivo estatico del ELF (lo devuelve 0x1e9a60) */
#define GP_REL(o)   ((uint32_t)(M1_GP + (int32_t)(o)))

extern long long func_001cda50(long long, long long, long long, long long);   /* stub: sin fuente */
extern long long func_001c5d60(long long, long long, long long, long long);   /* stub: sin fuente */

/* 0x001e9a60: devuelve la direccion del dispositivo RW estatico. La fuente de src/matched
 * (f_001e9a60.c) devuelve un puntero del host truncado a 32 bits, inutil aqui; se sustituye
 * por la direccion GUEST. */
long long func_001e9a60(void) { return RW_DEV_ROM; }

/* 0x001c2880 / 0x001c28a0: asignador del motor (+0x140/+0x144) cuando RwEngineInit lleva el bit 0.
 * Hipotesis: malloc(size) / free(ptr). Se implementan sobre el heap del juego de la arena. */
long long func_001c2880(long long size) { return (long long)m1_heap_alloc((uint32_t)size, 16); }
long long func_001c28a0(long long p) { return p ? (long long)m1_heap_free((plat_gaddr)p) : 0; }

/* 0x001c2ee0 RwEngineInit(a0, flags) (hipotesis). Original: fija los asignadores segun el bit 0 de
 * flags y, si el estado es 0, llama en cadena a 0x1cea20, 0x1c83f0(a0), 0x1c43f0, 0x1cd720 y 0x1c26b0
 * (subsistemas RW, sin fuente) y pone estado=1. AQUI: fija los asignadores y estado=1 SIN llamar a
 * esos cinco subsistemas (no se ejecutan, no cuentan como stubs). Falta para M3: su semantica. */
long long func_001c2ee0(long long a0, long long flags) {
    (void)a0;
    if (flags & 1) { m1_sw(RW_ENGINE + 0x140, 0x001c2880u); m1_sw(RW_ENGINE + 0x144, 0x001c28a0u); }
    else           { m1_sw(RW_ENGINE + 0x140, 0x001c8160u); m1_sw(RW_ENGINE + 0x144, 0x001c8140u); }  /* sin implementar */
    if (m1_lw(RW_STATE) != 0) return 0;
    m1_sw(RW_STATE, 1);
    return 1;
}

/* 0x001c28e0 llamada al dispositivo: r = dev->fpSystem(req, a2, a3, t0). Si r != 0 -> 1. Si r == 0 y
 * req en 13..18 el original salta por la tabla 0x2f0350 (opciones por omision); el resto es error
 * (aqui: 0, sin el aviso del original por 0x1c30e0/0x1c3070). */
long long func_001c28e0(long long dev, long long req, long long a2, long long a3, long long t0) {
    uint32_t fn = m1_lw((uint32_t)dev + 4);
    uint64_t r = m1_callg(fn, (uint64_t)req, (uint64_t)a2, (uint64_t)a3, (uint64_t)t0);
    if ((int32_t)r != 0) return 1;
    switch ((int32_t)req - 13) {
    case 0: if (a2) m1_sw((uint32_t)a2, 1); return 1;
    case 2: if (a2) m1_sw((uint32_t)a2, 0); return 1;
    case 3: return t0 == 0;
    case 4: case 5: return 1;
    default: return 0;           /* 14 (llama a un puntero del motor +248) y errores: no implementado */
    }
}

/* 0x001c2d40 RwEngineOpen(p) (hipotesis). p: puntero del HOST a un int de configuracion (lo pasa el
 * C decompilado); se copia a un bloque guest y se pasa su direccion al dispositivo (peticion 0).
 * Original: si estado==1 y p!=0: dev=0x1e9a60(); peticion 4 (dev->motor+16, +304), 0 (config), 11
 * (+72, t0=29); ++gp[-31328]; estado=2. Sin el camino de error (0x1c30e0/0x1c3070). */
long long func_001c2d40(long long p) {
    if (m1_lw(RW_STATE) != 1 || p == 0) return 0;
    uint32_t dev = (uint32_t)func_001e9a60();
    uint32_t cfg = m1_heap_alloc(16, 16);
    m1_sw(cfg, (uint32_t)*(const int32_t *)(uintptr_t)p);
    func_001c28e0(dev, 4, RW_ENGINE + 16, RW_ENGINE + 304, 0);
    int ok = (int)func_001c28e0(dev, 0, 0, cfg, 0);
    long long s0 = 0;
    if (ok) {
        func_001c28e0(dev, 11, RW_ENGINE + 72, 0, 29);
        m1_sw(GP_REL(-31328), m1_lw(GP_REL(-31328)) + 1);
        s0 = 1;
    }
    m1_heap_free(cfg);
    if (s0) m1_sw(RW_STATE, 2);
    return s0;
}

/* 0x001c2c30 RwEngineStart (hipotesis): peticion 2 (START) al dispositivo copiado en el motor+16.
 * Si responde: 0x1cda50(0x2e3790, motor) y, si da != 0, 0x1c5d60(float dev[0]) + peticion 17 + estado=3;
 * si no, peticion 3 (STOP). 0x1cda50 y 0x1c5d60 son stubs (sin fuente). */
long long func_001c2c30(void) {
    if (!func_001c28e0(RW_DEVICE, 2, 0, 0, 0)) return 0;
    if (func_001cda50(0x002e3790, RW_ENGINE, 0, 0)) {
        func_001c5d60(0, 0, 0, 0);       /* original: f12 = *(float*)RW_DEVICE */
        func_001c28e0(RW_DEVICE, 17, 0, 0, 0);
        m1_sw(RW_ENGINE + 332, 3);
        return 1;
    }
    func_001c28e0(RW_DEVICE, 3, 0, 0, 0);
    return 0;
}

/* 0x001c9cf0(a0): ajuste de memoria de RW (hipotesis). Solo la rama del primer arranque (gp[-31260]==0):
 * gp[-31272] = a0, devuelve 1. La rama con asignacion (0x1c9e00, 0x1ce670, punteros +304/+308) no esta. */
long long func_001c9cf0(long long a0) {
    if (m1_lw(GP_REL(-31260)) == 0) { m1_sw(GP_REL(-31272), (uint32_t)a0); return 1; }
    fprintf(stderr, "m1_rw: func_001c9cf0 rama no-inicial sin implementar\n");
    return 0;
}

/* 0x001dedc0(a0, a1, a2): copia los tres argumentos a globales (gp[-31136], gp[-31132], gp[-31128]) si
 * gp[-31108]==0 y devuelve 1. Original: con a2!=0 y a0==1 ademas imprime un aviso (0x11fe10) y pone
 * gp[-31128]=0; aqui no se imprime. Si gp[-31108]!=0 el original imprime y devuelve 0. */
long long func_001dedc0(long long a0, long long a1, long long a2) {
    if (m1_lw(GP_REL(-31108)) != 0) return 0;
    m1_sw(GP_REL(-31132), (uint32_t)a1);
    m1_sw(GP_REL(-31136), (uint32_t)a0);
    m1_sw(GP_REL(-31128), (uint32_t)a2);
    if (a2 != 0 && a0 == 1) m1_sw(GP_REL(-31128), 0);
    return 1;
}

/* 0x00208770: registra 8 plugins/chunks de RW con 0x1c2a00(tam, id 1281..1291, ctor, dtor) y, si todos
 * van bien, llama a 0x209ac0 y 0x2175f0. AQUI: no registra nada y devuelve 1 (no se llama a 0x1c2a00,
 * 0x209ac0 ni 0x2175f0). Falta para M2/M3: el registro de plugins que el cargador de assets usara. */
long long func_00208770(void) { return 1; }

/* 0x001c2a00 (hipotesis: RwEngineRegisterPlugin(size, pluginID, ctor, dtor) -> offset). Lo llaman 0x208770
 * (aqui no), 0x16bd50, 0x16b390, 0x249010 y 0x247df0 con (tam, id, ctor, dtor). Original: guarda el
 * plugin en las listas del motor y devuelve el desplazamiento de su dato dentro de la estructura
 * ampliada, o < 0 si falla. AQUI: lleva una cuenta de bytes y devuelve el desplazamiento acumulado; no
 * guarda el id ni invoca ctor/dtor (no hay objetos RW que construir hasta M3). */
long long func_001c2a00(long long size, long long id, long long ctor, long long dtor) {
    static uint32_t offset;
    (void)id; (void)ctor; (void)dtor;
    uint32_t r = offset;
    offset += (uint32_t)size;
    return (long long)r;
}
