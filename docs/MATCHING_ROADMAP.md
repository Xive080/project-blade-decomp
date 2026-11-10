# Hoja de ruta del matching (AirBlade, mwccps2 2.4.1.01, -O4,p)

Meta: cubrir el código PROPIO del juego con byte-match. RenderWare y SDK no se decompilan (se sustituyen en el port por librw).
Esto es un registro vivo: actualizar estado y cifras al cerrar cada punto.

## Línea base (9 nov 2026)

| Medida | Valor |
|---|---|
| Funciones candidatas (sin syscall/MMI/VU0, inicio real) | 713 (495 de <20 instr.) |
| Intentadas con el driver LLM | 108 |
| Byte-match | 15 (13,9 %) |
| Triviales verificadas con el auto-matcher | 57 |
| Ejemplos en la biblioteca few-shot | 83 |

Causas de fallo en las intentadas (muestra de 52): 63 % otro nº de instrucciones, 34 % mismas instrucciones con otros
registros u orden, 2 % no compila.

## Qué ya está hecho

- [x] Toolchain en `toolchain/` (wibo x86_64, mwccps2, capstone en `pylib`). Verificado: reproduce las 57 triviales con `-O4,p`.
- [x] `tools/llm_match.py`: LLM -> compilar -> comparar bytes (relocs enmascarados) -> reintentar con diff lado a lado.
- [x] Detección de inicios reales de función (antes marcaba medios de función) y filtro de syscall/MMI/VU0.
- [x] Biblioteca few-shot que crece con cada match (`build/examples.jsonl`).
- [x] `tools/run_all.sh`: pasadas encadenadas. CUDA (8862, Xive) para funciones nuevas; ROCm (8861, kyr) para reintentos.
- [x] `tools/export_stats.py` y panel local `web/` (puerto 8870) con botones de actualizar y lanzar matching.
- [x] `extern/librw` clonado.

## Mejoras pendientes, por impacto esperado

| # | Mejora | Ataca | Estado | Bloqueo / siguiente paso |
|---|---|---|---|---|
| 1 | Excluir RenderWare y SDK del matching | Esfuerzo desperdiciado | **Hecho a medias** | `--exclude-file` ya está en el driver; `tools/classify_engine.py` lleva 365/713 y escribirá `build/exclude_ranges.json` al terminar |
| 2 | Agrupar por archivo fuente (unidad de compilación) | Constantes, datos, orden | **Parcial** | Aproximado: el prompt incluye los 2 matches resueltos más cercanos en dirección. Falta inferir fronteras reales |
| 3 | m2c como borrador previo | 63 % (otro nº de instr.) | **Hecho** | Regla de permisos añadida; `m2c_draft()` en el driver (`--no-m2c` para desactivar). Falla en algunas funciones (p. ej. con `movz`) y en ese caso no aporta borrador |
| 4 | decomp-permuter | 34 % (registros/orden) | **Hecho** | `binutils` compilado con `MAKEINFO=true`; `tools/permute.py` y enganche en el driver (`--permute-seconds`, 60 s por función). Aún sin aciertos medidos |
| 5 | Variantes automáticas sin modelo | Registros/orden | **Hecho** | `variants()` en el driver: orden de declaraciones y sentencias, constante por temporal, flags -O3,p. Sin aciertos medidos |
| 6 | Peticiones en paralelo (2 slots por servidor) | Velocidad (x2) | **Hecho** | `--workers N` en el driver |
| 7 | Mejor reconstrucción de structs y headers | Todas | Sin empezar | Reaprovechar offsets de funciones ya resueltas (hoy solo vía few-shot y vecinos) |
| 8 | Otros modelos para las difíciles | Largas / coma flotante | Pendiente | Primero agotar lo que el modelo local resuelve solo |
| 9 | Revisión manual de lo restante | Resto | Al final | |

## Cómo medimos que mejora

Tras cada cambio: `python3 tools/export_stats.py` y anotar aquí byte-match / intentadas. Comparar siempre sobre el mismo
lote (mismas funciones) para que la cifra sea comparable. Un match solo prueba que compila a los mismos bytes.

## Registro de cifras

| Fecha | Cambio | Byte-match / intentadas |
|---|---|---|
| 9 nov 2026 | Driver básico, sin filtros | 0/8 |
| 9 nov 2026 | + inicios reales + filtro syscall | 4/20 |
| 9 nov 2026 | + diff lado a lado | 7/20 |
| 9 nov 2026 | Tanda larga (ordenada de corta a larga) | 15/108 |
| 9 nov 2026 | + workers, variantes, permuter, vecinos (muestra de 8 funciones de 9-10 instr.) | 0/8 |

