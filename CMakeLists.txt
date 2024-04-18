cmake_minimum_required(VERSION 3.22)
project(enigma C)

set(CMAKE_C_STANDARD 11)

add_executable(enigma main.c
        Rotas/ROTA_IC.h
        HelperFunctions/helperFunctions.h
        Rotas/ROTA_IIC.h
        Rotas/ROTA_IIIC.h
        Reflectors/ReflectorA.h)
