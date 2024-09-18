//
// Created by spendice on 9/18/24.
//
#include "Empleados.h"
#include "Reservas.h"
#ifndef TRABAJOINTEGRADORPP3_EMPLEADODEVENTAS_H
#define TRABAJOINTEGRADORPP3_EMPLEADODEVENTAS_H


class EmpleadoDeVentas : Empleados{
    public:
        facturar(Reservas reserva);
};


#endif //TRABAJOINTEGRADORPP3_EMPLEADODEVENTAS_H