## Hallazgos de esta tanda (9 nov 2026)

1. **Direcciones absolutas = variables globales.** El modelo escribía `*(s32*)0x1000E060` y eso compila a otro código. Ahora el
   prompt exige `extern` y se compila con `-sdatathreshold 0` (el original usa `lui/ori`, no `$gp`).
2. **El diff usaba capstone, que lee mal el R5900** (`sq` salía como `ext`). Ahora usa el `objdump` MIPS R5900 de `toolchain/binutils`.
3. **`sq ra` frente a `sd ra`.** El ELF tiene 2 164 funciones que guardan `$ra` con `sq` (como genera nuestro mwccps2) y 462 con `sd`.
   Ningún flag de este compilador produce `sd`: esas 462 se compilaron con otra configuración o compilador, probablemente
   código de librerías/RenderWare. **Es una señal para el punto 1:** excluirlas del matching y/o usarlas como característica del clasificador.
4. Lote de control (8 funciones de 9-10 instr., `--skip 40`): 0/8 -> 1/8 con m2c + prompt de globales.
5. **Filtro `sd ra` aplicado** (9 nov 2026). Medido sobre 244 intentadas: `sd ra` 53 intentadas / 0 match; `sq ra` 35 / 2; hojas (sin guardar `$ra`) 156 / 18.
   `llm_match.py` descarta ahora las funciones con `sd ra` (opción `--keep-sd` para desactivarlo). El corte se aplica después de `--skip/--n` para no desplazar índices.
6. **Piloto con un modelo mayor (8 fallidas del modelo local):** 4 match de 7 válidas (modelo local: 0/8 en ellas). Hallazgos: (a) 29 intentadas / 619 en el ELF usan `$gp` y con `-sdatathreshold 0` eran imposibles (0 match): ahora el driver usa umbral 8 en esas funciones (`flags_for`); (b) `real_start` dejaba pasar medios de función: `starts_mid_function` marca 39/250 intentadas (0 match); (c) `tools/lessons.md` se añade al prompt del modelo local (diccionario de reglas aprendidas).
   Política: primero el modelo local (CUDA/ROCm) con todas las mejoras; el modelo mayor solo para lo que el local no pueda. `tools/escalate.py` genera la cola y `check_c.py --save` guarda los matches en la biblioteca few-shot.
