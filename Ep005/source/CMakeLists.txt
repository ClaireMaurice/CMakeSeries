cmake_minimum_required(VERSION 3.5) 
project(HelloApp
    VERSION 0.1
    DESCRIPTION "A simple C++ application"
    LANGUAGES CXX
)   

add_executable(hello_app main.cpp src/dog.cpp src/operations.cpp)  
target_compile_features(hello_app PRIVATE cxx_std_20)
target_include_directories(hello_app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)