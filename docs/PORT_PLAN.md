# Plan de port nativo de AirBlade

Estado: borrador de sintesis. Todo lo que no esta respaldado por una medicion propia o por lectura directa de ficheros se marca como **(hipotesis)**. Las cifras del modelo de referencia (Tenkaichi3Decomp) proceden de resumenes parciales de su documentacion y no se han verificado literalmente.

## 1. Resumen en 10 lineas

1. El modelo de referencia enlaza el C decompilado del juego con una capa propia `plat_*` que sustituye el SDK a nivel de simbolo; el juego se toca lo minimo bajo `#ifdef PORT`.
2. Nuestro decomp tiene pocas funciones con matching real (15 de 108 intentadas segun la linea base) y casi todo el codigo de `src/matched` es trivial: el consumidor del port aun no existe a escala.
3. Nuestra recomp (runtime PS2Recomp) ya ejecuta el juego completo, con RenderWare original, VU1 y GS; es hoy la unica via que funciona y sera el oraculo de comportamiento.
4. Ya tenemos, reutilizables casi tal cual: decodificador VAG, VFS, backends GS (CPU/fijo/Vulkan) con replay y comparacion, generador de VU1 validado, logica de tarjeta de memoria.
5. Lo mas acoplado es la memoria (RDRAM de 32 MB con direcciones guest de 32 bits) y los stubs con firma `(rdram, ctx, rt)`.
6. Propuesta de memoria: arena con base fija y punteros de 32 bits en estructuras (mismo enfoque conceptual que el modelo de referencia), decision final tras un spike.
7. Propuesta de RenderWare: dos rutas, A (conservar la ruta PS2: VU1 + GS emulado, fidelidad maxima) y B (librw con GL3); empezar por A porque librw no cubre BSP/WorldSector ni RxPipeline.
8. Orden: M0 cimientos y comprobadores, M1 arranque con stubs generados, M2 ficheros/pad/timing, M3 grafico por ruta A, M4 audio, M5 video y tarjeta, M6 distribucion, M7 ruta B opcional.
9. Cada hito lleva criterio medible comparado contra la recomp (hash de VRAM, volcados de RAM, replays de entrada).
10. Licencia: el `port/` del modelo es AGPL-3.0; no copiamos su codigo, solo ideas de arquitectura. Decidido (2026-11-15, el usuario): el `port/` propio sera AGPL-3.0-or-later. Sigue sin copiarse codigo del modelo; el texto completo de la licencia se anade al hacer el primer release, y las cabeceras SPDX (`SPDX-License-Identifier: AGPL-3.0-or-later`) en ficheros nuevos de `port/`.

## 2. Arquitectura propuesta

### 2.1 Capas

```
+--------------------------------------------------+
| Juego: C decompilado (src/matched, src/auto)     |  sin tocar salvo #ifdef PORT
+--------------------------------------------------+
| Shim SDK (port/sdk/*.h, extern "C")              |  scePad*, sceCd*, sceMc*, sceGs*,
|                                                  |  sceDma*, sceMpeg*, sceSd*, hilos, semaforos
+--------------------------------------------------+
| Nucleos de plataforma (C++/C, sin R5900Context)  |  pad, vfs/cd, memcard, audio, mpeg, gs, timing
+--------------------------------------------------+
| Memoria del juego (arena con base fija)          |
+--------------------------------------------------+
| Host: ventana/entrada/audio (un unico propietario)|  SDL3 o raylib: decidir (seccion 5)
+--------------------------------------------------+
```

Principio: el stub PS2 actual del runtime de la recomp se parte en un **nucleo** con argumentos tipados y punteros host, y un envoltorio fino que conserva la firma `(rdram, ctx, rt)`. La recomp sigue funcionando con el envoltorio; el port nativo llama al nucleo desde el shim C. Asi el mismo codigo sirve a las dos vias y se evita bifurcar.

### 2.2 Que va bajo `#ifdef PORT`

