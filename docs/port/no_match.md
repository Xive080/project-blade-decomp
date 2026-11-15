<!-- SPDX-License-Identifier: AGPL-3.0-or-later -->
# Funciones sin byte-match: lista, causas y vias para el port

Fecha de las mediciones: 2026-11-15. Lo no comprobado esta marcado **(hipotesis)** o en la seccion 7. Todo lo medido sale de
`port/unmatched/tools/list_nomatch.py` y `port/unmatched/tools/draft_stats.py` (repetibles) y de las pruebas de `port/unmatched/tests/`.
Nada de aqui toca `src/matched`, el ELF, el ISO ni la recomp (solo lectura).

## 1. Como se calculo la lista y que fuentes hay

- `config/` **no tiene lista de funciones** (`config/symbol_addrs.txt` son 13 lineas y `splat.yaml` no enumera funciones), y
  `build/rw_classification.json` solo cubre 1221 candidatas pendientes **de aquel momento** (las que estaban en `build/cands2.json`
  y no tenian `src/matched`). Un `src/matched/f_*.c` posterior hace que ya no esten todas. Para tener "todas las funciones del ELF"
  hacen falta limites de funcion; hay dos fuentes y se comparan:
  - **Ghidra** (`work/ghidra_map.csv` del repo de la recomp, solo lectura, pasado con `--ghidra-map`): 3904 funciones. Es la lista principal.
  - **Segmentacion propia** (destinos de `jal` + tras `jr ra`, como `tools/rw_classify.py`; reescrita en el script): 3874 segmentos.
    Coinciden en 3791 inicios; 113 solo en Ghidra y 83 solo en la propia.
- "Con match" = existe `src/matched/f_<addr>.c` (1804 ficheros; 3 llevan nombre sin ceros a la izquierda: `f_15daa0`, `f_1a89b0`, `f_1b2410`).
  Con los limites de Ghidra casan 1800; **4** matched no empiezan en un limite de Ghidra (0x101be8, 0x108118, 0x11ea28, 0x1221b8): hipotesis de que Ghidra parte o une alli de forma distinta.
- Resultado con Ghidra: **2104 funciones sin match**. De ellas, **1374 son RW/SDK** (bloques RW conocidos 0x1bc000-0x1d0000, 0x1d8000-0x1e0000, 0x1f4000-0x20c000, 0x214000-0x21c000;
  zona de `sd ra` (**hipotesis**: codigo gcc del SDK; mwccps2 usa `sq ra`), 0x1098C0-0x10A1A0, o etiqueta `rw` de `rw_classification.json`: 56) y **730 son codigo del juego (o dudoso, no RW)**, 73 915 instrucciones.
  Con la segmentacion propia salen 667 (misma conclusion con otros limites). **Lista exacta: `port/unmatched/data/nomatch.json`** (las 2104 con causa, tamano, etiqueta, llamadores y si salen de `cands2`).

Regenerar: `python3 -I port/unmatched/tools/list_nomatch.py --ghidra-map <ghidra_map.csv>` (el ELF se toma de `AIRBLADE_ELF` o `SCES_502.46` en la raiz; sin `--ghidra-map` usa la segmentacion propia).

## 2. Las 730 por causa

Causa primaria (una por funcion, por prioridad: syscall, COP2/VU0, movz/movn, MMI real, tail call, limite dudoso, sin optimizar, resto). `paddub rd,rs,zero` (el `move` de 128 bits de mwccps2, ver `tools/lessons.md`) **no** cuenta como MMI.

