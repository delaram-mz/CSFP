file(GLOB BENCH_DIRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*")

foreach(bench ${BENCH_DIRS})
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${bench})
        add_subdirectory(${bench})
    endif()
endforeach()
