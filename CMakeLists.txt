cmake_minimum_required(VERSION 3.19)
project(lett-lang C)

set(CMAKE_C_STANDARD 99)

# define debug flag
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DLETT_DEBUG")

# create lett static library
add_library(lett-lib STATIC lett-lib/src/lett.h lett-lib/src/lexer.c lett-lib/src/lexer.h lett-lib/src/chunk.c lett-lib/src/chunk.h)

add_executable(lett lett-runtime/src/main.c)
target_include_directories(lett PRIVATE lett-lib/src)
target_link_libraries(lett lett-lib)
