//
// Created by melin on 9/18/2024.
//

#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
#include "Automovil.h"
#include <string>

#include "Mantenimiento.h"

using namespace std;

class Automovil {
protected:
    string marca;
    string modelo;
    string matricula;
    string combustible;
    float precioAlquiler;
    bool disponibilidad;
    Mantenimiento mantenimiento;

public:
    Automovil(string marca, string modelo, string matricula, string combustible, float precio, bool disponibilidad,Mantenimiento m);
    ~Automovil();
    string getMatricula();
    void getInfo () const;
    float getPrecio();
};


class Sedan : public Automovil {
    public:
        Sedan (string marc, string mod, string matr, string comb, float pre, bool disp, Mantenimiento m);
        ~Sedan();
    };

class SUV : public Automovil {
    public:
        SUV(string marc, string mod, string matr, string comb, float pre, bool disp, Mantenimiento m);
        ~SUV();
    };

class Camioneta : public Automovil {
    public:
        Camioneta(string marc, string mod, string matr, string comb, float pre, bool disp, Mantenimiento m);
        ~Camioneta();
    };


#endif //AUTOMOVIL_H
