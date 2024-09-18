//
// Created by melin on 9/18/2024.
//

#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
#include "Automovil.h"
#include <string>

using namespace std;

class Automovil {
protected:
    string marca;
    string modelo;
    string matricula;
    string combustible;
    float precioAlquiler;
    bool disponiblidad;
    Mantenimiento mantenimiento;

public:
    Automovil(string marca, string modelo, string matricula, string combustible, float precio, bool disponibilidad,Mantenimiento m) {
        marca = marca;
        modelo = modelo;
        matricula = matricula;
        combustible = combustible;
        precioAlquiler = precio;
        disponiblidad = disponibilidad;
        mantenimiento = m;
    }
};

class Sedan : public Automovil {
public:
    Sedan (string marc, string mod, string matr, string comb, float pre, bool disp, Mantenimiento m) {
        marca = marc;
        modelo = mod;
        matricula = matr;
        combustible = comb;
        precioAlquiler = pre;
        disponiblidad = disp;
        mantenimiento = m;
    }

    class SUV : public Automovil {
    public:
        SUV(string marc, string mod, string matr, string comb, float pre, bool disp, Mantenimiento m) {
            marca = marc;
            modelo = mod;
            matricula = matr;
            combustible = comb;
            precioAlquiler = pre;
            disponiblidad = disp;
            mantenimiento = m;
        }
    }

    class Camioneta : public Automovil {
    public:
        Camioneta(string marc, string mod, string matr, string comb, float pre, bool disp, Mantenimiento m) {
            marca = marc;
            modelo = mod;
            matricula = matr;
            combustible = comb;
            precioAlquiler = pre;
            disponiblidad = disp;
            mantenimiento = m;
        }
    };


#endif //AUTOMOVIL_H
