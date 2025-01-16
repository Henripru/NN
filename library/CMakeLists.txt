include(FetchContent)
FetchContent_Declare(
    eigen
    GIT_REPOSITORY https://gitlab.com/libeigen/eigen.git
    GIT_TAG        3.4.0
)
FetchContent_MakeAvailable(eigen)

FetchContent_Declare(
    matplotlib-cpp
    GIT_REPOSITORY https://github.com/lava/matplotlib-cpp.git
    GIT_TAG 
)
FetchContent_MakeAvailable(matplotlib-cpp)
include_directories(SYSTEM ${matplotlib-cpp_SOURCE_DIR})

set(SOURCES
    source/nn.cpp
)
add_library(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC include)
target_link_libraries(${PROJECT_NAME} PUBLIC eigen matplotlib-cpp)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
