# CMake generated Testfile for 
# Source directory: /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement
# Build directory: /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(runUnitTests "/Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/build/runUnitTests")
set_tests_properties(runUnitTests PROPERTIES  _BACKTRACE_TRIPLES "/Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/CMakeLists.txt;40;add_test;/Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/CMakeLists.txt;0;")
subdirs("googletest")
