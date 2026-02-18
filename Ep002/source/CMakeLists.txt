cmake_minimum_required(VERSION 3.5)
project(HelloApp 
    VERSION 0.1
    DESCRIPTION "A simple Hello World application"
    LANGUAGES CXX)

#set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)     

add_executable(hello_app main.cpp)
target_compile_features(hello_app PUBLIC cxx_std_20)





