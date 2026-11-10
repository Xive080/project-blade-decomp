# Herramientas

Scripts y utilidades del decomp. Nada aquí usa rutas absolutas: todo se resuelve
relativo al repo o se pasa por argumento.

## Pendiente de añadir

- `extract_elf.py` — extrae `SCES_502.46` y `SYSTEM.CNF` de un ISO (envoltorio de 7z).
- `first_pass.py` — pase inicial de `find_file_boundaries` + semillas de símbolos.
- `diff.sh` — envoltorio de asm-differ para una función concreta.
- Conteo de funciones (hecho a mano en el análisis inicial: ~3 859 `jr $ra`).

## Dependencias externas (instalar en .venv)

```
pip install splat64 spimdisasm
pip install mips-to-c          # m2c
# asm-differ: clonar de https://github.com/simonlindholm/asm-differ
```

## Compilador original (bloqueante para byte-match)

`MW MIPS C Compiler (2.4.1.01)` — Metrowerks CodeWarrior para PS2.
Sin él, las funciones del código propio solo pueden alcanzar equivalencia
funcional, no byte-match exacto. Conseguirlo es tarea abierta (ver ADR).

## Pasada m2c + correcciones automáticas (sin modelo)

Corre en el contenedor `airblade-decomp:latest` (amd64; en Mac ARM va por qemu) con el repo montado; m2c
va fuera del contenedor porque bajo qemu es ~15 veces más lento. Los datos y el compilador siguen en
`toolchain/` y `SCES_502.46` (no versionados).

```
python3 tools/m2c_enum.py                    # build/cands2.json (candidatas)
python3 tools/m2c_pass.py gen 2 400 4        # build/a2/*.s con símbolos %hi/%lo/%gp_rel
tools/m2c_native.sh                          # m2c nativo -> build/a2/*.m2c (fuera del contenedor)
python3 tools/m2c_pass.py check 2 400 4      # compila, compara y prueba correcciones
python3 tools/m2c_pass.py retry 2 120 4      # reintenta fallidas tras mejorar las correcciones
python3 tools/m2c_finalize.py                # limpia, reverifica byte a byte y copia a src/matched
```

`tools/m2c_pass.py` hace lo que antes se hacía a mano con cada borrador de m2c: firma completa,
`arg0` pasante en las llamadas, aritmética en bytes, arrays globales, structs por parámetro, struct
en `$gp`, globales grandes en funciones con `$gp`, `volatile`, casts que pide el compilador y
prototipos sin parámetros cuando no coinciden. Las reglas están en `tools/lessons.md`.