- Cambios en el codigo decompilado que solo tienen sentido en PC: mascaras de direccion DMA (por ejemplo cortes a 28 bits), orden de evaluacion, literales de 64 bits, llamadas que dependen de registros residuales, vibracion, saltos de logos.
- Sustitucion de ensamblador a mano por C.
- Regla: la build PS2 (matching con mwccps2) debe seguir siendo identica byte a byte con `PORT` sin definir; se comprueba en CI.
- Decision pendiente (hipotesis de trabajo): mantener los cambios `#ifdef PORT` dentro del propio decomp mientras el matching sea la prioridad, y reevaluar una copia separada solo si los conflictos de merge se vuelven costosos. El modelo de referencia hizo el camino inverso tras un tiempo.

### 2.3 Carga del ELF y de los datos del disco del usuario

- El repositorio no contiene datos de juego ni el ELF. El usuario aporta su imagen ISO.
- Instalador (herramienta propia): comprueba la ISO por SHA-1 de los ejecutables, extrae ficheros y AFS a carpetas con indice, y extrae del ELF las tablas de datos necesarias.
- Las tablas de datos del ELF que el juego usa como constantes se restauran al arrancar desde el disco del usuario, con checksum; para compilar sin disco se usa un esqueleto de solo forma (sin valores). **(hipotesis)** de que esto es necesario: depende de cuanto dato del ELF acabe dentro de los `.c`.
- Los releases no llevan ISO, ELF ni datos extraidos. El `guard` de `console-anywhere` se aplica a cada paquete.
- Raiz de datos configurable por variable de entorno o fichero de ajustes; carpeta `mods/` con prioridad (idea del modelo, nuestra implementacion).

## 3. Por pieza

### 3.1 Punteros de 64 bits

- **Modelo de referencia:** deja en 4 bytes todo puntero almacenado (miembros de struct, globales, tablas) para que tamanos y formatos sigan siendo los de PS2; locales y parametros son punteros normales. Toda la memoria del juego vive bajo 4 GB. Usa clang con `__ptr32` y herramientas propias de reescritura sobre el texto preprocesado y sobre el IR de LLVM. Mide unos 1800 miembros puntero en structs, unos 1870 punteros en datos estaticos y 231 casts int a puntero en su juego (cifras suyas, no verificadas). Llamar por puntero a funcion `__ptr32` rompe el backend de clang y exige envolturas. En macOS (Apple Silicon) no se puede mapear el rango bajo, asi que usa un modelo de ventana con un pase LLVM propio, que ellos marcan como experimental. Tambien: mascaras de direcciones que cortan punteros PC, `-malign-double` para alinear enteros de 64 bits como PS2, `long` de 64 bits en PS2.
- **Reutilizamos:** el runtime ya trabaja con direcciones guest de 32 bits sobre RDRAM de 32 MB (`getMemPtr`).
- **Falta:** decision de estrategia, comprobador de layouts contra offsets reales, comprobador de prototipos.
- **Estrategias candidatas:**
  - E1: build de 32 bits (`-m32`). Simple, pero el Mac M1 no ejecuta x86 de 32 bits nativo; vale para Linux/Windows. **(hipotesis)** de que no es viable como unica ruta.
  - E2: punteros de 32 bits en estructuras con arena de base fija y traduccion `Port_Ptr/Port_Addr` en los puntos de frontera. Portable, mas trabajo manual.
  - E3: reconstruir todos los structs con tipos de ancho fijo y offsets, sin punteros dentro de datos de disco. Limpio, caro y depende de tener los layouts, que hoy no estan.
  - Recomendacion provisoria: E2 con la base de arena configurable, y un spike corto en el M1 para comprobar si se puede reservar el rango bajo (por ejemplo con `-pagezero_size`) **(hipotesis sin probar)**.
- **Riesgos:** casts int a puntero en tablas de RenderWare y cadenas DMA; mascaras de direccion; orden de evaluacion de argumentos del compilador original (mwccps2) distinto del host; argumentos de menos que el callee lee.

### 3.2 Memoria y ficheros

