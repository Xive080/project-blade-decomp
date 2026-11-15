# M0 - cimientos: capa plat_* (solo interfaces), spike de memoria y pruebas.
# Uso:  cmake -S port/m0 -B build/m0 && cmake --build build/m0 -j2 && ctest --test-dir build/m0
cmake_minimum_required(VERSION 3.16)
project(airblade_port_m0 C CXX)

add_library(plat_headers INTERFACE)
target_include_directories(plat_headers INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Comprobacion de compilacion de las cabeceras como C11 y como C++17.
add_library(plat_header_c OBJECT tests/plat_header_refs.c)
target_link_libraries(plat_header_c PRIVATE plat_headers)
set_target_properties(plat_header_c PROPERTIES C_STANDARD 11 C_EXTENSIONS OFF)
add_library(plat_header_cpp OBJECT tests/plat_header_cpp.cpp)
target_link_libraries(plat_header_cpp PRIVATE plat_headers)
set_target_properties(plat_header_cpp PROPERTIES CXX_STANDARD 17 CXX_EXTENSIONS OFF)
if(NOT MSVC)
  target_compile_options(plat_header_c PRIVATE -Wall -Wextra -pedantic)
  target_compile_options(plat_header_cpp PRIVATE -Wall -Wextra -pedantic)
endif()

add_executable(test_plat_headers tests/test_plat_headers.c)
target_link_libraries(test_plat_headers PRIVATE plat_headers)
set_target_properties(test_plat_headers PROPERTIES C_STANDARD 11)

add_subdirectory(spike)

enable_testing()
add_test(NAME plat_headers COMMAND test_plat_headers)
add_test(NAME memspike COMMAND memspike)

find_package(Python3 COMPONENTS Interpreter)
if(Python3_Interpreter_FOUND)
  add_test(NAME abi_check_unit COMMAND ${Python3_EXECUTABLE} -I ${CMAKE_CURRENT_SOURCE_DIR}/tests/test_abi_check.py)
endif()
