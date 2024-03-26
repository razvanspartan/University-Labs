cmake_minimum_required(VERSION 3.27)
project(University_Labs)

set(CMAKE_CXX_STANDARD 14)

include_directories(Data_Structures/Lab1/SortedBag)
include_directories(OOP/Lab3)

add_executable(University_Labs
        Data_Structures/Lab1/SortedBag/App.cpp
        Data_Structures/Lab1/SortedBag/ExtendedTest.cpp
        Data_Structures/Lab1/SortedBag/ExtendedTest.h
        Data_Structures/Lab1/SortedBag/ShortTest.cpp
        Data_Structures/Lab1/SortedBag/ShortTest.h
        Data_Structures/Lab1/SortedBag/SortedBag.cpp
        Data_Structures/Lab1/SortedBag/SortedBag.h
        Data_Structures/Lab1/SortedBag/SortedBagIterator.cpp
        Data_Structures/Lab1/SortedBag/SortedBagIterator.h
        OOP/Lab1/pb1.c
        OOP/Lab1/pb2.c
        OOP/Lab1/pb3.c
        OOP/Lab1/pb4.c
        OOP/Lab2/pb1.c
        OOP/Lab2/pb3.c
        OOP/Lab3/complex.h
        OOP/Lab3/main.cpp
        OOP/Lab3/method.cpp)
