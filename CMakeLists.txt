cmake_minimum_required(VERSION 3.27)
project(JSONParser)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(JSONParser
        JSONParser.cpp
        JSONParser.h
        print.h)
