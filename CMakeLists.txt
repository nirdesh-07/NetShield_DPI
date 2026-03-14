cmake_minimum_required(VERSION 3.16)
project(NetShield_DPI VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Find Threads
find_package(Threads REQUIRED)

# Source files
set(SOURCES
    src/dpi_mt.cpp
    src/pcap_reader.cpp
    src/packet_parser.cpp
    src/sni_extractor.cpp
    src/types.cpp
)

# Header files location
include_directories(${CMAKE_SOURCE_DIR}/include)

# Create the executable
add_executable(dpi_engine ${SOURCES})
target_link_libraries(dpi_engine Threads::Threads)
