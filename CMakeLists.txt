cmake_minimum_required(VERSION 3.6)
project(Exercise11 CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt6Widgets REQUIRED)

add_executable(trafficlight main.cpp traffic_light.h traffic_light.cpp)
set_property(TARGET trafficlight PROPERTY CXX_STANDARD 17)
target_link_libraries(trafficlight Qt6::Widgets)
