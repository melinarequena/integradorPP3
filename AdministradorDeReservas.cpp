//
// Created by spendice on 9/18/24.
//

#include "AdministradorDeReservas.h"
#include "Automovil.h"
#include "Cliente.h"
#include "Reservas.h"
#include "Contenedores.h"
#include "Empleados.h"
using namespace std;

AdministradorDeReservas::AdministradorDeReservas(string nom, string ap, string mat, string dni)
: Empleados(nom, ap, mat, dni) {}


void AdministradorDeReservas::hacerReserva(Cliente* cliente, Automovil* car, chrono::year_month_day fInicio, chrono::year_month_day fFinal, string estadoReser, Contenedores contenedores) {
            Reservas * res = new Reservas(cliente, car, fInicio, fFinal, estadoReser);
            cliente->agregarReserva(res);
            contenedores.agregarReserva(res);
}
AdministradorDeReservas::~AdministradorDeReservas() {
    cout << "Administrador de Reservas eliminado" << endl;
}
