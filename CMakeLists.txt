cmake_minimum_required(VERSION 2.8.3)
project(RobocupReferee)

## Find catkin macros and lib
find_package(catkin REQUIRED)

## Building the main
option (BUILD_REFEREE_BIN "Build referee binary" OFF)

catkin_package(
  INCLUDE_DIRS .
  LIBRARIES RobocupReferee
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra")

set(SOURCES
  Constants.cpp
  GameState.cpp
  RefereeClient.cpp
  Robot.cpp
  Team.cpp
  TimeStamp.cpp
  utilities.cpp
)

add_library(RobocupReferee ${SOURCES})

if (BUILD_REFEREE_BIN)
    add_executable (referee main.cpp)
    target_link_libraries (referee RobocupReferee pthread)
endif ()
