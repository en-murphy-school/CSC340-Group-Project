cmake_minimum_required(VERSION 3.27)
project(CSC340_Group_Project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CSC340_Group_Project
        Database/GameData.cpp
        Database/GameData.h
        Item.cpp
        Item.h
        Database/LinkedList.cpp
        Database/LinkedList.h
        main.cpp
        Database/Node.cpp
        Database/Node.h
        Player.cpp
        Player.h
        Location.h
        Location.cpp
        test.h
        test.cpp)
