//
// Created by melin on 9/18/2024.
//
//constructor cliente
#include "Cliente.h"
#include "Reservas.h"
#include<iostream>
#include <ostream>

using namespace std;

Cliente::Cliente(string nom, string ape, string dni, string tel, string direc)
    : nombre(nom), apellido(ape), dni(dni), telefono(tel), direccion(direc) {}

Cliente::~Cliente() {
    cout << "Se ha destruido un cliente" << endl;
}

void Cliente::agregarReserva(Reservas * reserva) {
    historialReservas.push_back(reserva);
    cout << "Se ha agregado una nueva reserva para el cliente: " << dni << endl;
}

void Cliente::verReservas() {
    for(Reservas * reserva : historialReservas) {
        reserva->getInfo();
    }
}


    /*// obtener el historial de reservas
    vector<Reservas> obtenerHistorialReservas() const {
        return historialReservas;
    }*/

void Cliente::getInfo() const {
    cout << "Cliente:" << endl;
    cout << "Nombre: " << nombre << " " << apellido << endl;
    cout << "DNI: " << dni << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Direccion: " << direccion << endl;
    }


