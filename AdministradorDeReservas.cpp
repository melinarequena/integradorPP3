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

AdministradorDeReservas::AdministradorDeReservas(string nom, string ap, string mat, int dni)
: Empleados(nom, ap, mat, dni) {}


void AdministradorDeReservas::hacerReserva(Cliente cliente, Automovil car, string fInicio, string fFinal, float monto, string estadoReser, Contenedores contenedores) {
            Reservas * res = new Reservas(cliente, car, fInicio, monto, fFinal, estadoReser);
            cliente.agregarReserva(res);
            contenedores.agregarReserva(res);
        }