7. **Direcciones `lui 0x2f..` (base compartida):** los datos de la imagen (0x2f....) no son literales. Con `extern struct`/`extern s32[]` sale otra forma (`lui at` por acceso, o `sll` antes de `addiu`). `extern char base[]` + cast a `struct *` da las mismas cargas/stores (4 de 6 líneas de `0x10c170`); queda solo `lui v0`+`addiu v1,v0` frente a `lui v1`+`addiu v1,v1` (asignación de registros). Permuter 90 s sin éxito; los flags no lo cambian (-O4,s / -O3,p / -O2 / sin sdatathreshold). Sin solución conocida; pendiente.
8. **Tanda de mejoras (9 nov 2026, tarde):** (a) `tools/permute_pass.py`: permuter dedicado en CPU (8 procesos, 240 s) sobre las fallidas con mismo nº de instrucciones; (b) `tools/rounds.sh`: rondas de reintento (ROCm/kyr mitad, CUDA/Xive mitad) + permuter + export, hasta que una ronda gane <2; (c) `tools/families.py`: prueba el C de una igualada con la misma secuencia de mnemónicos (1/9 en la primera pasada); (d) `tools/globals_index.py`: índice de globales (2 589 direcciones/offsets de todo el ELF) y pista de structs en el prompt (campos de la misma base usados en otras funciones); (e) semilla `extern char base[]` + cast para `0x10c170`.
9. **Causa raíz probable (9 nov 2026): versión del compilador.** El ELF contiene la cadena `MW MIPS C Compiler (2.4.1.01)`; el `mwccps2.exe` de `toolchain/comp` imprime `Version 2.4 (Engineering Build 0017)` (2.4.0). `docs/ARCHITECTURE.md` ya lo lista como riesgo nº 1 («PENDIENTE de conseguir»). Es una hipótesis sin demostrar, pero encaja con lo que ningún cambio de C arregla: asignación de registros (`lui v0`+`addiu v1`), orden de `sll`/`addiu`, `sd ra` en 462 funciones. Pendiente: conseguir el CodeWarrior PS2 2.4.1.01, o saber si existe; sin él, esas diferencias residuales no se resolverán con más modelo.
10. **Rectificación sobre el compilador (9 nov 2026, tarde):** la cadena `2.4.1.01` también está dentro del `mwccps2.exe` actual (build 2.4.0 Eng. 0017), así que el punto 9 era una hipótesis floja. Prueba hecha: se descargaron 2.3.3-000906, 3.0-011126, 3.0.1-020123 y 3.0.3-020716 (decompme/compilers, `toolchain/comp-<versión>/`) y se compilaron las 265 fallidas con cada una. Resultado: el actual iguala las 69 ya conocidas; 2.3.3 iguala 67; la serie 3.0 solo 36 (rompe 33) y arregla 1 (`0x10c170`, con `extern char base[]`). Conclusión: la mayoría del juego se compiló con la familia 2.4; alguna unidad podría ser 3.0. `--alt-comps` en el driver prueba los C ya generados con las otras versiones.
11. **Modelo mayor sobre las fallidas (cola de 143, 6 agentes):** 51 matches (36 %), ~600 000 tokens. Total 123/334. Quedan sin resolver, por tipo: orden `lui`/`addiu` y de registros (~40), código sin optimizar (~6; ningún flag -O0..-O4,s lo arregla: barrido de 212 fallidas, 0), `movz`/`movn`, tail calls `j`, `ldl`/`ldr`, funciones enormes. `tools/lessons.md` recoge las reglas descubiertas.
12. **Bug corregido:** un proceso del modelo local que ya estaba tratando una función podía sobrescribir un match del modelo mayor (4 perdidos, 5 recuperados desde `examples.jsonl`). El driver ya no pisa un match existente.
13. **Semillas para el permuter:** los mejores intentos del modelo mayor en fallidas con el mismo nº de instrucciones (35) se copian a `build/llm2/f_*.c` y se lanza `permute_pass.py` (10 procesos, 240 s).
14. **CUDA (Xive):** Titán presta la GPU a otro carril cuando la ve ociosa (solo cuenta actividad por su API). El servidor de 2 slots (8862) fue sustituido por una réplica de 1 slot (8900, `-np 1` fijo en `compute/lanes.py`). Recuperarlo exige una petición real por la API de Titán (token) o dejar que lo suelte el préstamo.
15. **Paso 2 de librw: localizar el bloque RenderWare (9 nov 2026).** Resultados medidos sobre el ELF:
    - Las cadenas RW (`*.csl`, PS2All, etc.; 73) solo son referenciadas por 6 funciones, todas en `0x2177b0..0x21a458`. Ese bloque (34 funciones detectadas, 2 intentadas, 1 match) se añade a `build/exclude_ranges.json` (con 0x40 de margen). Lista de las 6 en `build/rw_ref_funcs.json`.
    - Las funciones con `sd ra` están solo en `0x100000..0x12ffff` (194) y en bolsas en `0x220000` y `0x250000`; fuera de ahí hay 0. Es la firma de otra librería (SDK/libc), compilada de otra forma. Ya se filtran una a una por `sd ra`; no se excluye la región entera porque contiene hojas triviales ya igualadas.
    - El código RW de pipeline usa `sq ra` (mismo compilador que el juego) y está en mitad de la región del juego, así que RW no es un bloque contiguo identificable. Hipótesis sin confirmar: la global `0x32a620`, usada por 252 funciones con el patrón `lw v0,308(base); jalr v0`, sería `RwEngineInstance` (despacho por `stdFunc`).
    - Sin símbolos no se puede etiquetar cada función RW. Siguiente paso posible: firmas por idioma (despacho por `RwEngineInstance`, estructuras RW) o contrastar con otro juego PS2 con RW 3.x que tenga símbolos.
16. **Firmas por idioma para RenderWare (9 nov 2026).** Prueba: la hipótesis «`0x32a620` = `RwEngineInstance`» NO se sostiene como firma: solo 1 de las 6 funciones con cadenas RW la usa. Mejor señal: las 6 comparten 18 globales y 17 destinos de `jal` (p. ej. `0x1c3070`, `0x1c30e0`, `0x1d84f0`). Las funciones que comparten ≥2 con ellas (111, `build/rw_candidates.json`) se concentran en cuatro bloques: `0x1bc000-0x1d0000` (núcleo, 41), `0x1d8000-0x1e0000` (11), `0x1f4000-0x20c000` (21) y `0x214000-0x21c000` (17 nodos de pipeline). Ninguna de las 111 se había intentado; se añaden a `exclude_ranges.json` como rangos de una función. En esos bloques ya hay 41 matches de funciones simples (accesores), que se mantienen. Fiabilidad media: es una señal por vecindad de datos y llamadas, no una identificación por nombre.