| causa | funciones | instrucciones | notas |
|---|---|---|---|
| movz/movn | 37 | 5585 | |
| MMI real (paddh, pminh, ppacb, pcpyld...) | 35 | 7287 | |
| tail call `j` fuera de la funcion | 83 | 750 | 61 son de <=8 instr. (saltos/thunks) |
| sin optimizar (`b` a la siguiente instruccion) | 12 | 6498 | incluye 0x1ad4d0 (5071 instr.) |
| COP2/VU0 | 7 | 510 | |
| syscall | 5 | 54 | `entry`/crt0 (0x233218) y envoltorios |
| sin `jr ra` / limite dudoso | 4 + 8 | 370 + 49 | |
| **suma causas "especiales"** | **191** | 21 103 | |
| resto ("otro": sin causa tecnica evidente) | 539 | 52 812 | |

Por tamano (instrucciones) y causa:

| causa | <=8 | 9-32 | 33-100 | 101-299 | >=300 |
|---|---|---|---|---|---|
| otro | 40 | 218 | 159 | 90 | 32 |
| tail call j | 61 | 16 | 6 | 0 | 0 |
| MMI | 0 | 1 | 10 | 20 | 4 |
| movz/movn | 1 | 8 | 15 | 7 | 6 |
| sin optimizar | 0 | 1 | 1 | 9 | 1 |
| COP2/VU0 | 0 | 2 | 3 | 2 | 0 |
| syscall | 4 | 0 | 1 | 0 | 0 |
| sin jr ra | 0 | 2 | 1 | 1 | 0 |
| limite dudoso | 6 | 2 | 0 | 0 | 0 |
| **total** | 112 | 250 | 196 | 129 | 43 |

Otras vistas (mismas 730):

- Etiqueta de `rw_classification.json`: `game` 26, `unknown` 151, **sin clasificar 553** (el clasificador solo vio las candidatas de `cands2`).
- Por que no estaban en `cands2` (filtros de `build/enum2.py`, reproducidos): `ok` (si estaban) 209, `noend` (no acaban en `jr ra`+delay) 309, `mid` (parecen medio de funcion por la heuristica) 206, `asm_syscall_vu0` 4, `esc` 2.
- Zona 0x100000-0x12ffff (libc/libm/libkernel segun `rw_classification_summary.md`; SDK, **hipotesis**): 112 de las 730. El port probablemente las sustituye por libc del host en lugar de portarlas.
- Con llamadas `jal` directas: 412; solo por puntero en datos: 106; sin ninguna referencia encontrada: 212 (pueden ser fragmentos, codigo muerto o llamadas por `jalr`; **no se pudo distinguir**).
- Enormes (>=300 instr., umbral propio): 43; el mayor es 0x1ad4d0 (5071). Los mas llamados: 0x121b70 (113 `jal`, MMI), 0x121a58 (93, MMI), 0x182e50 (71), 0x111a70 (68).
- Casi-aciertos medidos: de las 147 con ultimo intento en `build/a2/*.c`, 116 tienen una comparacion (el resto no compila con mwccps2); 11 difieren en <=4 lineas del desensamblado y 33 en <=10. Es el numero de lineas `!=` del `.res`, **no** un porcentaje de bytes.
- Para comparar: entre las 1800 con match ya hay 30 con movz/movn, 41 con MMI real, 31 con tail call `j`, 12 sin optimizar y 132 de >=300 instr.: se casaron con `asm` literal del conversor (`tools/lessons.md`, `conv4.py`). Es decir, esas causas **no son imposibles para el matching**; son las que no se han intentado o no han cerrado.

### Hallazgo: el filtro de candidatas descarta toda funcion que acaba en `jr ra; nop`

`build/cands2.json` (1696 entradas) no contiene **ninguna** funcion cuyo ultimo `jr ra` lleve `nop` en el delay slot (0 de 1696; todas terminan en `jr ra` + instruccion). Causa probable (**hipotesis**, leida en `build/enum2.py`, no confirmada ejecutando una version corregida): el filtro quita los ceros finales como relleno (eso incluye ese `nop`) y luego exige `palabras[-2] == jr ra`, que ya no se cumple.
Medido con los limites de Ghidra: acaban en `jr ra; nop` 47 de las 1800 con match (2,6 %) y **215 de las 730 sin match**, de ellas **195 de las 539 "otro"** (8442 instr.) y todas las que el filtro llama `noend` con ese patron. Con delay slot lleno el porcentaje con match es 52 % (1721 de 3299); con `nop`, 12 % (47 de 405, RW incluido). Es decir, una parte de la cola "sin causa tecnica" no esta intentada por un filtro, no por dificultad. Arreglarlo es cosa del matching (`build/enum2.py`, `tools/`), que no he tocado.

