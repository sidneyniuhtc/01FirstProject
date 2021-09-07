cmake_minimum_required (VERSION 3.12)

set(PROJECT_NAME "01FirstProject")
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} "main.cpp")

#find googleTest
find_package(GTest)
if(GTEST_FOUND)
	target_include_directories(${PROJECT_NAME} PRIVATE ${GTEST_INCLUDE_DIRS})
	target_link_libraries(${PROJECT_NAME} ${GTEST_BOTH_LIBRARIES})
endif()