- **Modelo de referencia:** el juego ve las direcciones PS2 originales (heap, registros de hardware como memoria normal, scratchpad de 16 KB, pila fija, un pool bajo para bloques que el juego recibe por direccion). Ficheros: el CD se sustituye por ficheros sueltos extraidos; direccionamiento por particion e indice o por nombre; lecturas sincronas expresadas en sectores de 2048 bytes con relleno a cero; `sceCd` reporta disco presente e inactivo; mods con prioridad y alias de rutas.
- **Reutilizamos:** `PS2Memory` (RDRAM, scratchpad, VRAM del GS, mapa KSEG), `PS2Vfs` (C++ puro con `std::filesystem`, parseo de `cdrom0:`, `host:`, `mc0:`), tabla LBN a fichero de `CD.cpp`.
- **Falta:** arena nativa con base fija, API C del VFS, `sceCdRead` con destino puntero host, quitar registros DMA/GIF/VIF si el juego pasa a llamar al GS directamente (y no antes).
- **Riesgos:** `ps2_memory.cpp` es el componente mas acoplado (casi 2800 lineas **(dato de inventario)**); el heap del juego puede depender de direcciones concretas; `CD.cpp` usa heuristicas de argumentos alternativos que habra que entender antes de moverlas.

### 3.3 Entrada

- **Modelo de referencia:** sustituye la lectura de pad del SDK, vuelca teclado y mandos SDL en el buffer del juego; rebind por jugador; deadzone cuadrada original con opcion radial; vibracion traducida a rumble con caducidad; grabar y reproducir entrada para tests. Documenta como no verificados el rebind real y el segundo jugador.
- **Reutilizamos:** `PSPadBackend::readState` (informe DualShock2 de 32 bytes, botones activos a 0) y el skill `console-controller` para mapeos; el stub de `Pad.cpp` con estado de modo y press-mode.
- **Falta:** `scePadRead` nativo en C que copie el informe a la estructura del juego; decidir propietario de ventana (raylib hoy); vibracion; grabacion y reproduccion de entrada (ya hay replay en la recomp, a reconciliar).
- **Riesgos:** umbrales de deadzone del juego sin medir en el ELF de AirBlade; vibracion sincrona que cuelga algunos mandos.

### 3.4 Audio

- **Modelo de referencia:** reemplaza ADX con streams SDL (volumen, pan, bucle) y responde las consultas de estado desde una tabla de duraciones originales para no cambiar el timing; sustituye el driver IOP de efectos por un sampler propio (ADPCM PS2, pitch, pan, 48 voces); no reproduce release de envolvente ni reverb; su build de 64 bits salio silenciosa en pruebas (causa desconocida).
- **Reutilizamos:** `ps2_vag::decode` (funcion pura), el mezclador SPU2 de parche, `Audio.cpp` que ya interpreta parcialmente las RPC del driver de sonido, `docs/AUDIO_IMPLEMENTATION_STATUS.md`, skill `console-sound`.
- **Falta:** cambiar la clave "direccion RDRAM" del banco de muestras por un handle, API C `play/stop`, protocolo RPC del driver de sonido de AirBlade (inventariar que middleware usa realmente; **hipotesis**: SPU2 directo mediante libsd mas IRX propios), consultas de estado.
- **Riesgos:** el sampler SPU2 fiel es lo mas costoso; envolvente y reverb; sincronizar audio por vblanks y no por tiempo real.

### 3.5 Disco

- Cubierto en 3.2 para ficheros. Anadir: verificacion al inicio por tamano y CRC contra el inventario de la ISO (hilo de fondo, con cache), instalador con comprobacion SHA-1, distribucion sin datos.
- **Falta:** inventario del disco de AirBlade (formato de contenedores, existencia de AFS u otro), tabla LBN completa.
- **Riesgos:** lecturas inmediatas pueden romper si el juego depende del orden de interrupciones o de callbacks reales **(hipotesis)**; en la recomp hoy se resuelve con las heuristicas de `CD.cpp`.

### 3.6 Tarjeta de memoria

