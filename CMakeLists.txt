cmake_minimum_required(VERSION 3.27)
project(University_Labs)

set(CMAKE_CXX_STANDARD 14)

include_directories(Data_Structures/Labs/SortedBag)
include_directories(OOP/Lab3)

add_executable(University_Labs
        Data_Structures/Labs/SortedSet/App.cpp
        Data_Structures/Labs/SortedSet/ShortTest.cpp
        Data_Structures/Labs/SortedSet/ExtendedTest.cpp
        Data_Structures/Labs/SortedSet/ExtendedTest.h
        Data_Structures/Labs/SortedSet/ShortTest.h
        Data_Structures/Labs/SortedSet/SortedSet.cpp
        Data_Structures/Labs/SortedSet/SortedSet.h
        Data_Structures/Labs/SortedSet/SortedSetIterator.h
        Data_Structures/Labs/SortedSet/SortedSetIterator.cpp
        Data_Structures/Labs/SortedSet/SortedSet.cpp
)
