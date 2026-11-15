# SPDX-License-Identifier: AGPL-3.0-or-later
# Prototipos de funciones sin byte-match (via b de docs/port/no_match.md).
#   cmake -S port/unmatched -B build/unmatched -G Ninja && cmake --build build/unmatched -j2
#   ctest --test-dir build/unmatched --output-on-failure
cmake_minimum_required(VERSION 3.16)
project(airblade_unmatched C)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
if(NOT MSVC)
  add_compile_options(-Wall -Wextra -pedantic)
endif()

add_library(unmatched STATIC src/f_001236f8.c src/f_00112318.c src/f_00104308.c)
target_include_directories(unmatched PUBLIC include ${CMAKE_CURRENT_SOURCE_DIR}/../m1/include)

add_executable(test_unmatched tests/test_unmatched.c tests/r5900_oracle.c)
target_include_directories(test_unmatched PRIVATE tests)
target_link_libraries(test_unmatched PRIVATE unmatched)

enable_testing()
# El ELF no se versiona: AIRBLADE_ELF o SCES_502.46 en la raiz del repo (directorio de trabajo de la prueba).
add_test(NAME unmatched COMMAND test_unmatched WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../..)
