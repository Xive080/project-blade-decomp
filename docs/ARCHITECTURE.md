# Arquitectura — AirBlade Decomp

## Resumen

Port a PC de AirBlade (PS2, `SCES-50246`) por el **Camino B**: decompilar el código
propio del juego y sustituir el motor RenderWare por `librw` en vez de reimplementarlo.

## Las tres capas

```
┌────────────────────────────────────────────┐
│  src/   Código propio decompilado (C)       │  ← byte-match vs ELF original
│         gameplay, físicas, IA, menús, flujo │     (CodeWarrior PS2 2.4.1.01)
├────────────────────────────────────────────┤
│  port/rw/  Pegamento RenderWare → librw     │  ← código nuevo (#ifdef PORT)
│            traduce llamadas RW a API rw::    │
├────────────────────────────────────────────┤
│  extern/librw  Motor RenderWare libre        │  ← dependencia externa (MIT)
│                backend OpenGL / D3D9         │
└────────────────────────────────────────────┘
```

## Qué se decompila y qué no

| Bloque | ~% binario | Acción |
|---|---|---|
| SDK Sony (libcdvd, libpad, libmc, libdma, libgraph) | 15–20% | Identificar por firma; stub en el port |
| RenderWare 3.x | 30–40% | **No decompilar**; sustituir por librw |
| Lógica propia de AirBlade | 40–50% | **Decompilar y byte-match** |
| VU0/VU1 microcódigo | pequeño | Lo cubre librw en el port; no se reimplementa |

## Frontera juego ↔ RenderWare

El único reversing "de motor" que queda es reconstruir la **interfaz**: qué
estructuras (clumps, frames, cámaras, mundos) crea AirBlade y cómo las pasa a RW.
Eso se descubre decompilando el código propio, y se materializa en `port/rw/rw_glue.*`.

## Verificación (matching)

- El código propio se recompila con el CodeWarrior PS2 original y se compara el
  objeto resultante contra el ELF con `asm-differ` hasta byte-match.
- El port no busca byte-match: valida equivalencia de comportamiento (como hizo
  BT3 con su "demo da el mismo estado frame a frame").

## Toolchain

- **splat** / **spimdisasm** — trocear el ELF en asm/data.
- **m2c** (mips_to_c) — primer pase de MIPS → C.
- **asm-differ** — comparar objeto recompilado vs original.
- **Metrowerks CodeWarrior MIPS 2.4.1.01** — compilador original (PENDIENTE de conseguir).
- **librw** — motor de render del port.

## Riesgos / incógnitas abiertas

1. **Compilador exacto**: sin el CodeWarrior PS2 2.4.1.01 el byte-match perfecto no
   es posible; habría que degradar a "equivalencia funcional" para esas funciones.
2. **librw vs RenderWare original**: librw no cubre todo (BSP no soportado; algunos
   DFF pre-instanciados de PS2 tampoco). Puede requerir parches.
3. **Interfaz RW**: si AirBlade usa pipelines RenderWare custom (probable, por las
   strings `_rwPS2MatInstancePipelineNodeInit`), el pegamento será más grueso.
