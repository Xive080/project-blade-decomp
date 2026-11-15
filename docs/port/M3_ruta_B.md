<!-- SPDX-License-Identifier: AGPL-3.0-or-later -->
# M3, ruta B: sustituir el RenderWare de AirBlade por librw (spike de viabilidad)

Fecha de las mediciones: 2026-11-15. Todo lo medido sale de scripts repetibles (`port/m3b/tools/`) o de comandos citados.
Lo no comprobado esta marcado **(hipotesis)** o figura en la seccion 7. Solo lectura sobre el ELF (`SCES_502.46`), el disco
extraido y el repo de la recomp; no se toco `src/matched`, `docs/PORT_PLAN.md`, `web/` ni git. Nada del ELF ni de datos del
juego esta en el repo. Hay una tanda de matching escribiendo en `src/matched` mientras tanto: las cifras de "C real" cambian
unos pocos ficheros entre ejecuciones (1406, 1413 y 1415 en tres barridos).

## 0. Resumen

| Pregunta | Resultado medido |
|---|---|
| Version de RenderWare | **3.1** (cabeceras de chunk `0x310`: 64 086 de las 72 933 cabeceras con version 0x300-0x310 de los .BIN; librw la lee como 3.1.0.0). El ELF no trae sello de version (**hipotesis**: build de release). |
| Assets: formato | Texturas **PS2 nativas** (1211 de 1211, `platformId` = "PS2\0"); geometrias **no** preinstanciadas (862 de 862 sin el flag `native` y 0 chunks `NativeData 0x510`). |
| Cargan en librw | **404 de 404 clumps y 66 de 66 TXD** de todos los .BIN del disco cargan con `rw::Clump::streamRead` / `TexDictionary::streamRead` (GL3, macOS arm64); las 14 texturas del TXD de menus se convierten a raster GL3 (14/14). Carga correcta no es render correcto: no se ha dibujado ninguno. |
| BSP/WorldSector | **0 chunks World (0x0B), AtomicSect (0x09) ni PlaneSect (0x0A)** en los 89 ficheros no-audio del disco (737 MB). La premisa "sin BSP no se puede renderizar el nivel" de `PORT_PLAN.md` no se sostiene a nivel de datos. |
| Interfaz juego -> RW | **304 destinos RW distintos, 2759 sitios `jal`** desde codigo del juego (bloques de la tarea). 17 destinos identificados (43,1 % de los sitios) con equivalente en librw. Los otros 287 (56,9 %) **sin identificar**. |
| Prototipo | `port/m3b/` **compila y arranca** en macOS arm64: GL 3.3 core, ventana, camara, mundo vacio, 120 fotogramas. |
| Veredicto | **Viable con trabajo grande.** Ver seccion 5. |

## 1. Version de RenderWare y plugins

### 1.1 Evidencia en el ELF
- Cadenas: solo nombres de nodos `*.csl`, `PS2All*` y mensajes `_rwPS2MatInstancePipelineNodeInit` / `PS2AllMatProcessInitData`
  (ya inventariado en `docs/LIBRW_COVERAGE.md`). Busque ademas `renderware`, `criterion`, `rwversion`, `version`, `bsp`, `dff`, `txd`
  (sin resultados utiles; la unica `version` es `libpad: Module version mismatch`).
- Sellos de version en codigo: **0** `lui` con inmediato `0x1c00-0x1c0f` en todo el segmento de codigo, y 0 palabras `0x1c0x....` o
  `0x0003[3-7]...` en datos. El ELF no revela la version de la libreria.
- Registro de plugins: el codigo llama a `0x1c2a00` (en `m1` ya identificado como `RwEngineRegisterPlugin`, **hipotesis** por forma) con
  el id de plugin en `a1`, y a las rutinas de "adjuntar" `0x202590/0x2025c0/0x2025f0/0x202640` (constructor/destructor/copia/stream):
  barrido de `jal` con `li a1, <id>`:

