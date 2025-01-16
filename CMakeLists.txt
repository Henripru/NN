cmake_minimum_required(VERSION 3.30)
project(libnn)

set(CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(library)
if(LIBNN_BUILD_SAMPLE)
    add_subdirectory(sample)
endif()