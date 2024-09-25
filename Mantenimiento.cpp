//
// Created by melin on 9/18/2024.
//

#include "Mantenimiento.h"
#include <iostream>
using namespace std;
Mantenimiento::Mantenimiento(string fecha, string tipo, float costo) : fecha(fecha), tipoRevision(tipo), costo(costo) {
}
Mantenimiento::~Mantenimiento() {
    cout << "Se ha destruido un mantenimiento" << endl;
}
string Mantenimiento::getFecha() {
    return fecha;
}
string Mantenimiento::getTipoRevision() {
    return tipoRevision;
}
float Mantenimiento::getCosto() {
    return costo;
}