| id | donde se registra | lectura (segun la tabla de ids de librw, `rwbase.h`) |
|---|---|---|
| 0x116 | 0x1fa6d0 | **Skin** (Criterion Toolkit 0x16) |
| 0x11e | 0x2005e0 | **HAnim** |
| 0x120 | 0x23c35c | **MatFX** |
| 0x105 | 0x1f775c | **(hipotesis)** Morph (no esta en la tabla de librw) |
| 0x108 | 0x1bea40 | sin identificar (**hipotesis**: plugin propio de RW 3.1 o del juego) |
| 0x132, 0x140, 0x150, 0x157, 0x16b, 0x1b5-0x1b8 | 0x1a6b1c, 0x16bd6c, 0x16b3ac, 0x24ac6c, 0x1b8e9c, 0x22153c... | en gran parte en direcciones de **codigo del juego** (0x16b-0x1b8): **(hipotesis)** plugins propios del juego sobre Frame/Atomic/Geometry |
| 0x401-0x40f | 0x1c26d4-0x1c285c | modulos internos de rwcore (vendor 4) |
| 0x501-0x50b, 0x50f | 0x208794-0x209b70, 0x21765c | modulos de rpworld/rtpipe (vendor 5) |

### 1.2 Evidencia en el disco (mas fuerte)
`python3 -I port/m3b/tools/rw_chunks.py --disc <disco extraido>` (73 .BIN, recuentos agregados):
- Cabeceras de chunk `(tipo, tamano, version)` con version de 12 bits `0x310` en casi todo: 64 086; el resto son versiones
  `0x300-0x309` (3427, 1024, 748, 1583, 440, 340, 491, 401, 393), **(hipotesis)** contenedores/anim propios del juego (tipos `0x90x-0x92x`, que
  no son de RW) y cuentas de ruido de la busqueda alineada a 4 bytes.
- `0x310` en el campo de version sin empaquetar es el formato anterior a 3.1.0.0 empaquetado; `libraryIDUnpackVersion` de librw (`rwbase.h:708`) lo
  devuelve como `0x31000` = **RW 3.1.0.0**. Compatible con un juego de 2001.
- `MENUS.BIN` empieza por un TexDict (`0x16`) v0x310 con 14 TexNative; `L0.BIN` empieza por un chunk propio `0x90f` v0x303 que contiene
  los clumps (`0x10`) mas adelante. Los .BIN son contenedores del juego, no un stream RW de un solo chunk.

Chunks con version 0x310 (todo el disco, .BIN):

| chunk | n | | chunk | n |
|---|---|---|---|---|
| Clump 0x10 | 404 | | Skin 0x116 | 185 |
| Geometry 0x0F | 862 | | HAnim 0x11e (en frames) | 7735 |
| Atomic 0x14 | 862 | | MatFX 0x120 | 703 |
| Material 0x07 | 1071 | | Mesh/BinMesh 0x50e | 862 |
| TexNative 0x15 | 1211 | | ext 0x108 / 0x140 / 0x132 / 0x157 / 0x105 / 0x118 | 7957 / 7795 / 817 / 376 / 852 / 34 |
| TexDict 0x16 | 66 | | AnimAnimation 0x1b | 13 |
| SkyMipmapVal 0x110 (solo PS2) | 1211 | | **World 0x0B / AtomicSect 0x09 / PlaneSect 0x0A / NativeData 0x510 / PipelineSet 0x253F2F3** | **0 / 0 / 0 / 0 / 0** |

Lecturas (todas por recuento, no por renderizado):
- Los niveles son **conjuntos de clumps/atomicos**, no un mundo BSP **(hipotesis)**: 0 chunks de mundo en 737 MB. Las cadenas
  `PS2AllWorldSector`/`PS2ManagerWorldSector` del ELF son el codigo de RW enlazado; que el juego no cree un RpWorld
  no se ha comprobado en el ELF (solo que los datos no lo traen).
