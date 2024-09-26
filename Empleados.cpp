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
void Empleados::addCliente(string n, string a, string d, string t, string dire, Contenedores c) {
    Cliente *cliente = new Cliente(n, a, d, t, dire);
    c.agregarCliente(cliente);
}
void Empleados::addAutomovil(string marca, string modelo, string matricula, string combustible, float precio, bool disponibilidad, Mantenimiento m, Contenedores c) {
    Automovil *automovil = new Automovil(marca, modelo, matricula, combustible, precio, disponibilidad, m);
    c.agregarAutomovil(automovil);
}


