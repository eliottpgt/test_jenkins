add_library(mystring_lib MyString.cpp)
target_include_directories(mystring_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})