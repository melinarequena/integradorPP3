//
// Created by spendice on 9/18/24.
//

#include "EmpleadoDeVentas.h"
#include "Facturas.h"
#include "Reservas.h"
using namespace std;

EmpleadoDeVentas::EmpleadoDeVentas(string nom, string ap, string mat, int dni)
: Empleados(nom, ap, mat, dni) {
}

Facturas EmpleadoDeVentas::facturar(Reservas reserva){
    Facturas factura = new Facturas(reserva);
    return factura;
}