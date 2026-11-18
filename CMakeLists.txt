cmake_minimum_required(VERSION 4.5.0)

project(cpp-practice-project VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB_RECURSE SRC_SOURCES CONFIGURE_DEPENDS
  "${CMAKE_CURRENT_SOURCE_DIR}/src/Sources/*.cpp"
)

if(NOT SRC_SOURCES)
  set(SRC_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/Sources/__dummy.cpp")
endif()

add_library(mySources ${SRC_SOURCES})

target_include_directories(mySources
  PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src/Headers"
)

add_executable(cpp-practice-project
  "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp"
)

target_link_libraries(cpp-practice-project PRIVATE mySources)

set_target_properties(cpp-practice-project
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/$<CONFIG>"
)

configure_file(include/Config.h.in
    "${CMAKE_CURRENT_SOURCE_DIR}/include/Config.h"
)

target_include_directories(cpp-practice-project
    PUBLIC  "${CMAKE_CURRENT_SOURCE_DIR}/include"
    PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src/Headers"
    PUBLIC  "${CMAKE_CURRENT_SOURCE_DIR}/libs"
)

set(gcc_cxx "$<COMPILE_LANG_AND_ID:CXX,GNU>")
set(clang_cxx "$<COMPILE_LANG_AND_ID:CXX,ARMClang,AppleClang,Clang>")
set(gcc_or_clang_cxx "$<COMPILE_LANG_AND_ID:CXX,ARMClang,AppleClang,Clang,GNU>")
set(msvc_cxx "$<COMPILE_LANG_AND_ID:CXX,MSVC>")

set(clang_gcc_common_flags "-pedantic-errors;-Wshadow")
set(gcc_only_flags "-Wall;-Weffc++;-Wextra;-Wconversion;-Wsign-conversion;-Werror")

set(debug_flags "-ggdb")
set(release_flags "-O2" "-DNDEBUG")

target_compile_options(cpp-practice-project PRIVATE
  "$<${clang_cxx}:${clang_gcc_common_flags}>"
  "$<${gcc_cxx}:${clang_gcc_common_flags}>"
  "$<${gcc_cxx}:${gcc_only_flags}>"
  "$<${msvc_cxx}:-W3>"
  "$<${gcc_or_clang_cxx}:$<$<CONFIG:Debug>:${debug_flags}>>"
  "$<${gcc_or_clang_cxx}:$<$<CONFIG:Release>:${release_flags}>>"
)
