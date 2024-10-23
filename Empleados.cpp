//
// Created by melin on 9/18/2024.
//

#include "Empleados.h"

#include <iostream>
#include <ostream>
using namespace std;

Empleados::Empleados(string nom, string ap, string mat, string dni)
    : nombre(nom), apellido(ap), matricula(dni), dni(dni) {}

Empleados::~Empleados() {
    cout << "Empleado destruido" << endl;
}
string Empleados::getNombre() {
    return nombre;
}
string Empleados::getApellido() {
    return apellido;
}
string Empleados::getMatricula() {
    return matricula;
}
void Empleados::getInfo() const {
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Matricula: " << matricula << endl;
    cout << "DNI: " << dni << endl;
}