- Ningun material/atomico lleva el plugin de pipelines `0x253F2F3`: **(hipotesis)** el juego usa los pipelines PS2All por omision y no
  asigna pipelines propios por dato (por codigo podria; no comprobado).
- Skin en 185 clumps, MatFX en 703 chunks: se necesitan skin GL3 y matfx (librw tiene ambos, ver 2).

## 2. Que soporta librw hoy

Commit analizado: `18532c2e13efbc1aa43f0b00b4459831f9414de0` (2026-08-26), licencia MIT (compatible con AGPL-3.0-or-later).
Fuente: `README.md`, `ARCHITECTURE.MD` y codigo de `src/` (clonado en el scratchpad, sin ejecutar nada fuera de la compilacion y del prototipo).

- Plataformas: `GL3` (SDL2/SDL3/GLFW; GL >= 2.1/GLES 2), `D3D9` (Windows), `PS2` (solo prueba), `NULL`. `wdgl` y D3D8/Xbox solo como formato de archivo.
- Formatos: DFF/TXD de PS2, D3D8, D3D9, Xbox. README: "Not all pre-instanced PS2 DFFs are supported. BSP is not supported at all."
- Pipelines propios: Default, Skin, MatFX (solo environment map); "Others can be implemented by applications". Sin grafo RxPipeline.
- Plugins: Mesh, NativeData, AtomicRights, MaterialRights, Skin, UserData, HAnim, MatFX, UVAnim, ADC, PDS.
- `rw::World` existe pero es solo un contenedor (luces, camaras, clumps); no es el RpWorld con sectores.

**Prueba directa en este Mac** (`port/m3b`, `--chunk`, version RW fijada a la del chunk): 
- TXD de menus (`MENUS.BIN`, v0x310, PS2): 14 texturas leidas como raster PS2 (256x256x8, 512x512x8...) y **14/14 convertidas** a raster GL3 con
  `Raster::convertTexToCurrentPlatform` (queda 32/24 bits sin paleta).
- Barrido de todo el disco (script de scratchpad que lanza `m3b_probe --chunk` por cada chunk con cabecera plausible): **404 clumps y 66 TXD, 0 fallos, 0 cuelgues**.
  Esto cubre skin (185), matfx (703) y hanim (7735 frames). Los plugins desconocidos (0x108, 0x140, 0x132, 0x157, 0x105, 0x118)
  los salta librw: **sus datos se pierden** (no se ha mirado que contienen).
- No comprobado: render de un clump real (tristrips PS2/BinMesh a pipeline GL3), que los materiales con MatFX salgan igual,
  la animacion HAnim con `AnimAnimation` v0x310, y los 13 `AnimAnimation`.

Conclusion de 2: la **carga** de los assets de disco con librw es viable hoy. El riesgo "DFF PS2 preinstanciados" **no aplica** a este juego
(0 NativeData, 0 geometrias con flag native).

## 3. El problema de la interfaz: el juego llama a RW por direccion

### 3.1 Metodo (repetible)
`python3 -I port/m3b/tools/rw_calls.py --elf SCES_502.46 --matched src/matched --ghidra-map <ghidra_map.csv>`
- Barrido de `jal` en el segmento de codigo del ELF (todas las instrucciones con opcode 3). Destino dentro de los bloques RW
  (`0x1bc000-0x20c000` y `0x214000-0x21c000`, los de la tarea) y origen fuera de ellos = una llamada "juego -> RW".
- Funcion llamadora por la tabla de limites de Ghidra (`work/ghidra_map.csv` de la recomp, solo lectura; sin ella el script usa los destinos de `jal`
  y la asignacion de llamadores es peor: no usar esa cifra). Clase del llamador: C real (existe `src/matched/f_<addr>.c` sin `asm`), asm (con `asm`), sin match.
- No ve llamadas indirectas (`jalr`, punteros en tablas, la tabla de funciones del motor RW en `0x32a620`): **subestima**.
- Contraste: la busqueda por `func_<addr>(` en el fuente da 372 sitios / 103 destinos (subestima: los .c usan tambien `f<addr>`, `f_<addr>`);
  el grafo codebase-memory da 235 aristas / 108 destinos (indice con 246 ficheros de `src/matched` sin parsear). El barrido de `jal` del ELF es la cifra de referencia.

