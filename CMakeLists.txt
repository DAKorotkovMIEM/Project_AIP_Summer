cmake_minimum_required(VERSION 3.22)
project(Project_AIP_Summer)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project_AIP_Summer main.cpp OrganizerTests.cpp external/doctest/doctest.cpp external/doctest/doctest.h)
