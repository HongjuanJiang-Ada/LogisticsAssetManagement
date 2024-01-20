cmake_minimum_required(VERSION 3.0)
project(LogisticsAssetManagement)

set(CMAKE_CXX_STANDARD 11)

# Include and Link Directories for unixODBC
include_directories(/opt/homebrew/opt/unixodbc/include)
include_directories(/opt/homebrew/include)
link_directories(/opt/homebrew/opt/unixodbc/lib)

add_executable(LogisticsAssetManagement main.cpp AssetManager.cpp)

# Link against the ODBC library
target_link_libraries(LogisticsAssetManagement odbc)
