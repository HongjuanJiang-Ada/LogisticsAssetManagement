cmake_minimum_required(VERSION 3.5)
project(LogisticsAssetManagement)

set(CMAKE_CXX_STANDARD 11)

# Include MySQL Connector/C++ headers
include_directories(/usr/local/mysql-connector-c++/include/jdbc)

# Add the directory containing the libraries
link_directories(/usr/local/mysql-connector-c++/lib64)

# Specify the target and source files
add_executable(LogisticsAssetManagement main.cpp AssetManager.cpp DatabaseConnection.cpp)

# Link against MySQL Connector/C++ library
target_link_libraries(LogisticsAssetManagement mysqlcppconn)

