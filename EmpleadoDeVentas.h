//
// Created by spendice on 9/18/24.
//
#include "Empleados.h"
#include "Reservas.h"
#include "Facturas.h"
#ifndef TRABAJOINTEGRADORPP3_EMPLEADODEVENTAS_H
#define TRABAJOINTEGRADORPP3_EMPLEADODEVENTAS_H

using namespace std;

class EmpleadoDeVentas : Empleados{
    public:

        EmpleadoDeVentas(string nom, string ap, string mat, int dni);
        ~EmpleadoDeVentas(); //destructor
        Facturas facturar(Reservas reserva);
};


#endif //TRABAJOINTEGRADORPP3_EMPLEADODEVENTAS_H
