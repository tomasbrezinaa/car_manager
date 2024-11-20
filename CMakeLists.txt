cmake_minimum_required(VERSION 3.5.0)
project(car_manager)

set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE_FILES
    main.cpp
    ./src/car_manager.cpp
)

add_subdirectory(googletest)

add_executable(car_manager_tests tests/test.cpp)
add_executable(car_manager ${SOURCE_FILES})

find_package(bsoncxx CONFIG REQUIRED)
target_link_libraries(car_manager PRIVATE $<IF:$<TARGET_EXISTS:mongo::bsoncxx_static>,mongo::bsoncxx_static,mongo::bsoncxx_shared>)

find_package(mongocxx CONFIG REQUIRED)
target_link_libraries(car_manager PRIVATE $<IF:$<TARGET_EXISTS:mongo::mongocxx_static>,mongo::mongocxx_static,mongo::mongocxx_shared>)

target_link_libraries(car_manager_tests gtest gtest_main)
add_test(NAME Tests COMMAND car_manager_tests)

enable_testing()
include(CTest)
