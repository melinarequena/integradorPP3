//
// Created by melin on 9/18/2024.
//

#ifndef CONTENEDORES_H
#define CONTENEDORES_H
#include <vector>
#include "Automovil.h"
#include "Cliente.h"
#include "Reservas.h"
using namespace std;


class Contenedores {
private:
    vector<Automovil*> listadoAutomoviles;
    vector<Cliente*> listadoClientes;
    vector<Reservas*> listadoReservas;

};


#endif //CONTENEDORES_H
