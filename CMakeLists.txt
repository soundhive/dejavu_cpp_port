cmake_minimum_required(VERSION 3.13)
PROJECT (dejavu_cpp_port)
find_package(OpenCV REQUIRED)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
add_executable(fingerprint fingerprint.cpp fingerprint.h)

target_link_libraries(fingerprint ${OpenCV_LIBS})
