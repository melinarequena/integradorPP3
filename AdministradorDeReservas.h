#include "Empleados.h"
#include "Automovil.h"
#include "Cliente.h"
#include "Contenedores.h"
#ifndef TRABAJOINTEGRADORPP3_ADMINISTRADORDERESERVAS_H
#define TRABAJOINTEGRADORPP3_ADMINISTRADORDERESERVAS_H


class AdministradorDeReservas : Empleados{
public:
    AdministradorDeReservas(string nom, string ap, string mat, string dni);
    ~AdministradorDeReservas(); //destructor
    void hacerReserva(Cliente* cliente, Automovil car, chrono::year_month_day fInicio, chrono::year_month_day fFinal, string estadoReser, Contenedores contenedores);

};


#endif //TRABAJOINTEGRADORPP3_ADMINISTRADORDERESERVAS_H
