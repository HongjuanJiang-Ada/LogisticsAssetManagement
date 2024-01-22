cmake_minimum_required(VERSION 3.5)
project(LogisticsAssetManagement)

set(CMAKE_CXX_STANDARD 17)

# Include MySQL Connector/C++ headers and project's include directory
include_directories(/usr/local/mysql-connector-c++/include/jdbc)
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the directory containing the MySQL Connector/C++ libraries
link_directories(/usr/local/mysql-connector-c++/lib64)

# Add source files in the src directory, excluding main.cpp for tests
file(GLOB SOURCES "src/*.cpp")
list(REMOVE_ITEM SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

# Specify the target executable and source files to compile it from
add_executable(LogisticsAssetManagement src/main.cpp ${SOURCES})

# Link against MySQL Connector/C++ library
target_link_libraries(LogisticsAssetManagement mysqlcppconn)

# The following sections are related to testing
# If you want to disable them, simply comment them out or remove them

# Enable testing with Google Test (comment out if not doing testing)
# enable_testing()

# Add the GoogleTest submodule (comment out if not doing testing)
# add_subdirectory(googletest)

# Include the GoogleTest headers (comment out if not doing testing)
# include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Define a test executable target (comment out if not doing testing)
# file(GLOB TEST_SOURCES "tests/*.cpp")
# add_executable(runUnitTests ${TEST_SOURCES} ${SOURCES})

# Link the test executable with GoogleTest and the project's main library (comment out if not doing testing)
# target_link_libraries(runUnitTests gtest gtest_main mysqlcppconn)

# Finally, create a test target (comment out if not doing testing)
# add_test(NAME runUnitTests COMMAND runUnitTests)
