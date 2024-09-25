//
// Created by spendice on 9/18/24.
//

#include "EmpleadoDeVentas.h"
#include "Facturas.h"
#include "Reservas.h"
using namespace std;

EmpleadoDeVentas::EmpleadoDeVentas(string nom, string ap, string mat, string dni)
: Empleados(nom, ap, mat, dni) {
}

Facturas EmpleadoDeVentas::facturar(Reservas reserva, bool cobrado){
    Facturas factura = Facturas(reserva, cobrado);
    return factura;
}