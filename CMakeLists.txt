#./CMakeLists.txt
cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
cmake_policy(VERSION 3.2)

project(dejavu_cpp_port
    VERSION "1.0.0"
    DESCRIPTION "C++ port of dejavu lib"
)
find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
link_libraries(stdc++fs)

file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_library(${PROJECT_NAME} ${SOURCES})

set(INCLUDES 
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDES})