### 3.2 Resultado

| Llamador | sitios `jal` -> RW | destinos RW distintos |
|---|---|---|
| C real (1413 funciones) | 551 | 136 |
| matched con asm | 1783 | 248 |
| sin match | 425 | 62 |
| **todos (fuera de RW)** | **2759** | **304** |
| dentro de RW (RW -> RW) | 2791 | 582 |

Peso: los 10 destinos mas llamados concentran el 40,0 % de los sitios, 25 el 57,5 %, 50 el 71,4 %, 100 el 85,2 %, 200 el 96,2 %.
Sensibilidad al limite de RW: con los cuatro bloques de `no_match.md` (0x1bc000-0x1d0000, 0x1d8000-0x1e0000, 0x1f4000-0x20c000, 0x214000-0x21c000)
salen **334 destinos y 3074 sitios** (los huecos 0x1d0000-0x1d8000 y 0x1e0000-0x1f4000 pasan a contar como "juego"). El limite real de RW **no esta cerrado**.

Cierre estatico por `jal` dentro de RW desde esos 304 destinos: **488 funciones y 31 949 instrucciones** de las 1024 funciones / 87 779
instrucciones de los bloques (36 %). Es lo que la ruta B dejaria de necesitar como mucho **(hipotesis)**: sin `jalr` el cierre real es mayor.

Dato clave sobre la VU1/GS: las rutinas de DMA/GIF del SDK (`0x1001a0`, `0x1008f0`, `0x100a70`, `0x100ec8`, `0x1dd730`) solo tienen llamadores `jal` en RW y en el SDK
(12 sitios en RW, 2 en SDK, 0 en codigo del juego). **El codigo del juego no empuja paquetes al GS por `jal` directo**; todo pasa por RW **(hipotesis fuerte, no vale para `jalr`)**.
Eso es lo que hace plausible sustituir RW entero.

### 3.3 Destinos identificados (17 de 304, 1189 de 2759 sitios = 43,1 %; 168 de 551 en C real = 30,5 %)
Nombre RW por forma y por la estructura (offsets de `RwFrame`, banderas de combinacion de matrices, constante `pi/180` = `0x3c8efa35`): **(hipotesis)**
salvo donde se indica. Todos tienen equivalente directo en librw.

| destino | sitios (C real/asm/sin match) | funcion RW (hipotesis) | equivalente librw |
|---|---|---|---|
| 0x1c3b70 | 35/156/40 | RwFrameGetMatrix (`a0+16`) | `Frame::getMatrix` (otra struct) |
| 0x1c3b80 | 8/157/16 | RwFrameGetLTM (`a0+0x50`, sincroniza si sucio) | `Frame::getLTM` |
| 0x1ce160 | 21/92/19 | RwV3dNormalize | `V3d::normalize` |
| 0x1ca2d0 | 22/48/2 | RwStreamRead (stream, buf, n) | `Stream::read8/32` |
| 0x1ce3f0, 0x1ce410 | 15/30/12, 5/39/6 | RwMalloc / RwFree (salto a la tabla de memoria del motor) | `rwNew/rwFree` |
| 0x1c3b00 | 7/33/7 | marca frame sucio + lista | interno de `Frame` |
| 0x1c35a0 | 10/9/8 | RwFrameCreate | `Frame::create` |
| 0x1ce240 | 10/22/12 | RwV3dLength | `length(V3d)` |
| 0x1c7340, 0x1c7610, 0x1c7c70, 0x1c7320 | | RwMatrixMultiply (COP2), Rotate, Transform, Update | `Matrix::mult/rotate/transform/optimize` |
| 0x1bf2b0 | 5/18/0 | RwStreamReadChunkHeaderInfo | `readChunkHeaderInfo` |
| 0x1ff7d0, 0x1fefa0 | 8/60/22, 4/54/66 | RtAnimInterpolatorAddAnimTime / SetCurrentAnim | `AnimInterpolator::addTime/setCurrentAnim` |
| 0x1c2a00 | 9/1/0 | RwEngineRegisterPlugin | `registerPlugin` (firma distinta) |

