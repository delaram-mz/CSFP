cmake_minimum_required(VERSION 3.15)
project(csfp_systemc LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Debug)
# Optional: add explicit debug flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -Wall -Wextra")
# -------------------------
# SystemC setup (CORRECT)
# -------------------------
if (NOT DEFINED ENV{SYSTEMC_HOME})
    message(FATAL_ERROR "SYSTEMC_HOME environment variable not set")
endif()

set(SYSTEMC_HOME $ENV{SYSTEMC_HOME})

set(SYSTEMC_INCLUDE_DIR ${SYSTEMC_HOME}/include)
set(SYSTEMC_LIB_DIR     ${SYSTEMC_HOME}/lib-linux64)

# Global include & link
include_directories(${SYSTEMC_INCLUDE_DIR})
link_directories(${SYSTEMC_LIB_DIR})

# RPATH so binaries run without LD_LIBRARY_PATH
set(CMAKE_BUILD_RPATH ${SYSTEMC_LIB_DIR})

# -------------------------
# Subdirectories
# -------------------------
add_subdirectory(common)
add_subdirectory(gate_lib)
add_subdirectory(generated)
