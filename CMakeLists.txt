cmake_minimum_required(VERSION 3.29)
project(trabajoIntegradorPP3)

set(CMAKE_CXX_STANDARD 20)

add_executable(trabajoIntegradorPP3 main.cpp
        Automovil.h
        Automovil.cpp
        Cliente.h
        Cliente.cpp
        Empleados.cpp
        Empleados.h
        Reservas.cpp
        Reservas.h
        Facturas.cpp
        Facturas.h
        Mantenimiento.cpp
        Mantenimiento.h
        Contenedores.cpp
        Contenedores.h
        AdministradorDeReservas.cpp
        AdministradorDeReservas.h
        EmpleadoDeVentas.cpp
        EmpleadoDeVentas.h)
