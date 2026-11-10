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