Los 287 destinos restantes (**56,9 % de los sitios**) **no se han identificado**: no hay simbolos ni cadenas de API en el ELF. No puedo dar una cifra honesta de
"cuantos tienen equivalente directo" mas alla de los 17; lo esperable **(hipotesis)** es que la mayoria (frames, camara, luces, raster/textura, atomico/clump/geometria, matrices) si lo tengan y
que lo que no (RxPipeline/PS2All, Im3D PS2, material PS2 por pipeline, `0x21a520/0x21a980`, una funcion con tabla de 9 casos de ~46 sitios,
no identificada) requiera codigo propio.

### 3.4 Por que no basta con "enlazar la API"
1. **Estructuras con layout original.** El juego, compilado para PS2, accede a campos de objetos RW por offset (por ejemplo `lw v1,168(a0)`, la tabla de funciones del motor en `0x32a620`
   con la memoria en `+8/+12` y `+304/+308`). librw usa sus propias clases C++ con otro layout. Hay que decidir: o el port mantiene las structs RW en memoria "guest" y
   traduce al `rw::*` en cada llamada (identificador/mapa), o se parchean los accesos. **No he medido cuantos accesos directos hay** (seccion 7).
2. **Punteros de 4 bytes.** El C decompilado usa punteros host de 8 bytes; las tablas del ELF, de 4 (ya documentado en `m1.md`, "Punteros en la frontera").
3. **Plugins propios del juego** (ids 0x132, 0x140, 0x150, ...): hay que registrar equivalentes en `rw::Frame/Atomic::registerPlugin` y leer sus datos de los chunks.
4. **Callbacks y tablas del motor** (`jalr` por la tabla RW): no son llamadas a libreria.

## 4. Prototipo (`port/m3b/`)

- `CMakeLists.txt` baja librw por `FetchContent` con el commit fijado (no se copia), `LIBRW_PLATFORM=GL3`, `LIBRW_GL3_GFXLIB=SDL2`, sin tools.
- `src/m3b_probe.cpp`: `rw::Engine::init/open/start` con ventana SDL2, camara con frame y rasters, `rw::World` vacio con una luz, N fotogramas de
  `clear / beginUpdate / world->render / endUpdate / showRaster`, y cierre ordenado. Opcion `--chunk <fichero>[@offset]` para cargar un TXD o clump **del disco del usuario**.
- Resultado (macOS 26.6.2, arm64, CMake 4.3.4, Ninja, SDL2 2.32.70 de `sdl2-compat`, `-j2`):
  - Configura y **compila** (65 unidades, solo avisos `unused parameter` de librw), enlaza `m3b_probe`.
  - `m3b_probe --frames 120`: `rw::Engine arrancado: platform=12 (12 = GL3) gles=0 glversion=33 dxt=1` y `OK: 120 fotogramas renderizados`. Salida 0. **GL 3.3 core en Apple Silicon.**
  - Tropiezos reales: (1) con `Texture::streamRead` hay que **no** retroceder tras `readChunkHeaderInfo` (la cabecera ya esta consumida); (2) `convertTexToCurrentPlatform` destruye el raster original: destruirlo dos veces aborta (`exit 134`).
- No hay `-DPORT` ni conexion con el C del juego: esto es solo comprobar que librw arranca y carga los assets.

## 5. Veredicto

**Viable con trabajo grande.** No es "no viable": cargar los assets funciona, no hace falta BSP ni preinstanciados, GL3 arranca en el Mac, y el codigo del juego no toca el GS
directamente por `jal`. No es "viable sin mas": falta la capa de interfaz de ~300-334 entradas (solo 17 identificadas), el layout de las structs y los pipelines.