### Contraste con la premisa de la tarea ("unas 65 imposibles + ~30 enormes o casi-aciertos")

No sale esa cifra: hay **191** con causa tecnica evidente y **539** mas sin causa evidente (la mayoria sin intento: 569 de las 730 no tienen borrador de m2c en `build/a2`; 195 de las 539 ni entraron en `cands2` por el filtro de arriba, 171 por la heuristica `mid` y solo 172 estaban en `cands2`).
Si "65" se refiere a movz/movn + MMI + tail call + sin optimizar de un recuento anterior, ahora son 167; no he podido localizar el recuento original. Los "~30 enormes o casi-aciertos" tampoco: son 43 enormes y 11-33 casi-aciertos segun el umbral.
Ojo con el otro lado: el matching sigue avanzando en otras sesiones, asi que las cifras envejecen; el script se vuelve a ejecutar en segundos.

### Lista de las causas especiales (191)

**movz/movn** (37; `direccion:instrucciones`)

```
1052d8:34 106300:56 107dd0:14 108900:53 11a128:57 11ea30:37 121728:45 121d00:55 121f90:111 122150:20 1221a0:27 1236f8:8 15c850:91 16b4c0:21 16c090:27 16eeb0:61 190740:225 1b5050:110 1d36f0:343 1e0510:302 1e0d60:23 1e3a50:78 1e7320:56 1ea690:18 1ecb20:58 20e190:178 2113e0:883 2121b0:283 212e50:931 21e650:117 226aa0:322 2297a0:517 241800:239 247f10:66 24ad20:33 24b310:20 255998:66
```

**MMI real** (35; `direccion:instrucciones`)

```
100d88:80 11e950:56 1217e0:75 121a58:69 121b70:78 121de0:107 127740:1018 12f0c0:130 12f2d0:164 12ff90:350 1e09d0:167 1e0dd0:757 1e8200:275 1eaae0:96 1ee490:127 1eea80:93 1eec00:214 1ef450:158 1ef6d0:158 1ef950:188 1eff60:191 1f02d0:167 1f0570:167 1f0810:199 1f0b30:208 1f0e70:202 1f1690:111 1f1b90:197 1f1eb0:194 1f39e0:75 2107d0:751 21cf90:85 21d0f0:27 21d4e0:262 222c90:91
```

**tail call j** (83; `direccion:instrucciones`)

```
1086b8:4 108868:4 109248:3 109258:3 109268:3 109278:3 109288:3 109298:3 10a5b0:5 10a6f0:5 10cd38:32 10da80:3 112318:13 112408:13 113208:40 11c8e0:7 11df30:4 1299e0:15 130e80:10 13b940:2 142a90:2 16e940:9 16f230:1 16f380:69 1700e0:1 1710d0:5 178480:5 178510:1 180450:4 188020:4 188860:13 1889e0:3 18a710:9 18a740:9 18fe80:70 192100:4 19f7c0:2 1a2d70:3 1a2d80:3 1a2d90:3 1a2da0:3 1a2db0:3 1a3030:3 1a3040:3 1a3050:3 1a3060:3 1b8e40:7 1ba450:6 1d2ef0:25 1d6410:7 1f1210:15 210040:1 210050:1 210640:55 222260:4 22b8a0:1 230cb0:12 230ce0:12 230d10:12 2332c8:2 2332e0:36 233370:2 236330:2 239580:4 23a3d0:4 23a3e0:3 23a3f0:3 23a400:6 23a420:3 23d4e0:3 23d4f0:3 23d500:3 23d510:3 23d520:3 23d530:3 23e1f0:1 244e40:10 249350:48 24a190:4 25ce40:3 25e500:24 25f6d0:2 25f710:4
```

