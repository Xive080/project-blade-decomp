# M5: video y tarjeta de memoria nativos. Independiente del resto del port.
#   cmake -S port/M5 -B build/M5 && cmake --build build/M5 -j2 && ctest --test-dir build/M5
cmake_minimum_required(VERSION 3.16)
project(airblade_port_m5 CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE Release)
endif()

# --- tarjeta de memoria (sin dependencias)
add_library(plat_memcard STATIC src/plat_memcard.cpp)
target_include_directories(plat_memcard PUBLIC include)
if(UNIX AND NOT APPLE)
  target_link_libraries(plat_memcard PUBLIC pthread)
endif()

# --- video: libavcodec buscado por pkg-config; si falta, el modulo compila sin backend
add_library(plat_video STATIC src/plat_video.cpp)
target_include_directories(plat_video PUBLIC include)
find_package(PkgConfig QUIET)
set(PLAT_VIDEO_HAVE_AV OFF)
if(PkgConfig_FOUND)
  pkg_check_modules(AVCODEC QUIET IMPORTED_TARGET libavcodec libavutil)
  if(AVCODEC_FOUND)
    set(PLAT_VIDEO_HAVE_AV ON)
    target_compile_definitions(plat_video PUBLIC PLAT_HAVE_LIBAV)
    target_link_libraries(plat_video PUBLIC PkgConfig::AVCODEC)
    pkg_check_modules(AVFORMAT QUIET IMPORTED_TARGET libavformat)
  endif()
endif()
message(STATUS "M5 video: libavcodec ${PLAT_VIDEO_HAVE_AV}")

enable_testing()

add_executable(test_memcard tests/test_memcard.cpp)
target_link_libraries(test_memcard plat_memcard)
add_test(NAME memcard COMMAND test_memcard)

add_executable(test_video tests/test_video.cpp)
target_link_libraries(test_video plat_video)
if(PLAT_VIDEO_HAVE_AV AND AVFORMAT_FOUND)
  target_compile_definitions(test_video PRIVATE PLAT_HAVE_AVFORMAT)
  target_link_libraries(test_video PkgConfig::AVFORMAT)
endif()
add_test(NAME video COMMAND test_video)
set_tests_properties(video PROPERTIES SKIP_RETURN_CODE 77)

add_executable(mc_compare tools/mc_compare.cpp)
target_link_libraries(mc_compare plat_memcard)
add_executable(m2v_probe tools/m2v_probe.cpp)
target_link_libraries(m2v_probe plat_video)
