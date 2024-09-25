//
// Created by melin on 9/18/2024.
//

#include "Reservas.h"
#include "Cliente.h"

using namespace std;

//constructor
Reservas::Reservas(Cliente *cli, Automovil autom, string fechaInic, float montoTot, string fechaFin, string estadoRes)
        : cliente(cli), automovil(autom), fechaInicio(fechaInic), montoTotal(montoTot), fechaFinal(fechaFin), estadoReserva(estadoRes) {}



void Reservas::getInfo() const {
    cliente->getInfo();
    automovil.getInfo();
    cout << "Fecha inicio: " << fechaInicio << endl;
    cout << "Fecha fin: " << fechaFinal << endl;
    cout << "Monto: " << montoTotal << endl;
    cout << "Estado de reserva: " << estadoReserva << endl;

}
