cmake_minimum_required(VERSION 3.24)
project(testcv)

set(OpenCV_DIR "C:\\opencv\\source\\opencv-4.7.0\\cmake-build-release\\install")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 17)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(testcv main.cpp)
target_link_libraries(testcv ${OpenCV_LIBS})


