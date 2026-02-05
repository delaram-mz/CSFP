file(GLOB GATE_SRCS "*.cpp")

if(NOT GATE_SRCS)
    message(FATAL_ERROR "No source files found in gates/")
endif()

add_library(sc_gates ${GATE_SRCS})

target_include_directories(sc_gates
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(sc_gates
    PUBLIC systemc sc_common m
)
