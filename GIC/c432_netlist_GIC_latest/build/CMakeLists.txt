cmake_minimum_required(VERSION 3.10)
project(simulationSystemC CXX)


# 1. Read SYSTEMC_HOME from environment
set(SYSTEMC_HOME $ENV{SYSTEMC_HOME})


# Build type
set(CMAKE_BUILD_TYPE Debug)
# Optional: add explicit debug flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -Wall -Wextra")

# 2. Automatically find all .cpp files in this folder recursively
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/../src/*.cpp"
)

# 3. Create the executable from all discovered sources
add_executable(simulation ${SOURCES})

# 4. Add include directory for SystemC
target_include_directories(simulation PRIVATE
    ${SYSTEMC_HOME}/include
)

# 5. Add SystemC library path
target_link_directories(simulation PRIVATE
    ${SYSTEMC_HOME}/lib-linux64
)

# 6. Link SystemC and math
target_link_libraries(simulation PRIVATE systemc m)

# 7. Provide rpath so executable finds libsystemc.so at runtime
set_target_properties(simulation PROPERTIES
    BUILD_RPATH ${SYSTEMC_HOME}/lib-linux64
)

