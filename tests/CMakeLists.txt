add_executable(unit_tests test_mystring.cpp)
target_link_libraries(unit_tests PRIVATE mystring_lib)

add_test(NAME MyStringTests COMMAND unit_tests)