#!/bin/sh
# m2c fuera del contenedor (nativo, rápido) sobre los .s de build/a2 que aún no tienen .m2c.
# M2C: ruta a m2c.py (por defecto toolchain/m2c-native/m2c.py, enlace local no versionado).
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
M2C="${M2C:-$ROOT/toolchain/m2c-native/m2c.py}"
cd "$ROOT/build/a2" || exit 1
ls *.s | sed 's/\.s$//' | while read n; do [ -f "$n.m2c" ] || echo "$n"; done | \
  xargs -P 8 -I{} sh -c "python3 '$M2C' -t mipsee-mwcc-c --valid-syntax {}.s > {}.m2c 2>/dev/null || echo FAIL > {}.m2c"
