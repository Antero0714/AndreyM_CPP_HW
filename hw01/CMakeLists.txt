add_subdirectory(src)
add_subdirectory(tests)
set(CMAKE_CTEST_COMMAND_OPTIONS "--tool=memcheck --leak-check=full --error-exitcode=100")
