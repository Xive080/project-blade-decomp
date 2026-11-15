# SPDX-License-Identifier: AGPL-3.0-or-later
# Pieza STUBS de M1: log de stubs + stubs generados. Independiente; el
# CMakeLists de port/m1 puede incluirla con add_subdirectory(stubs).
#   cmake -S port/m1/stubs -B build/m1_stubs_cmake && cmake --build build/m1_stubs_cmake -j2
cmake_minimum_required(VERSION 3.16)
if(NOT PROJECT_NAME)
  project(airblade_m1_stubs LANGUAGES C)
endif()

add_library(m1_stub_log STATIC m1_stub_log.c)
target_include_directories(m1_stub_log PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# stubs.c lo genera tools/gen_stubs.py (se versiona en gen/).
set(M1_STUBS_C ${CMAKE_CURRENT_SOURCE_DIR}/../gen/stubs.c)
if(EXISTS ${M1_STUBS_C})
  add_library(m1_stubs STATIC ${M1_STUBS_C})
  target_link_libraries(m1_stubs PUBLIC m1_stub_log)
  set_target_properties(m1_stubs PROPERTIES C_STANDARD 11)
endif()

include(CTest)
find_package(Python3 COMPONENTS Interpreter)
if(Python3_Interpreter_FOUND)
  add_test(NAME gen_stubs_unit
           COMMAND ${Python3_EXECUTABLE} -I ${CMAKE_CURRENT_SOURCE_DIR}/../tests/test_gen_stubs.py)
endif()