**sin optimizar** (12; `direccion:instrucciones`)

```
14a4d0:28 1746c0:66 1ad4d0:5071 1d65e0:143 1d6820:143 1d6a60:122 1d6c50:126 1d71a0:145 1d73f0:145 1d7640:123 24a1a0:161 25dcf0:225
```

**COP2/VU0** (7; `direccion:instrucciones`)

```
1001a0:26 17e8d0:204 17ec10:119 1b8d30:63 1e9df0:28 1e9e70:36 1e9f00:34
```

**syscall** (5; `direccion:instrucciones`)

```
10a928:3 10a938:3 10a980:3 233218:43 2332d0:2
```

**sin jr ra** (4; `direccion:instrucciones`)

```
132d10:250 13b35c:30 156c08:29 1d5bbc:61
```

**limite dudoso (salto fuera del tramo)** (8; `direccion:instrucciones`)

```
1077b8:13 13b350:3 13b3d8:5 156c00:2 156c80:6 1d5bb0:3 1d5cb0:5 2db44c:12
```

Las 539 de "otro" y todos los campos estan en `port/unmatched/data/nomatch.json`.

## 3. Vias evaluadas

### (a) C aproximado sin byte-match bajo `#ifdef PORT` (borradores de m2c)

Datos (`port/unmatched/data/draft_stats.json`, `draft_stats.py`):

| medida | valor |
|---|---|
| de las 730, con borrador de m2c en `build/a2` | 161 (22 %): 159 utiles + 2 `FAIL` |
| de esos 159, compilan con clang solo sintaxis (con `m2c_compat.h`) | 108 (68 %) |
| con intento C hacia mwccps2 (`.c`) | 147 (de ellos 105 compilan en el host) |
| sin borrador | 569: sobre todo MMI (26 de 35), COP2/VU0 (7 de 7), syscall (5 de 5), tail call (74 de 83) y "otro" (416 de 539) |

Que significa "compila": solo comprueba sintaxis y tipos, **no comportamiento**. Hallazgo con las 3 funciones del prototipo:

- 0x1236f8 (movz): el borrador de m2c es semanticamente correcto, pero no compila (`*(arg0 + &D_002EB341)`, aritmetica sobre entero).
- 0x112318 (tail call): el borrador de m2c es **incorrecto**: llama `func_00121a58(arg1)` con **un** argumento (pierde el `lw a1,0(v1)` del delay slot del `j`) y devuelve `void` (pierde el retorno del callee). Compila sin queja. Con el mismo defecto aplicado a nuestro port (segundo argumento a 0, sin propagar el retorno), las pruebas contra el original ejecutado dan 32 fallos de 2226: el error lo detecta la comparacion contra el original, no el compilador.
- 0x104308 (MMI): no hay borrador (m2c no recibe estas funciones).

Ventajas: ya existe para 161; sin dependencias nuevas; licencia limpia. Contras: los borradores fallan justo en lo que define el grupo (MMI/tail call/movz), su exactitud es desconocida sin una referencia de ejecucion, y 569 no tienen borrador.

### (b) Ensamblador portado a C con intrinsecos y prueba contra el original

