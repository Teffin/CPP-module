cmake_minimum_required(VERSION 3.17)
project(module04)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00
        ex00/main.cpp
        ex00/Sorcerer.cpp
        ex00/Victim.cpp
        ex00/Peon.cpp
        )

add_executable(ex01
        ex01/main.cpp
        ex01/AWeapon.cpp
        ex01/PlasmaRifle.cpp
        )