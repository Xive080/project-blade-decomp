# SPDX-License-Identifier: AGPL-3.0-or-later
# M3 ruta B (spike): enlaza librw (MIT) y arranca rw::Engine con GL3 sobre SDL2.
# librw NO se copia al repo: se baja con FetchContent (commit fijado) o se usa una copia ya
# existente con -DFETCHCONTENT_SOURCE_DIR_LIBRW=<ruta>. Sin datos del juego en este directorio.
cmake_minimum_required(VERSION 3.16)
project(airblade_m3b LANGUAGES C CXX)

include(FetchContent)
set(LIBRW_PLATFORM GL3 CACHE STRING "" FORCE)
set(LIBRW_GL3_GFXLIB SDL2 CACHE STRING "" FORCE)
set(LIBRW_TOOLS OFF CACHE BOOL "" FORCE)
set(LIBRW_INSTALL OFF CACHE BOOL "" FORCE)
set(LIBRW_EXAMPLES OFF CACHE BOOL "" FORCE)

FetchContent_Declare(librw
  GIT_REPOSITORY https://github.com/aap/librw.git
  GIT_TAG        18532c2e13efbc1aa43f0b00b4459831f9414de0)
FetchContent_MakeAvailable(librw)

add_executable(m3b_probe src/m3b_probe.cpp)
target_link_libraries(m3b_probe PRIVATE librw)
target_compile_features(m3b_probe PRIVATE cxx_std_11)
target_compile_definitions(m3b_probe PRIVATE SDL_MAIN_HANDLED)