Prototipo en `port/unmatched/` (seccion 4) con 3 funciones representativas. Contra una referencia que ejecuta los **bytes originales** del ELF pasan 2226 comprobaciones y 4 mutaciones deliberadas (cambiar el orden de `ppacb`, `-32` por `-31`, `<8` por `<=8`, `pmaxh` por `pminh`) se detectan (600, 279, 4 y 604 fallos respectivamente). Las intrinsecas MMI (`mmi_portable.h`) son C99 puro, sin SIMD concreto.
Ventajas: da semantica comprobable, funciona para cualquier causa del grupo (incluidas MMI, syscall, COP2 con su modelo), sin licencia ajena. Contras: trabajo manual por funcion (**no medi tiempo por funcion**), el oraculo es un interprete escrito por nosotros con un subconjunto del R5900 (hay que ampliarlo por funcion), y el codigo y la referencia comparten autoria, asi que un error de lectura del manual del EE puede estar en ambos (seccion 7).

### (c) Codigo de una recompilacion estatica solo de esas funciones (PS2Recomp)

No se ha ejecutado. Lo que se comprobo leyendo `~/airblade-recomp` (solo lectura):

- **Licencia**: `third_party/PS2Recomp/LICENSE` es la GNU GPL v3 (el texto no dice "o posterior" en lo que lei; **no verificado** si el proyecto la declara con o sin esa clausula). El codigo generado (`work/output2/FUN_001236f8_0x1236f8.cpp`) incluye `ps2_runtime_macros.h`, `ps2_runtime.h`, `ps2_stubs.h` y usa `R5900Context`, `READ8`, `SET_GPR_S32`: depende de cabeceras y del runtime GPLv3. Su README no dice nada sobre la licencia de la salida generada.
- Mi lectura (**hipotesis, no es asesoramiento legal**): ese codigo hay que tratarlo como GPLv3. Mezclarlo en `port/` (AGPL-3.0-or-later) es una combinacion de dos licencias distintas: GPLv3 (art. 13) y AGPLv3 permiten enlazar entre si, pero cada parte conserva la suya y la obra combinada se distribuye bajo las dos condiciones; ademas habria que cumplir GPL (codigo fuente completo, avisos) para esas piezas y no podrian relicenciarse. Ademas, el codigo traducido del juego es obra del editor, igual que cualquier decomp, y es un tema aparte.
- **No lo mezclo con el port AGPL** ni copio nada: ningun fichero de `port/` incluye salida de PS2Recomp. Queda aqui anotado para que cualquier uso futuro sea una decision explicita y vaya en un directorio separado con su aviso de licencia.
- Tecnico (**sin probar**): el codigo generado trabaja con direcciones de 32 bits de la RDRAM (`rdram` + `READ8(addr)`) y registros de 64/128 bits en `R5900Context`; el port (E2) quiere punteros host en C. Habria que escribir envoltorios y mantener el runtime. `general.skip` de su config permite saltar nombres; **no he comprobado** que se pueda recompilar solo un subconjunto de forma limpia.
- Oraculo: la recomp aun podria servir para **comparar** (fuera del port, p. ej. con `BLADE_RT_FUNCS`, que registra los argumentos de entrada), pero esa traza no da salidas ni estado final. No lo hice: ejecutar la recomp es pesado y no era necesario con el interprete propio.

## 4. Prototipos `port/unmatched/`

```
port/unmatched/
  include/mmi_portable.h   paddh, pminh, pmaxh, ppacb, lq/sq, movz/movn (64 bits) en C99
  include/m2c_compat.h     macros para compilar los borradores de m2c (M2C_FIELD, s128...)
  src/f_001236f8.c         movz: toupper por tabla de clases
  src/f_00112318.c         tail call j: despacho por tabla
  src/f_00104308.c         MMI: suma de s16 + clamp 0..255 + empaquetado a bytes (24 x 16 B)
  tests/r5900_oracle.[ch]  interprete minimo del R5900 (solo pruebas)
  tests/test_unmatched.c   MMI a mano, referencia escalar y oraculo con bytes originales
  tools/list_nomatch.py    lista y causas -> data/nomatch.json
  tools/draft_stats.py     borradores de build/a2 -> data/draft_stats.json
  CMakeLists.txt
```

```
cmake -S port/unmatched -B build/unmatched -G Ninja && cmake --build build/unmatched -j2 && ctest --test-dir build/unmatched
```

