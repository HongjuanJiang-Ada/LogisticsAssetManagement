cmake_minimum_required(VERSION 3.5)
project(LogisticsAssetManagement)

set(CMAKE_CXX_STANDARD 17)

# Include MySQL Connector/C++ headers and project's include directory
include_directories(/usr/local/mysql-connector-c++/include/jdbc)
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the directory containing the MySQL Connector/C++ libraries
link_directories(/usr/local/mysql-connector-c++/lib64)

# Add source files in the src directory
file(GLOB SOURCES "src/*.cpp")

# Specify the target executable and source files to compile it from
add_executable(LogisticsAssetManagement ${SOURCES})

# Link against MySQL Connector/C++ library
target_link_libraries(LogisticsAssetManagement mysqlcppconn)
