cmake_minimum_required(VERSION 3.28)
project(CPracticum C)

set(CMAKE_C_STANDARD 11)

add_executable(CPracticum main.c
        src/bitwise_operators.c
        include/bitwise_operators.h
        include/printing_pattern-2.h
        src/printing_pattern-2.c
        include/triangles_sorting.h
        src/triangles_sorting.c
        include/post-transition.h
        src/post-transition.c
        src/reverse-array.c
        include/reverse-array.h
        src/printing-tokens.c
        include/printing-tokens.h
        src/recursion1.c
        include/recursion1.h)




# Link the math library
target_link_libraries(CPracticum m)