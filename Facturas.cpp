//
// Created by melin on 9/18/2024.
//

#include "Facturas.h"
#include "Reservas.h"
Facturas(Reservas reserva, bool cob) {
    this->reserva = reserva;
    this->cobro = cob;
};