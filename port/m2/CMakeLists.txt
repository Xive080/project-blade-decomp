# Hito M2: ficheros (VFS/CD), pad y timing. CMake propio, independiente del resto del repo.
#   cmake -S port/m2 -B build/m2 && cmake --build build/m2 -j2 && ctest --test-dir build/m2
cmake_minimum_required(VERSION 3.16)
project(airblade_port_m2 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE RelWithDebInfo)
endif()

option(PLAT_ENABLE_SDL3 "Compilar el backend de entrada SDL3 si se encuentra" ON)

add_library(plat_m2 STATIC src/plat_vfs.cpp src/plat_pad.cpp src/plat_timing.cpp)
target_include_directories(plat_m2 PUBLIC include)
if(MSVC)
  target_compile_options(plat_m2 PRIVATE /W4)
else()
  target_compile_options(plat_m2 PRIVATE -Wall -Wextra)
endif()

set(PLAT_SDL3_FOUND OFF)
if(PLAT_ENABLE_SDL3)
  find_package(SDL3 CONFIG QUIET)
  if(SDL3_FOUND)
    set(PLAT_SDL3_FOUND ON)
    target_sources(plat_m2 PRIVATE src/plat_input_sdl3.cpp)
    target_compile_definitions(plat_m2 PUBLIC PLAT_WITH_SDL3)
    target_link_libraries(plat_m2 PUBLIC SDL3::SDL3)
  endif()
endif()
message(STATUS "plat_m2: SDL3 ${PLAT_SDL3_FOUND}")

add_executable(plat_vfs_tool tools/plat_vfs_tool.cpp)
target_link_libraries(plat_vfs_tool PRIVATE plat_m2)

enable_testing()
foreach(t vfs pad timing)
  add_executable(test_${t} tests/test_${t}.cpp)
  target_link_libraries(test_${t} PRIVATE plat_m2)
  add_test(NAME ${t} COMMAND test_${t})
endforeach()
