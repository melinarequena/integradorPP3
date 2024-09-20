//
// Created by melin on 9/18/2024.
//

#include "Automovil.h"

#include <iostream>
#include <ostream>
using namespace std;

// Constructor de Automovil
Automovil::Automovil(string marca, string modelo, string matricula, string combustible, float precio, bool disponibilidad, Mantenimiento m)
    : marca(marca), modelo(modelo), matricula(matricula), combustible(combustible),
      precioAlquiler(precio), disponibilidad(disponibilidad), mantenimiento(m) {}

Automovil::~Automovil() {
    cout << "Se ha destruido un automovil" << endl;
}

string Automovil::getMatricula() {
    return matricula;
}

void Automovil::getInfo() const {
    cout << "\n\nMarca: " << marca << "Modelo: " << modelo << "Matricula: " << matricula << "Combustible: " << combustible << "Precio por hora: " << precioAlquiler <<endl;
    if (disponibilidad) {
        cout << "Dispobible\n\n" << endl;
    }else {
        cout << "No disponible\n\n" << endl;
    }
}

// Constructor de Sedan
Sedan::Sedan(string marca, string modelo, string matricula, string combustible, float precio, bool disponibilidad, Mantenimiento m)
    : Automovil(marca, modelo, matricula, combustible, precio, disponibilidad, m) {}

Sedan::~Sedan() {
    cout << "Se ha destruido un automovil SEDAN" << endl;
}

// Constructor de SUV
SUV::SUV(string marca, string modelo, string matricula, string combustible, float precio, bool disponibilidad, Mantenimiento m)
    : Automovil(marca, modelo, matricula, combustible, precio, disponibilidad, m) {}

SUV::~SUV() {
    cout << "Se ha destruido un automovil SUV" << endl;
}

// Constructor de Camioneta
Camioneta::Camioneta(string marca, string modelo, string matricula, string combustible, float precio, bool disponibilidad, Mantenimiento m)
    : Automovil(marca, modelo, matricula, combustible, precio, disponibilidad, m) {}

Camioneta::~Camioneta() {
    cout << "Se ha destruido un automovil CAMIONETA" << endl;
}
