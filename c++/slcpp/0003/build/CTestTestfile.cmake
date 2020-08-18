# CMake generated Testfile for 
# Source directory: /root/Workspace/github/WebLearn/c++/slcpp/0003
# Build directory: /root/Workspace/github/WebLearn/c++/slcpp/0003/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_run "0003" "5" "2")
add_test(test_1_plus_3 "0003" "1" "3")
set_tests_properties(test_1_plus_3 PROPERTIES  PASS_REGULAR_EXPRESSION "4")
