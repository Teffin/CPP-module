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
        ex01/PowerFist.cpp
        ex01/Enemy.cpp
        ex01/SuperMutant.cpp
        ex01/RadScorpion.cpp
        ex01/Character.cpp
        )

add_executable(ex02
        ex02/main.cpp
        ex02/Squad.cpp
        ex02/ISquad.hpp
        ex02/ISpaceMarine.hpp
        ex02/TacticalMarine.cpp
        ex02/AssaultTerminator.cpp
        )

add_executable(ex03
        ex03/main.cpp
        )