### 5.1 Riesgos principales
1. **Formato PS2 nativo de los assets**: *riesgo bajo para la carga* (medido: 404/404 y 66/66), **no medido para el render** (tristrips PS2, `BinMesh`, `SkyMipmapVal`, mipmaps de 8 bits). Los plugins 0x108/0x132/0x140/0x157 se descartan al cargar.
2. **Pipelines PS2AllMat**: los assets no traen `PipelineSet`; librw tiene Default, Skin y MatFX (solo env map). Los 703 MatFX pueden usar efectos que librw no tiene (bump, dual) **(hipotesis)**. La recomp mide 72 microprogramas VU1 distintos en 5 escenas
   (`PERFORMANCE_BASELINE.md`): son las variantes del pipeline PS2All (lit/prelit/skin/matfx/clip...) **(hipotesis)**, no 72 efectos propios. Si alguno es de efectos del juego (hoverboard, agua, particulas), habria que reescribirlo como shader GL3.
3. **VU1**: en la ruta B el microcodigo de VU1 **deja de existir** (RW lo mandaba; librw dibuja con shaders). Es lo que quita el 61-84 % del hilo EE que mide la recomp en el intérprete de VU1; el coste es reescribir el comportamiento visual en shaders y que RW deja de decidir culling/clipping como en PS2.
4. **Interfaz**: 287 destinos sin identificar + layout de structs + plugins propios. Es el grueso del trabajo.
5. **Limite de RW no cerrado**: 304 o 334 destinos segun los bloques; hay codigo del juego mezclado en 0x1d0000-0x1d8000 y 0x1e0000-0x1f4000 **(hipotesis)**.
6. Fidelidad: iluminacion, orden de dibujado y efectos de GS (alpha, z-test PS2) pueden diferir de PS2/recomp; solo se sabe comparando imagen contra la ruta A.

### 5.2 Que ahorra la ruta B en matching (medido)
De las 1374 funciones `rw_sdk` sin match (100 806 instr.), **787 (59 849 instr., 59 %) estan en los dos bloques RW** y **587 (40 957 instr.) fuera** (zona SDK/libc/libm/kernel que la ruta B no toca).
Con RW fuera, quedarian sin match por otras causas las ~730 del juego mas esas 587. Los bloques RW ocupan 0x58000 bytes = **15,5 % del ELF** (2 319 516 bytes), no el 35 % de la tarea (la cifra de 35 % no la he podido reproducir: 1374 funciones = 403 KB = 17,4 %).

### 5.3 Comparacion con la ruta A (cuantitativa donde hay datos)

| | Ruta A (recomp GS + VU1, Vulkan) | Ruta B (librw GL3) |
|---|---|---|
| Rendimiento medido | La recomp: 14-25 V/s en partida (ADR 2026-11-12, `AIRBLADE_ISSUES.md` AB-001: 11-25 con el build "dev 2"); GS 23-29 ms/fotograma, techo 34-43 V/s **(hipotesis, ADR)**; el VU1 interpretado/compilado ocupa ~75-90 % del EE. La cifra de 24-32 V/s con Vulkan de la tarea **no la he encontrado en esos documentos**. | **No medido.** Sin emulacion de GS ni VU1; **(hipotesis)** el coste pasa al codigo del juego (EE) y al driver GL de Apple. No doy V/s. |
| Esfuerzo (modulos) | GS Vulkan 11-19 sesiones Opus + 5-10 Sonnet (`D2_VIA_GPU.md`, **(hipotesis)** del propio documento) + VU1 compilado. Reutiliza `sceGs*`/DMA ya hechos. | Capa de interfaz: 304-334 entradas (17 identificadas) + bridge de structs + shaders de efectos + plugins propios. **Estimacion mia (hipotesis):** del orden de 10-20 sesiones (identificar ~25-30 entradas por sesion, el resto por familias), sin contar la validacion visual. |
| Fidelidad | Maxima por construccion (comparacion de VRAM contra la recomp). | Aproximada; solo por imagen. |
| Dependencia de RW propio | RW original sigue ejecutandose (hay que portar sus 1374 funciones sin match o seguir emulando EE con la recomp). | No hace falta portar las ~787 sin match de RW (59 %); si hay que portar el resto del juego. |
| Portabilidad | Vulkan: MoltenVK/KosmicKrisp en Mac (`D2_VIA_GPU.md`). | OpenGL: **deprecado en macOS** pero funciona (GL 3.3 core medido aqui); GLES/Windows/Linux por SDL2. |