(El ELF no se versiona: `AIRBLADE_ELF` o `SCES_502.46` en la raiz; sin el, el test salta la parte de oraculo y avisa `SKIP`, y quedan 668 comprobaciones.)

| funcion | causa | que hace (lo leido del ensamblador) | semantica verificada |
|---|---|---|---|
| 0x1236f8 | movz | `(tabla[c+1] & 2) ? c-32 : c`, tabla en 0x2EB340 (toupper, **hipotesis** por los valores 0x01 en A-Z y 0x02 en a-z de la tabla real) | contra el original, c en [-1, 256], con la tabla real del ELF y con una aleatoria |
| 0x112318 | tail call j | si `idx<8` (sin signo) -> `return f_00121a58(out, tabla[idx])` con la tabla en 0x2DBCB0; si no, `*out = byte(0x2EA6E0)` | contra el original, 14 valores de idx (0-9, 100, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF), tabla real y aleatoria; compara llamadas al callee, argumentos, retorno propagado y byte escrito |
| 0x104308 | MMI | 24 iteraciones: `clamp(a+b, 0, 255)` en s16 (suma modular, clamp con signo), `ppacb` a bytes. Constante en 0x1043B0 = 8 x 0x00FF (leido del ELF) | contra el original: 100 casos aleatorios de rango amplio, 100 de rango pequeno, 4 extremos (0x7FFF, 0x8000...) |

Detalles que el prototipo deja explicitos y que cualquier port de este grupo debe respetar:

- `movz`/`movn` comparan **64 bits** del registro; con tipos de 32 bits puede diferir si la mitad alta no es cero (en `mmi_portable.h` el tipo es `int64_t`).
- Un tail call hace que el retorno del callee sea el de la funcion (m2c lo pierde, ver arriba) y que el delay slot del `j` (aqui un `lw` del argumento) cuente como parte de la llamada.
- En la rama sin tail call de 0x112318 el original deja basura en `v0` (0x2F0000): el port devuelve 0 (**hipotesis** de que ningun llamador lee ese retorno; no comprobado, y no se busco por no haber identificado a los llamadores).
- El destino/origen de `lq`/`sq` (0x104308) lo trato como alineado a 16; el interprete ignora los 4 bits bajos como creo que hace el EE (**hipotesis**). Si un llamador pasa un puntero no alineado, el original y el port divergirian.
- Los datos (`D_002EB340`, `D_002DBCB0`, `D_002EA6E0`) son del ELF del usuario: en el port los carga el instalador/arranque, no se versionan.
- Los punteros son del anfitrion (`u8 *`); el segundo argumento de `func_00121a58` sigue siendo una direccion de 32 bits (`u32`), coherente con E2 **(hipotesis)**.

## 5. Recomendacion: via (b), con la prueba contra el original como puerta

Una sola via: **(b) portar el ensamblador a C con intrinsecas portables, y no aceptar ninguna funcion sin una comparacion con la ejecucion de los bytes originales** (ampliando el interprete de `tests/r5900_oracle.c` segun haga falta). Los borradores de m2c (a) se usan como andamio donde existen, pero solo entran si pasan esa misma comparacion; la via (c) queda descartada para `port/` por licencia (seccion 3c) y por el modelo de memoria.

Por que: (a) sin referencia de ejecucion da codigo que compila y puede estar mal (medido: 0x112318); (c) mete GPLv3 en un arbol AGPL y obliga a conservar el runtime de PS2Recomp; (b) es la unica que cubre MMI/COP2/syscall, tiene la licencia limpia y ya demostro que detecta errores.

Alcance y riesgos:

