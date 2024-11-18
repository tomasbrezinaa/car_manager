cmake_minimum_required(VERSION 3.5.0)
project(car_manager)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE_FILES
    main.cpp
    ./src/car_manager.cpp
)

add_subdirectory(googletest)

add_executable(car_manager_tests tests/test.cpp)
add_executable(car_manager ${SOURCE_FILES})

target_link_libraries(car_manager_tests gtest gtest_main)
add_test(NAME Tests COMMAND car_manager_tests)

enable_testing()
include(CTest)
