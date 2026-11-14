# AirBlade Decomp (Camino B — decomp + motor sustituido)

> 🔴 **Estado:** el trabajo está ahora en la recomp de AirBlade (pausa del decomp por ahora). La recomp ya arranca y se juega entera, pero aún no llega a 60 FPS: ~24 V/s en partida con el VU1 nativo (14,7 sin él, modo determinista); el GS en GPU (Vulkan) ya da 0 diferencias frente a la CPU y sube el menú de 46 a 77 V/s. Falta medir todo junto.

Decompilación del juego de PS2 **AirBlade** (PAL, `SCES-50246`) con el objetivo de
un port jugable a PC, siguiendo el patrón del proyecto BT3-Decompiled pero adaptado
al hecho de que AirBlade usa el motor **RenderWare**.

## Estrategia: Camino B (híbrido)

No se decompila el binario entero. Se separa en dos mitades:

1. **Código propio del juego** (gameplay, físicas de hoverboard, IA, menús, flujo) →
   se decompila a C y se busca *byte-match* contra el ELF original, recompilando con
   el compilador original (Metrowerks CodeWarrior MIPS 2.4.1.01).
2. **RenderWare** (render, mundo, geometría, pipelines VU1) → **NO se decompila**.
   Se trata como caja negra y en el port se sustituye por [`librw`](https://github.com/aap/librw)
   (reimplementación libre de RenderWare con backend OpenGL/D3D9 moderno).

Así se evita lo más costoso: reimplementar el GS y el microcódigo VU1.

## El binario objetivo

| Dato | Valor |
|---|---|
| Juego | AirBlade (Europe/Australia, multi-idioma) |
| ID | `SCES-50246` (PAL, VMODE PAL) |
| ELF | `SCES_502.46` — 2 319 516 bytes |
| SHA1 | `1e8e5acc5e96d9123696e887c90189fd29fe6309` |
| SHA256 | `992e48de03c394305f3a9dc0d54320169128b76d90592fdd80c52e320693d6d6` |
| Arch | MIPS-III LE 32-bit (Emotion Engine R5900), estático, stripped |
| Entry | `0x00233218`, carga en `0x00100000` |
| Compilador | `MW MIPS C Compiler (2.4.1.01)` (Metrowerks CodeWarrior PS2) |
| Motor | RenderWare 3.x (Criterion) |
| Funciones (aprox.) | ~3 000–3 500 (estimado por conteo de `jr $ra`) |

## Requisitos legales

Este repo **no contiene datos del juego ni el ELF**. Hay que aportar una copia propia
del disco. `SCES_502.46` y los assets pertenecen a sus titulares de derechos.
`src/` reconstruye su lógica; el runtime del port (`port/`) es código nuevo.

## Layout

```
config/     config de splat (desensamblado), mapa de símbolos, segmentos
src/        C decompilado (código propio del juego) — objetivo del byte-match
include/    headers reconstruidos
asm/        .s desensamblado aún no decompilado (no-match)
data/       tablas de datos extraídas
port/       capa de PC (todo bajo #ifdef PORT)
  src/      memoria, archivos, input, audio, main de PC
  rw/       pegamento juego <-> librw (sustituye a RenderWare)
tools/      splat, asm-differ, m2c, scripts de extracción/verificación
extern/     dependencias externas (librw como submódulo)
docs/       arquitectura y decisiones (ADR)
```

## Flujo de trabajo

1. `python3 configure.py --elf <ruta_al_SCES_502.46>` — verifica hash, prepara splat.
2. `splat` trocea el ELF en `asm/` + `data/` + un mapa de símbolos.
3. Decompilar función a función: `m2c` da un primer C, se ajusta hasta byte-match
   (`asm-differ` compara el objeto recompilado con el original).
4. Las funciones RenderWare se **marcan como externas** y se redirigen a `port/rw/`.
5. `port/` compila el C decompilado para x86-64 + librw.

## Estado

Esqueleto inicial. Ver `docs/ARCHITECTURE.md` y el ADR del proyecto.
Pendiente: conseguir el compilador CodeWarrior PS2 exacto, afinar `config/splat.yaml`,
primera función byte-match como prueba de concepto.
