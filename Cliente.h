//
// Created by melin on 9/18/2024.
//

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <vector>
#include "Reservas.h"
using namespace std;

class Cliente {
private:
    string nombre;
    string apellido;
    string dni;
    string telefono;
    string direccion;
    vector<Reservas> historialReservas;

public:
    Cliente(string nom, string ape, string dni, string tel, string direc); //constructor
    ~Cliente(){}; //destructor
    void agregarReserva(const Reservas& reserva);
    vector<Reservas> obtenerHistorialReservas() const;
    getInfoCliente()const;
    };
#endif //CLIENTE_H