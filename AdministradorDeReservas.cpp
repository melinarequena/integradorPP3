//
// Created by spendice on 9/18/24.
//

#include "AdministradorDeReservas.h"
#include "Automovil.h"
#include "Cliente.h"
#include "Reservas.h"
#include "Contenedores.h"
using namespace std;

AdministradorDeReservas::AdministradorDeReservas(string nom, string ap, string mat, int dni)
: Empleados(nom, ap, mat, dni) {}


void AdministradorDeReservas::hacerReserva(Cliente cliente, Automovil auto, string fInicio, string fFinal, float monto, string estadoReser, Contenedores contenedores) {
            Reservas res = Reservas(cliente, auto, fInicio, fFinal, monto, estadoReser);
            cliente.agregarReserva(res);
            contenedores.agregarReserva(res);
        }
