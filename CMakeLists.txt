cmake_minimum_required(VERSION 3.15)
project(pj_mystring CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp")
    add_executable(app main.cpp)
    target_link_libraries(app PRIVATE mystring_lib)
endif()