cmake_minimum_required(VERSION 3.30)
project(libnn)

set(CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(library)
add_subdirectory(apps)
