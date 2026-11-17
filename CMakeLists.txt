cmake_minimum_required(VERSION 3.20)

project(PZ_Projekt_MergeSort LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(MergeSort
    Projekt/src/main.cpp
)

target_include_directories(MergeSort PRIVATE
    Projekt/include
)

include(CTest)

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

add_executable(MergeSortTests
    Projekt/tests/MergeSortTests.cpp
)

target_include_directories(MergeSortTests PRIVATE
    Projekt/include
)

target_link_libraries(MergeSortTests PRIVATE
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(MergeSortTests)
