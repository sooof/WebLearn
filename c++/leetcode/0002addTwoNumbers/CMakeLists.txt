  
# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# Set the project name
project (0001TowSum)

# Add an executable
add_executable(0001TowSum 0001TowSum.cpp)

enable_testing()
add_test (test_run 0001TowSum 5 2)

# 测试 1 + 3 , 是否输出打印'is 4'
add_test (test_1_plus_3 0001TowSum 1 3)
set_tests_properties (test_1_plus_3 PROPERTIES PASS_REGULAR_EXPRESSION "4")  