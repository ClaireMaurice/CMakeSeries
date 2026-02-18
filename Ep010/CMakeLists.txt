cmake_minimum_required(VERSION 3.20)

project(Rooster)

    # include(src/math/math.cmake)
    # include(src/stats/stats.cmake)


add_subdirectory(src/math)
add_subdirectory(src/stats)


#The executable target
add_executable(rooster src/main.cpp)
target_link_libraries(rooster PUBLIC libstats)

