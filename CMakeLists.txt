cmake_minimum_required(VERSION 3.27)
project(CSC340_Group_Project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CSC340_Group_Project
        GameData.cpp
        GameData.h
        Item.cpp
        Item.h
        LinkedList.cpp
        LinkedList.h
        main.cpp
        Node.cpp
        Node.h
        Player.cpp
        Player.h
        Location.h
        Location.cpp
        test.h
        test.cpp)
