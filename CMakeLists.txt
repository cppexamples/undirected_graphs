cmake_minimum_required(VERSION 3.20)
project(rl)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

#add_executable(ug ugmain.cpp ./graph/graph.cpp ./dfs/dfsearch.cpp ./dfp/dfpaths.cpp)
#target_compile_options(ug PRIVATE -Ofast) #tail recursion

#add_executable(bfp bfp_main.cpp ./graph/graph.cpp ./bfp/bfpaths.cpp)
#$target_compile_options(bfp PRIVATE -Ofast) #tail recursion

#add_executable(cc cc_main.cpp ./graph/graph.cpp ./cc/cc.cpp)
#target_compile_options(cc PRIVATE -Ofast) #tail recursion

add_executable(sg sg_main.cpp ./graph/graph.cpp ./symbolgraph/symbolgraph.cpp ./function/function.cpp)
target_compile_options(sg PRIVATE -Ofast) #tail recursion

# Link runTests with what we want to test and the GTest and pthread library
#add_executable(ut gtest/tests.cpp)
#target_link_libraries(ut GTest::gtest_main)