cmake_minimum_required(VERSION 3.22.1)

PROJECT(Collatz)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src)
add_subdirectory(include)
add_executable(${PROJECT_NAME} ${SRC_FILES})

target_include_directories(${PROJECT_NAME} PRIVATE ${INC_DIRS})
target_link_libraries(${PROJECT_NAME} cryptopp)