1. **Volumen**: 730 funciones (191 con causa tecnica + 539 sin causa clara; 112 de ellas en zona SDK que probablemente se sustituyen por libc). Tambien afecta a las matched que son `asm void` literal: el informe de M1 cuenta 258 ficheros de `src/matched` que no compilan en el host (248 por `asm` de MWCC); necesitan la misma via. Prioridad natural: por llamadores (0x121b70, 0x121a58, 0x182e50, 0x111a70...) y por lo que el arranque de M1 toque.
2. **Automatizacion**: hacerlo a mano no escala. La extension natural es un traductor mecanico propio (R5900 a C) escrito por nosotros, que genere el esqueleto y deje solo lo semantico para revision. **No esta prototipado ni medido**; es una hipotesis de trabajo, y no debe derivarse de PS2Recomp.
3. **Oraculo no independiente**: lo escribi yo a partir del manual del EE junto con el codigo portado. No esta validado contra hardware, PCSX2 ni la recomp. Un malentendido compartido pasaria todas las pruebas. Mitigacion pendiente: contrastar con trazas de PCSX2 o de la recomp (entradas/salidas reales) para un subconjunto.
4. **Cobertura del interprete**: solo las instrucciones usadas (unas 20); sin FPU, VU0, branch-likely, excepciones ni TLB. Las 8 causas de la seccion 2 piden ampliarlo (COP1/COP2, `mult1`, divisiones, `syscall`).
5. **Segmentacion**: Ghidra y la propia no coinciden en ~200 inicios; algunas "funciones" son fragmentos o thunks (83 con tail call, 61 de <=8 instr.). Hay que confirmar limites con el ELF antes de portar cada una.
6. **Datos**: toda tabla leida de la RDRAM por el original (ctype, tablas de despacho, constantes en 0x1043B0) hay que cargarla del disco; un `D_*` a ceros (como genera el generador de stubs de M1) da resultados distintos sin aviso.
7. **Un port sin matching deja de estar atado al ELF**: cada funcion aceptada tiene que llevar su prueba; si no hay ELF en CI, esas pruebas se omiten (`SKIP`) y la cobertura real baja a 668 comprobaciones: la CI debe poder aportar el ELF del usuario o fallar de forma explicita.

## 6. Procedencia y licencia

Codigo propio, `SPDX-License-Identifier: AGPL-3.0-or-later` en todos los ficheros nuevos. No se copio ni consulto `third_party/PS2Recomp` (GPLv3) ni Tenkaichi3Decomp. Solo se leyeron del repo de la recomp, como datos, `work/ghidra_map.csv` (limites de funcion), `work/output2/FUN_001236f8_0x1236f8.cpp` (para la seccion 3c) y el README/LICENSE de PS2Recomp. `m2c_compat.h` define macros por su significado; no copia ficheros de m2c. Sin rutas absolutas en codigo; el ELF y el CSV de Ghidra se pasan por argumento o variable de entorno.

## 7. Lo que no se pudo comprobar

- Que los 3 prototipos coincidan con el hardware: solo con nuestro interprete (ver riesgo 3). No se ejecuto la recomp ni PCSX2.
- Que 0x1236f8 sea `toupper` y 0x104308 sea de MPEG: son lecturas por el patron.
- Quien llama a 0x112318 y 0x104308 y si usan el retorno o pasan punteros no alineados: no se mapearon los llamadores.
- Si `lq/sq` ignoran los 4 bits bajos tal como supone el interprete; `addi` sin trampa de desbordamiento.
- Que la segmentacion de Ghidra sea exacta (113 inicios solo suyos, 4 matched fuera de sus limites).
- Que el recuento de "65 imposibles" de la tarea corresponda a algo medible hoy.
- Tiempo por funcion de la via (b) y viabilidad de un traductor mecanico propio.
- Windows y Linux: las pruebas solo se ejecutaron en macOS arm64 con clang (limpias con `-Wall -Wextra -pedantic`, y con `-fsanitize=address,undefined`).
- Si PS2Recomp se puede usar sobre un subconjunto de funciones y la validez real del analisis de licencia de la seccion 3c.
