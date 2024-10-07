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
EmpleadoDeVentas::~EmpleadoDeVentas() {
    cout << "Empleado de ventas eliminado" << endl;
}

Facturas* EmpleadoDeVentas::facturar(Reservas* reserva, bool cobrado){
    Facturas* factura = new Facturas(reserva, cobrado);
    cout << "Se ha generado una factura" << endl;
    return factura;
}