- **Modelo de referencia:** reimplementa `libmc` sobre carpetas del host, solo puerto 0 slot 0, asincronia simulada con un unico resultado pendiente, codigos de retorno que el juego comprueba, rutas saneadas (sin `..`).
- **Reutilizamos:** `MemoryCard.cpp` (carpetas `mc0/` y `mc1/`, fd propios, `sceMcSync`), skill `console-saves` para importar saves existentes.
- **Falta:** separar el nucleo (carpetas, fd, resultado) del parseo de registros (`sceMcTblGetDir` con direcciones guest) y exponerlo en C.
- **Riesgos:** protocolo asincrono exacto que espera AirBlade; formato de los saves y tamanos.

### 3.7 Video (cinematicas)

- **Modelo de referencia:** stubs de `sceMpeg*`, decodificador MPEG-2 propio solo para imagen intra de un tamano fijo, verificado contra ffmpeg; el audio va aparte; la imagen se sube por el camino de frame del GS.
- **Reutilizamos:** `MPEG.cpp` e `IPU.cpp` (decodificacion en software) y el parche de DMA del IPU.
- **Falta:** puntero host en lugar de rdram, decision de decodificador: conservar el nuestro o usar libmpeg2/FFmpeg **(decision abierta, ver seccion 5)**.
- **Riesgos:** las peliculas de AirBlade pueden llevar cuadros P/B y otro tamano; no se puede asumir el caso intra de la referencia.

### 3.8 Graficos y RenderWare con librw

- **Modelo de referencia:** tres capas: referencia software del GS, grabador de frame con fusion de draws, backends GPU (SDL3 GPU y OpenGL 3.3). Reproduce memoria GS real de 4 MB, pero su traduccion a GPU es de alto nivel con heuristicas especificas del juego (marcadores de efectos en la lista, offsets fijos por programa VU1, blend aproximado, z cuantizado). Ideas de rendimiento utiles: clave de pipeline de 32 bits con lista precalentada, doble salida de color con byte de alfa separado, deteccion de clear a pantalla completa, hash de paginas GS con generaciones, perfilado por contadores.
- **Reutilizamos (muy por encima de lo que tiene el modelo):** interfaz `GSRasterBackend` con backends CPU, punto fijo y Vulkan (compute por teselas que iguala bit a bit el rasterizador de punto fijo), `GS::processGIFPacket`, herramienta `gsreplay` con comparacion y bisect, generador de VU1 validado contra interprete.
- **Ruta A (recomendada para empezar):** el juego decompilado sigue construyendo listas GIF y llamando a la libreria de graficos; las llamadas `sceGs*` y DMA se enlazan al GS existente. Mantiene RenderWare original y su geometria PS2 (pipelines PS2All con VU1). Fidelidad maxima, coste: seguir necesitando VU1 compilado y la cadena DMA.
- **Ruta B (opcional, posterior):** sustituir por librw con GL3. Hoy es solo plan: `extern/librw` no esta en disco pese a lo que dicen los docs, `port/rw/rw_glue.h` declara 5 funciones sin implementacion, librw no cubre BSP/WorldSector ni RxPipeline y los DFF PS2 pre-instanciados solo parcialmente. **(hipotesis)** de que sin BSP no se puede renderizar el nivel.
- **Falta:** tener RenderWare identificado en el ELF (el inventario no encontro evidencia clara de la API `Rw*`, solo nombres de nodos), layouts de structs RW y SDK, enlazar `sceGs*`, politica de hilo de render (copiar la lista de draws al entregarla; el modelo de referencia tiene una carrera sin resolver aqui).
- **Riesgos:** trampas conocidas del GS (texturas de escenario re-subidas cada frame, 4 bits subidos como 32, lectura del framebuffer como textura, muestreo en entero frente a centros de pixel, alfa por encima de 0x80, test de alfa de destino); si se imitara el enfoque heuristico del modelo, perderiamos fidelidad.

### 3.9 Timing

