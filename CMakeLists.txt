cmake_minimum_required(VERSION 3.5)

project(Evidenta_locatari LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Evidenta_locatari main.cpp persoana.cpp persoana.h apartament.cpp apartament.h bloc.cpp bloc.h)

