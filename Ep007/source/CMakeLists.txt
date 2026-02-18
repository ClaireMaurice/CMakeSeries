cmake_minimum_required(VERSION 3.5) 

#set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)


project(HelloApp
    VERSION 0.1
    DESCRIPTION "A simple C++ application"
    LANGUAGES CXX
)   

#Make the operations library
add_library(operations STATIC src/operations.cpp)
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(operations PUBLIC cxx_std_20)

#Make the logger library
add_library(logger STATIC logger/src/log.cpp)
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/logger/include)
#target_compile_features(logger PUBLIC cxx_std_20)



add_executable(hello_app main.cpp 
                        src/dog.cpp)  

target_compile_features(hello_app PUBLIC cxx_std_20)
target_include_directories(hello_app PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(hello_app PUBLIC operations logger)