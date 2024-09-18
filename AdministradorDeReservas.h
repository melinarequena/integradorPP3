#include "Empleados.h"
#include "Automovil.h"
#include "Cliente.h"
#include "Contenedores.h"
#ifndef TRABAJOINTEGRADORPP3_ADMINISTRADORDERESERVAS_H
#define TRABAJOINTEGRADORPP3_ADMINISTRADORDERESERVAS_H


class AdministradorDeReservas : Empleados{
public:
    AdministradorDeReservas(string nom, string ap, string mat, int dni);
    ~AdministradorDeReservas(){}; //destructor
    void hacerReserva(Automovil auto, Cliente cliente, Contenedores contenedores);

};


#endif //TRABAJOINTEGRADORPP3_ADMINISTRADORDERESERVAS_H
