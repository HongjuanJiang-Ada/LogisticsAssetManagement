cmake_minimum_required(VERSION 3.5)
project(LogisticsAssetManagement)

set(CMAKE_CXX_STANDARD 17)

# Include MySQL Connector/C++ headers and project's include directory
include_directories(/usr/local/mysql-connector-c++/include/jdbc)
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the directory containing the MySQL Connector/C++ libraries
link_directories(/usr/local/mysql-connector-c++/lib64)

# Add source files in the src directory, excluding main.cpp
file(GLOB SOURCES "src/*.cpp")
list(REMOVE_ITEM SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

# Specify the target executable and source files to compile it from
add_executable(LogisticsAssetManagement src/main.cpp ${SOURCES})

# Enable test coverage
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")

# Link against MySQL Connector/C++ library
target_link_libraries(LogisticsAssetManagement mysqlcppconn)

# Enable testing with Google Test
enable_testing()

# Add the GoogleTest submodule
add_subdirectory(googletest)

# Include the GoogleTest headers
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Define a test executable target
file(GLOB TEST_SOURCES "tests/*.cpp")
add_executable(runUnitTests ${TEST_SOURCES} ${SOURCES})  # Include project source files except main.cpp

# Link the test executable with GoogleTest and the project's main library
target_link_libraries(runUnitTests gtest gtest_main mysqlcppconn)

# Finally, create a test target
add_test(NAME runUnitTests COMMAND runUnitTests)
