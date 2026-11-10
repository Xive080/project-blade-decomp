# Cobertura de librw frente a lo que usa AirBlade (9 nov 2026)

Tabla detallada en `build/librw_map.json` (56 entradas). Método: `strings` sobre `SCES_502.46` + inspección de `extern/librw/src` (fecha del clon: 26 ago 2026). Solo lectura.

## 0. Limitación importante de la evidencia

El RenderWare del ELF está compilado sin casi cadenas: de 5 473 cadenas solo salen nombres de nodos de pipeline (`*.csl`) y mensajes de error del pipeline PS2. **No hay ninguna cadena `Rw*`, `Rp*`, `Rt*` de API**, ni de skin, matfx, uvanim, hanim, BSP o TXD. Todo lo que sigue sobre skin/matfx/etc. es **inferencia** (RW 3.x estándar + las animaciones `RTCS%d_P/_R`), no confirmación. La confirmación real saldrá de decompilar los llamadores del código propio o de buscar los IDs de plugin (0x116 skin, 0x120 matfx, 0x11E uvanim...) en las tablas de datos.

## 1. Qué usa el juego (evidencia directa)

| Grupo | Cadenas | Lectura |
|---|---|---|
| Pipelines PS2All | `PS2AllAtomic`, `PS2AllWorldSector`, `PS2AllMat`, `PS2All.csl`, `PS2ObjAtomicAllInOne(Out)`, `PS2ObjWorldSectorAllInOne(Out)`, `AllInOneAtomic`, `VanillaAtomic`, `VanillaWorldSector`, `AllInOneWorldSector`, `PS2 material/sector/stomic pipes` | Pipelines stock de RW 3.x PS2 (atomic + sector + material). |
| Nodos Rx / PS2 | `PS2ManagerAtomic/WorldSector/Im3D.csl`, `PS2MatInstance.csl`, `PS2MatBridge.csl`, `PS2Mesh.csl`, `MaterialScatter.csl`, `AtomicInstance.csl`, `WorldSectorInstance.csl`, `*EnumerateLights.csl`, `Transform/Light/Lights/PreLight/PostLight/Clip*/Cull/Submit*.csl`, `Imm*.csl`, `PS2xyz/uv/uv2/rgba/normal/user1-4.csl`, `Rx*Vertices/Interpolants/TriPlanes/VSteps.csl` | Framework RxPipeline completo. Todos stock; **no se ve ningún nodo propio de AirBlade**. |
| Init de pipeline PS2 | `_rwPS2MatInstancePipelineNodeInit`, `PS2AllMatProcessInitData` (mensajes de CL_ATTRIB_*) | Código interno de RW que valida clusters. |
| Mundo | `*WorldSector*` (arriba) | El juego usa sectores de mundo (RpWorld/BSP). |
| Im3D/Im2D | `PS2ManagerIm3D`, `Imm*.csl`, `PS2Im3DFastTransform` | Modo inmediato. |
| SDK Sony (no RW) | `sceGs*`, `libdma`, `libpad`, `PADMAN.IRX`, `Dma chain pre alloc failed` | libgraph/libdma/libpad. Fuera del alcance de librw. |
| Decodificador de vídeo | `load_chroma_intra_quantizer_matrix` | libmpeg/MPEG2 (SDK o middleware), no RW. |
| Propio del juego | `RTCS%d`, `RTCS0_P/_R`, `animation %s_R has only %d frames!!` | Nombres de animación del juego: código propio, no RW. |

## 2. Cobertura por módulo

