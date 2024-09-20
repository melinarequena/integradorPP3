//
// Created by melin on 9/18/2024.
//

#include "Empleados.h"

#include <iostream>
#include <ostream>

Empleados::Empleados(string nom, string ap, string mat, string dni)
    : nombre(nom), apellido(ap), matricula(dni), dni(dni) {}

Empleados::~Empleados() {
    cout << "Empleado destruido" << endl;
}


