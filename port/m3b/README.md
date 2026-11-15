<!-- SPDX-License-Identifier: AGPL-3.0-or-later -->
# port/m3b: spike de la ruta B (librw)

Programa de prueba que enlaza librw (MIT, MIT-compatible con AGPL) y arranca `rw::Engine` con GL3 sobre SDL2.
Informe completo: `docs/port/M3_ruta_B.md`. No contiene datos del juego ni el ELF; librw no se copia (FetchContent con commit fijado).

```
# macOS: brew install sdl2 cmake ninja   (Linux: libsdl2-dev; Windows: vcpkg sdl2)
cmake -S port/m3b -B build/m3b -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build/m3b -j2
build/m3b/m3b_probe --frames 60                         # ventana, camara, mundo vacio
build/m3b/m3b_probe --frames 0 --chunk <fichero>[@desplazamiento]   # carga un TXD o clump del disco del usuario
```

Si ya hay un clon de librw: `-DFETCHCONTENT_SOURCE_DIR_LIBRW=<ruta>`.

`tools/rw_calls.py` (barrido de `jal` ELF -> bloques RW) y `tools/rw_chunks.py` (inventario de chunks RW de los .BIN del usuario)
son solo lectura y reciben las rutas por argumento.
