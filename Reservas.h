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
    getInfoReservas()const;
};

#endif //RESERVAS_H