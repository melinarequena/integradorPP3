#include "Empleados.h"
#include "Automovil.h"
#include "Cliente.h"
#include "Contenedores.h"
#ifndef TRABAJOINTEGRADORPP3_ADMINISTRADORDERESERVAS_H
#define TRABAJOINTEGRADORPP3_ADMINISTRADORDERESERVAS_H


class AdministradorDeReservas : Empleados{
public:
    AdministradorDeReservas(string nom, string ap, string mat, int dni);
    ~AdministradorDeReservas(); //destructor
    void hacerReserva(Cliente cliente, Automovil auto, string fInicio, string fFinal, float monto, string estadoReser, Contenedores contenedores);

};


#endif //TRABAJOINTEGRADORPP3_ADMINISTRADORDERESERVAS_H
