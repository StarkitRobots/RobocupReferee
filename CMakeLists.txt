cmake_minimum_required(VERSION 2.8.3)
project(RobocupReferee)

## Find catkin macros and lib
find_package(catkin REQUIRED)

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