Lectura sin maquillaje: la ruta B reduce el trabajo de matching (59 849 instrucciones de RW) y elimina GS/VU1 emulados, pero **cambia** ese trabajo por una capa de interfaz de ~300 entradas
cuya mayor parte aun no esta identificada, y pierde la comparacion bit a bit con la recomp. La unica cifra que decidiria entre A y B (V/s de B con un nivel real) **no existe todavia**.

### 5.4 Siguientes pasos (si se decide seguir con B)
1. Renderizar un clump real de `L0.BIN` en `m3b_probe` (textura del TXD + luz) y compararlo con la recomp en el mismo punto: sube de "carga" a "render".
2. Identificar los 287 destinos por familias usando el tamano, los offsets de estructura y el cierre de llamadas; empezar por los 50 mas llamados (71,4 % de los sitios).
3. Medir accesos directos a campos RW desde el C del juego (la seccion 3.4 punto 1) antes de decidir el layout.
4. Cerrar el limite RW (0x1d0000-0x1d8000 y 0x1e0000-0x1f4000).

## 6. Reproducir

```
# inventario de chunks (disco extraido del usuario)
python3 -I port/m3b/tools/rw_chunks.py --disc <carpeta del disco>
# barrido de jal (ELF del usuario + src/matched + limites de Ghidra de la recomp)
python3 -I port/m3b/tools/rw_calls.py --elf SCES_502.46 --matched src/matched --ghidra-map <ghidra_map.csv>
python3 -I port/m3b/tools/rw_calls.py --elf SCES_502.46 --matched src/matched --ghidra-map <ghidra_map.csv> \
    --ranges 1bc000-1d0000,1d8000-1e0000,1f4000-20c000,214000-21c000
# prototipo
cmake -S port/m3b -B build/m3b -G Ninja && cmake --build build/m3b -j2 && build/m3b/m3b_probe --frames 120
build/m3b/m3b_probe --frames 0 --chunk <disco>/MENUS.BIN
build/m3b/m3b_probe --frames 0 --chunk <disco>/L0/L0.BIN@4636848      # un clump de L0
```
Desensamblado usado: `mips-linux-gnu-objdump -d -EL -m mips:5900`.

## 7. Lo no comprobado

- Render de cualquier modelo o textura; HAnim/AnimAnimation en ejecucion; skin y matfx dibujados.
- Nombre de 287 de los 304 destinos RW (y por tanto "cuantos tienen equivalente directo": solo 17 confirmados por forma).
- Accesos directos del juego a campos de structs RW; llamadas `jalr`/tablas (todas las cifras de la seccion 3 son por `jal`).
- Que significan los plugins 0x108, 0x132, 0x140, 0x157, 0x105, 0x118; si el juego crea RpWorld por codigo.
- Que los 72 microprogramas VU1 sean solo variantes de PS2All; si el juego tiene efectos propios en VU1.
- La version exacta de RW dentro de 3.1.x (el sello 0x310 no lleva build) y que 0x300-0x309 sean propios del juego.
- Rendimiento de B; la cifra 24-32 V/s de la ruta A (no la he visto en los documentos leidos).
- Los 89 ficheros recorridos para "0 chunks World" excluyen `.VAG/.AC3/.IOP/.IRX/.ISO`; un contenedor comprimido no se veria.
- El ADR del proyecto (`manage_adr`) no se ha actualizado desde este spike.