| Módulo RW | librw | Detalle |
|---|---|---|
| rwcore (Engine, Stream, V3d/Matrix, Frame, Camera, Texture, Raster, Image, Im2D/Im3D, memoria) | **Sí** | `engine.cpp`, `base.cpp`, `frame.cpp`, `camera.cpp`, `texture.cpp`, `raster.cpp`, `image.cpp`, `render.cpp`. Es C++ (`rw::`), el juego llama a API C (`Rw*`): hace falta capa de nombres. |
| rpworld: Geometry/Material/Atomic/Clump/Light | **Sí** | `geometry.cpp`, `clump.cpp`, `light.cpp`. |
| rpworld: World / WorldSector / BSP | **No** | README: "BSP is not supported at all". `world.cpp` (238 líneas) solo es contenedor (comentario "we really want world sectors"). |
| RxPipeline (nodos, clusters, PS2All) | **No** | librw usa `rw::ObjPipeline` con callbacks, sin grafo de nodos. No hay equivalente de `RxPipelineCreate/RxNode`. Si el juego solo usa pipelines stock basta con no portarlos. |
| rpskin / rphanim | Parcial | `skin.cpp`, `hanim.cpp`, `ps2/ps2skin.cpp`, `gl/gl3skin.cpp`. Skin por GPU en GL3 funciona (GTA). |
| rpmatfx | Parcial | `matfx.cpp`, `gl3matfx.cpp` (env map, dual); `ps2/ps2matfx.cpp` es un stub de 68 líneas; sin bump/efectos exóticos. |
| rpuvanim | Sí | `uvanim.cpp`. |
| rtanim / rtquat | Parcial | `anim.cpp`, `Quat` con lerp/slerp en `rwbase.h`. Sin `RtAnimInterpolator` completo de todos los tipos de keyframe; `tools/ska2anm` convierte otro formato. |
| rtbmp / rtcharset | Sí | `bmp.cpp`, `png.cpp`, `tga.cpp`, `charset.cpp`. |
| PS2 nativo: DFF pre-instanciado | Parcial | `ps2/ps2.cpp` (1586 líneas) lee/escribe, pero README avisa de que no todos los pre-instanciados. |
| PS2 nativo: TXD | Sí, probable | `ps2/ps2raster.cpp` (2238 líneas, swizzle/CLUT). |
| VU1 / DMA / GS | Parcial | `ps2/vu1/*.vu` solo pipeline por defecto. El render PS2 de librw es "solo test". En PC se usa GL3 y no se ejecuta microcódigo. |
| SDK Sony (libgraph, libdma, libpad, libcdvd, libmpeg) | No aplica | Hay que escribir shims en `port/src`. |

Estimación: de los grupos funcionales de RW que el juego usa (sin contar los nodos Rx, que se sustituyen en bloque), librw cubre del orden del **75 %** (sí o parcial) por número de grupos. Pero la cifra engaña: **el 25 % que falta (BSP/sectores) es probablemente lo que renderiza todo el nivel**.

## 3. Huecos, riesgos y propuestas

1. **BSP / WorldSector (riesgo alto).** El juego tiene pipelines de sector, así que los niveles son mundos RW (.bsp o sectores en un .dff/.rws). librw no los lee. Propuesta: (a) primero confirmar el formato de los assets del nivel (listar el disco: extensiones, chunk IDs 0x0B Atomic Section / 0x0A Plane Section); (b) escribir un lector de chunk World/PlaneSect/AtomicSect propio en `port/rw/` (el formato 3.x es público y está documentado en la wiki de GTAModding) que genere `rw::Geometry`/`Atomic` por sector, sin plano de corte (render de todos los sectores con frustum culling propio). Es parche externo a librw, sin tocar su núcleo. Coste: medio-alto, pero es el gran bloqueador.
2. **DFF pre-instanciados PS2 (riesgo alto).** Los datos del disco son nativos PS2 (VIF/ST/ST-cycle). Propuesta: probar con `tools/dumprwtree` y `ps2test` de librw sobre unos cuantos DFF reales del juego; los que falle `ps2.cpp`, parchear (el caso típico es el layout de skin/matfx pre-instanciado). Alternativa: preconvertir offline a formato genérico con librw en modo conversor y cargar eso en el port.
3. **RxPipeline / pipelines custom.** No existe en librw. No se ve ningún nodo propio, solo stock, así que se descarta: el port usa los pipelines GL3 de librw (por defecto, skin, matfx). Verificar que el juego no registra `RxPipelineCreate` con nodos propios ni microcódigo VU1 propio (buscar llamadas a `RxPipelineNodeCreate`/`_rwPS2...` desde código propio; el matching de esas funciones dirá). Si hay microcódigo VU1 custom (efectos de hoverboard, agua), reescribir como shader GL3 propio con `rw::gl3::Shader`.
4. **API C vs C++.** El código decompilado llama a `RwFrameCreate`, `RpAtomicRender`... Propuesta: shim `port/rw/rw_c_api.{h,cpp}` con envolturas `extern "C"` a `rw::`. Opacos mientras no se conozca el layout. Los **layouts importan**: el juego accede a campos de `RpAtomic`, `RwFrame` directamente (offsets). Hay que inventariar los offsets que usa el código propio y decidir si el port mantiene los structs de RW originales (más fácil: copiar las definiciones de layout PS2 de RW 3.x a un header y envolverlos) o si cambia los accesos por funciones.
5. **rpmatfx en PS2 / skin.** Dependen de qué materiales use el juego. Evaluar tras listar los plugins reales de los DFF; bump map y efectos exóticos habría que añadirlos como shaders.
6. **Animación (rtanim).** Las animaciones `RTCS*_P/_R` parecen ser un formato propio (el mensaje de error es del juego). Entonces sería código propio por decompilar, no hueco de librw.
7. **SDK Sony y MPEG.** Fuera de librw: stubs de libpad/libdma/libgraph (los primeros ya previstos), decodificador MPEG2 (cinemáticas) con una librería libre fuera del alcance de este informe.
8. **Falta de evidencia de API.** Cuestión metodológica (sección 0): el ELF no revela qué llamadas hace. Hasta confirmar, el mapa tiene los grupos `rpskin/rpmatfx/...` como supuestos.

