cmake_minimum_required(VERSION 3.10)

project(SpacePirates VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)


add_subdirectory(external/bones-engine)

add_executable(${PROJECT_NAME} src/main.cpp)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        bones
    PRIVATE
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    PUBLIC
        bones
)