- **Modelo de referencia:** el juego avanza un paso por vblank, de modo que el ritmo (pacing, vsync, frame skip, velocidad) vive en el port; audio y video se cuentan en vblanks; rand sustituido por LCG con semilla para repetibilidad.
- **Reutilizamos:** `EeScheduler` (vblank con `steady_clock`, parche PAL de 20000 us, modo determinista), `docs/L0_TIEMPO_DEL_JUEGO.md`.
- **Falta:** sustituir el manejador de vblank por un contador incrementado por temporizador del host o por el vsync de la ventana; semaforos, alarmas e hilos con primitivas del host; decidir si se parchea el literal 0,02 s en el C (unas 9 funciones segun L0, confianza media-baja).
- **Riesgos:** hilos y semaforos del EE con orden de planificacion que el juego pueda asumir; determinismo con semilla.

## 4. Orden de trabajo en hitos

Criterio comun: cada hito se compara contra la recomp como referencia (seccion 6). Las cifras de tolerancia son propuestas **(hipotesis)** hasta medir una linea base.

| Hito | Contenido | Criterio de aceptacion medible | Paralelizable |
|---|---|---|---|
| M0 Cimientos | Spike de memoria en M1 (rango bajo / ventana), comprobador de prototipos y de layouts, build con `PORT` definido sin romper el matching PS2 | (a) La build PS2 con `PORT` sin definir mantiene los hashes actuales de los 15 ficheros con matching; (b) el comprobador de prototipos corre sobre todo `src/` y lista discrepancias; (c) informe del spike con veredicto si/no | Si: spike, comprobadores y build son independientes |
| M1 Arranque | Enlazar con stubs generados que registran el simbolo faltante; arena de memoria; shim SDK minimo | El binario nativo llega al punto de la recomp que se acuerde (por ejemplo el primer `sceGsSetDefDBuff`) sin simbolos sin resolver; el log de stubs queda en cero para esa ruta | Si: generacion de stubs, arena y shim por separado |
| M2 Ficheros, pad y timing | VFS/CD nativo, `scePadRead`, contador de vblank | El juego carga los mismos ficheros en el mismo orden que la recomp (comparar traza de aperturas); entrada reproducida de un replay da el mismo estado de RAM por tick que la recomp en N ticks acordados | Si: VFS, pad y timing son tres workflows |
| M3 Grafico (ruta A) | Enlazar `sceGs*`/DMA al GS existente | Para un replay de entrada fijo, VRAM y hash de pantalla en cuadros elegidos igualan a la recomp (diferencia 0 en el backend de punto fijo; PSNR umbral a fijar para Vulkan) | Parcial: backend GS ya existe; el enlace del shim depende de M1 |
| M4 Audio | VAG, mezclador, protocolo del driver de sonido | Los mismos eventos play/stop (identificador, pitch, volumen) que la recomp en un replay; la longitud reportada de streams coincide con la original | Si: independiente de M3 tras M1 |
| M5 Video y tarjeta | `sceMpeg`/IPU nativo y `sceMc*` nativo | Cada cinematica decodifica cuadro a cuadro con diferencia maxima por muestra frente a ffmpeg dentro de un umbral a fijar; guardar y cargar una partida produce un fichero identico al de la recomp | Si: video y tarjeta son independientes |
| M6 Distribucion | Instalador con SHA-1, restauracion de tablas desde disco, release sin datos | Un paquete que supera `guard` de `console-anywhere`; instalacion desde ISO en una maquina limpia | Si |
| M7 Ruta B (opcional) | `rw_glue` sobre librw GL3 | Primero: una escena sin BSP renderiza; despues BSP si librw lo admite. Criterio comparativo con la ruta A | No hasta que librw y BSP se aclaren |

Candidatos a workflows en paralelo: generacion de stubs (M1), traza de ficheros y comparacion (M2), comprobadores (M0), VAG y driver de sonido (M4), MPEG y memcard (M5). Un workflow no debe tocar a la vez `ps2_memory` ni el shim SDK comun.

## 5. Riesgos abiertos y preguntas