## 4. Fiabilidad de `build/classify.jsonl`

Total 3 137 funciones: **game 2 325 (74,1 %), sdk 747 (23,8 %), engine 65 (2,1 %)**. La "confianza" solo toma 0,95 o 0,9, sin valor informativo.

Observaciones:
- Engine 2,1 % contradice la estimación de ARCHITECTURE.md (RW = 30-40 %). Lo más probable es que el clasificador etiquete casi todo el RW como "game" por ausencia de cadenas. **La cifra "propio = 74 %" es una cota superior poco fiable.** Los 65 engine y los sdk muy probablemente sí son correctos (sdk contiguo y con syscalls: 0x1098C0-0x10A1A0 es libkernel).
- 951 rachas de clase en 3 137 funciones: el código de una librería real es contiguo; esa fragmentación indica clasificación ruidosa.
- Muestra de 10 al azar (semilla 7), revisada con `check_c.py --show`:
  - 0x1925A8 (game): NO es inicio de función (fragmento medio con epílogo): dirección inválida.
  - 0x127130 (game): suma/resta de vectores con floats. Podría ser RwV3d de RW o utilidad propia; indeterminado.
  - 0x1B5C40 (game): llama a una función y guarda un float en un global: plausible propio.
  - 0x233BD0 (game): libera campos de una struct: plausible propio.
  - 0x109D90 (sdk): `li v1,75; syscall`: sdk correcto.
  - 0x10AF80 (sdk): wrapper de `0x10A110(16, &x)` en zona kernel: sdk plausible.
  - 0x1F8100 (game): NO es inicio de función (fragmento medio).
  - 0x111460 (game): wrapper trivial; indeterminado.
  - 0x1A4E68 (game): NO es inicio (cuerpo de un bucle).
  - 0x209D00 (game): usa `$gp`, plausible propio.
  Resultado: 3 de 10 son direcciones que no son inicio de función (el classify incluye falsos inicios), 5 plausibles, 2 indeterminados, 0 refutadas. Conclusión: las etiquetas sdk son fiables, la etiqueta "game" no distingue RW de código propio.
- Recomendación: no usar `classify.jsonl` para estimar RW. Mejor método: agrupar por **llamadas cruzadas** (funciones que referencian las cadenas `.csl`/`PS2All*` y sus vecinos contiguos de texto, rango aprox. 0x180000-0x1F0000 según los saltos vistos), y excluir del matching ese bloque contiguo.

## 5. Siguiente paso recomendado (ordenado)

1. Listar los assets del disco (extensiones y chunk IDs de los DFF/TXD/BSP) y ver qué formato de mundo usa el juego; contrastar con `extern/librw/tools/dumprwtree`. Es lo que decide el riesgo 1 y 2.
2. Localizar el bloque RW en el ELF por referencias a las cadenas `.csl` (xrefs a data) y volcar sus rangos a `build/exclude_ranges.json`, mejor que el classify actual.
3. Inventariar las llamadas del código propio a RW (call-sites hacia ese bloque, con su nombre RW deducido por firma) para pasar de supuestos a lista real.
4. Escribir el lector de World/Sector en `port/rw/` (prototipo con un nivel).
5. Shim `port/rw/rw_c_api` + headers de layout RW y compilar librw con el backend GL3 sobre un DFF + TXD del juego (prueba de humo: `clumpview`).
6. Dejar el MPEG, libpad y libdma como shims en `port/src`.
