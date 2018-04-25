cmake_minimum_required(VERSION 2.8.3)
project(robocup_referee)

## Find catkin macros and lib
find_package(catkin REQUIRED COMPONENTS rhoban_utils)

## Building the main
option (BUILD_REFEREE_BIN "Build referee binary" OFF)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES robocup_referee
  CATKIN_DEPENDS rhoban_utils
)

include_directories(include ${catkin_INCLUDE_DIRS})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra")

set(SOURCES
  src/robocup_referee/constants.cpp
  src/robocup_referee/game_state.cpp
  src/robocup_referee/field.cpp
  src/robocup_referee/referee_client.cpp
  src/robocup_referee/robot.cpp
  src/robocup_referee/team.cpp
  src/robocup_referee/time_stamp.cpp
  src/robocup_referee/utilities.cpp
)

add_library(robocup_referee ${SOURCES})
target_link_libraries (robocup_referee ${catkin_LIBRARIES})

if (BUILD_REFEREE_BIN)
    add_executable (referee src/main.cpp)
    target_link_libraries (referee robocup_referee pthread)
endif ()