**Licencia (decision necesaria antes de escribir codigo del port):**
- El `port/` del modelo de referencia es AGPL-3.0; su decomp aparte, con otros terminos. **No se copia codigo, ni herramientas (`ptr32`, `irfix`, `macwin`), ni shaders.** Solo se toman ideas de arquitectura, y lo que se escriba aqui debe ser de diseno propio. Aconsejable no tener su codigo abierto mientras se escribe el equivalente.
- Hay que elegir la licencia propia del port (MIT/Apache, GPL o AGPL) teniendo en cuenta: el runtime PS2Recomp bajo `third_party` y sus dependencias (raylib, ImGui, librw, SDL), el esquema de nombres PCSX2 para texture packs si se usara, y que el codigo decompilado deriva de un juego con derechos ajenos (por eso no se distribuyen ELF ni datos).
- Pregunta: el decomp y el port van en el mismo repositorio o separados (el modelo los separo)?

**Tecnicos:**
- Estrategia de punteros (E1/E2/E3 de 3.1) y viabilidad del rango bajo en Apple Silicon.
- Propietario de ventana, entrada y audio: SDL3 o raylib (hoy raylib en el runtime).
- Ruta A frente a ruta B: y si librw no llega a cubrir BSP, ruta B queda como solo-herramientas.
- Cuantos datos de tablas hay que extraer del ELF y como se detecta.
- Middleware de audio y video real de AirBlade (aun sin inventariar).
- Que pasa con VU1 si algun dia se va a la ruta B (los microprogramas dejarian de usarse).
- Determinismo (semilla, orden de evaluacion, campos sin inicializar entre compiladores) si se quiere repeticion o juego en red; el modelo reporta divergencias entre gcc y clang.
- Concurrencia: carrera lista de draws frente a render en hilo.
- Dependencia de un LLVM concreto: preferible no atarse a parches sobre IR.

**De proceso:**
- Casi todo el C decompilado es trivial: el port solo se ejercita de verdad cuando haya masa critica de funciones tipadas. Posible plan: usar el port con un enfoque hibrido durante mucho tiempo (parte nativa, parte recompilada) **(hipotesis)**.
- `docs/MATCHING_ROADMAP.md` dice que librw esta clonado y el disco lo contradice: corregir uno de los dos.

## 6. Que se comprueba contra la recomp como referencia

La recomp es el oraculo de comportamiento (equivalente a lo que el modelo hace con savestates de PCSX2, pero con un runtime que controlamos).

1. **Estado de RAM:** volcado de RDRAM en tick fijo con el mismo replay de entrada, comparado por regiones y por globales con nombre; diferencias esperadas listadas y justificadas.
2. **Entrada:** el replay de pad se graba una vez en la recomp y se reproduce en el nativo; el contador de ticks coincide.
3. **Ficheros:** misma secuencia de aperturas y lecturas (nombre, offset, longitud).
4. **Grafico:** hash de VRAM y capturas en cuadros elegidos; `gsreplay` entre backends (CPU, punto fijo, Vulkan) con `--bisect` para ubicar la primera divergencia; en la ruta B, comparacion por imagen contra la ruta A.
5. **Audio:** secuencia de eventos del sampler (voz, direccion de muestra, pitch, volumen) y duraciones reportadas de streams.
6. **Video:** salida de cada cinematica frente a ffmpeg, y contra la recomp.
7. **Tarjeta de memoria:** ficheros de guardado byte a byte tras la misma secuencia de acciones.
8. **Timing:** numero de pasos de simulacion por vblank y valores de reloj interno (el reloj en 0x70003FB0/0x70003FB4 que documenta L0), en una prueba de N segundos.
9. **ABI:** el comprobador de prototipos y el de layouts corren en CI y bloquean cambios que los empeoren.
10. **Matching PS2:** hashes del build PS2 sin `PORT` iguales a la linea base en cada cambio.

Nota: todos los umbrales numericos de tolerancia (PSNR, diferencia por muestra, numero de ticks) quedan por fijar con una linea base medida en M0/M1; no se dan aqui cifras sin medir.
