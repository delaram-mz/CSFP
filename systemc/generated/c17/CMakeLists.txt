file(GLOB BENCH_SRCS "*.cpp")

if(NOT BENCH_SRCS)
    message(FATAL_ERROR "No source files found in generated/c17")
endif()

add_executable(c17_sc ${BENCH_SRCS})

target_link_libraries(c17_sc
    PRIVATE systemc sc_common sc_gates m
)
