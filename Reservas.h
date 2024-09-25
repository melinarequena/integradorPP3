//
// Created by melin on 9/18/2024.
//

#ifndef RESERVAS_H
#define RESERVAS_H

#include <iostream>
#include "Automovil.h"
#include <string>
#include <chrono>
using namespace std;
class Cliente;
class Reservas {
private:
    Cliente *cliente;
    Automovil automovil;
    chrono::year_month_day fechaInicio;
    chrono::year_month_day fechaFinal;
    float montoTotal;
    string estadoReserva;

public:
    Reservas(Cliente *cli, Automovil autom, chrono::year_month_day fechaInic, chrono::year_month_day fechaFin, string estadoRes);
    void getInfo() const;
};


#endif //RESERVAS_H
