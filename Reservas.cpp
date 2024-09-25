//
// Created by melin on 9/18/2024.
//

#include "Reservas.h"
#include "Cliente.h"
#include <chrono>

using namespace std;

//constructor
Reservas::Reservas(Cliente *cli, Automovil autom, chrono::year_month_day fechaInic, chrono::year_month_day fechaFin, string estadoRes)
        : cliente(cli), automovil(autom), fechaInicio(fechaInic), fechaFinal(fechaFin), estadoReserva(estadoRes) {
    auto sys_fechaInicio = chrono::sys_days{fechaInicio};
    auto sys_fechaFinal = chrono::sys_days{fechaFinal};
    montoTotal = chrono::duration_cast<chrono::days>(sys_fechaFinal - sys_fechaInicio).count() * automovil.getPrecio();
}



void Reservas::getInfo() const {
    cliente->getInfo();
    automovil.getInfo();
    cout << "Fecha inicio: " << fechaInicio << endl;
    cout << "Fecha fin: " << fechaFinal << endl;
    cout << "Monto: " << montoTotal << endl;
    cout << "Estado de reserva: " << estadoReserva << endl;

}
