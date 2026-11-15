# SPDX-License-Identifier: AGPL-3.0-or-later
# Hito M1 (pieza arena + shim SDK). CMake propio:
#   cmake -S port/m1 -B build/m1 && cmake --build build/m1 -j2 && ctest --test-dir build/m1
cmake_minimum_required(VERSION 3.16)
project(airblade_port_m1 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE RelWithDebInfo)
endif()

# Cabeceras plat_* de M0 (solo interfaces); no se tocan.
set(PLAT_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/../m0/include/plat)

add_library(m1_arena STATIC src/m1_arena.c)
target_include_directories(m1_arena PUBLIC include ${PLAT_INCLUDE})

add_library(m1_shim STATIC shim/m1_shim.c shim/sce_shim.c)
target_include_directories(m1_shim PUBLIC shim)
target_link_libraries(m1_shim PUBLIC m1_arena)

foreach(t m1_arena m1_shim)
  if(MSVC)
    target_compile_options(${t} PRIVATE /W4)
  else()
    target_compile_options(${t} PRIVATE -Wall -Wextra -pedantic)
  endif()
endforeach()

enable_testing()
add_executable(test_arena tests/test_arena.c)
target_link_libraries(test_arena PRIVATE m1_arena)
add_executable(test_shim tests/test_shim.c)
target_link_libraries(test_shim PRIVATE m1_shim)
add_test(NAME arena COMMAND test_arena)
add_test(NAME shim COMMAND test_shim)

# ---------------------------------------------------------------------------
# Binario nativo M1: C decompilado (src/matched, PORT) + stubs + arena + shim.
#   python3 -I tools/gen_stubs.py --emit-cmake     (regenera gen/; ~2,5 min)
#   cmake -S port/m1 -B build/m1 && cmake --build build/m1 --target airblade_m1 -j2
# ---------------------------------------------------------------------------
include(gen/matched_units.cmake)
set(M1_SRC_MATCHED ${CMAKE_CURRENT_SOURCE_DIR}/../../src/matched)
list(TRANSFORM M1_MATCHED_UNITS PREPEND ${CMAKE_CURRENT_SOURCE_DIR}/gen/)
add_library(m1_matched STATIC ${M1_MATCHED_UNITS})
target_include_directories(m1_matched PRIVATE ${M1_SRC_MATCHED})
target_compile_definitions(m1_matched PRIVATE PORT)
set_target_properties(m1_matched PROPERTIES C_STANDARD 11 C_EXTENSIONS ON)
if(NOT MSVC)
  # el codigo decompilado se compila como lo hace gen_stubs.py (variables comunes, sin avisos)
  target_compile_options(m1_matched PRIVATE -fcommon -w -O0 -include ${CMAKE_CURRENT_SOURCE_DIR}/include/m1_prelude.h
    -Wno-error=implicit-function-declaration -Wno-error=int-conversion -Wno-error=incompatible-pointer-types)
endif()

add_subdirectory(stubs)

# SDK de Sony enlazado con nombre al shim (M1-main); gen_stubs.py no genera stub de lo que define.
add_library(m1_sdkmap STATIC sdkmap/ab_sdk_map.c)
target_include_directories(m1_sdkmap PRIVATE shim include ${PLAT_INCLUDE})
if(NOT MSVC)
  target_compile_options(m1_sdkmap PRIVATE -Wall -Wextra -pedantic)
endif()

# Punto de entrada: main del juego (0x001953c0). -DM1_GAME_ENTRY=0 para no ejecutar codigo del juego.
set(M1_GAME_ENTRY "0x001953c0" CACHE STRING "direccion PS2 de main() del juego (0 = ninguna)")

# Codigo del port enlazado como objetos (no como biblioteca) para que no haya dependencias circulares
# con m1_matched/m1_stubs: guest memory, imagen de datos generada, RenderWare a mano y funciones asm portadas.
file(GLOB M1_PORTED_SRC CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/ported/f_*.c)
add_executable(airblade_m1 src/main_m1.c gen/func_table.c src/m1_gmem.c gen/data_image.c rwport/m1_rw.c ${M1_PORTED_SRC})
if(NOT MSVC)
  set_source_files_properties(${M1_PORTED_SRC} PROPERTIES COMPILE_OPTIONS "-Wno-unused-label;-Wno-unused-variable")
endif()
target_compile_definitions(airblade_m1 PRIVATE M1_GAME_ENTRY=${M1_GAME_ENTRY}u)
target_include_directories(airblade_m1 PRIVATE include shim stubs ${PLAT_INCLUDE})
# m1_matched antes que m1_stubs: los stubs solo cubren lo que el C decompilado no define
target_link_libraries(airblade_m1 PRIVATE m1_matched m1_sdkmap m1_stubs m1_shim m1_arena)

# Traductor asm -> C (ab2c.py): las funciones de la ruta se traducen, compilan y una sintetica se ejecuta.
find_package(Python3 COMPONENTS Interpreter)
if(Python3_FOUND)
  add_test(NAME ab2c_unit COMMAND ${Python3_EXECUTABLE} -I ${CMAKE_CURRENT_SOURCE_DIR}/tests/test_ab2c.py)
endif()
