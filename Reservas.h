//
// Created by melin on 9/18/2024.
//

#ifndef RESERVAS_H
#define RESERVAS_H
#include <iostream>

#include "Automovil.h"
#include "Cliente.h"
#include <string>
using namespace std;


class Reservas {
private:
    Cliente cliente;
    Automovil automovil;
    string fechaInicio;
    string fechaFinal;
    float montoTotal;
    string estadoReserva;

public:
    Reservas(Cliente cliente, Automovil automovil, string fInicio, string fFinal, float monto, string estadoReser) {
        cliente = cliente;
        automovil = automovil;
        fechaInicio = fInicio;
        fechaFinal = fFinal;
        montoTotal = monto;
        estadoReserva = estadoReser;
        cout << "Se ha creado una reserva " << endl;
    }

};

#endif //RESERVAS_H
