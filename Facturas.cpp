//
// Created by melin on 9/18/2024.
//

#include "Facturas.h"
#include "Reservas.h"

Facturas::Facturas(Reservas* reserva, bool cob) : reserva(reserva), cobro(cob){
    numFacturas++;
}
Facturas::~Facturas() {
    numFacturas--;
    cout << "Factura eliminada" << endl;
}
int Facturas::getNumFacturas() {
    return numFacturas;
}