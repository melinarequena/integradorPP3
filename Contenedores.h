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

    public:
    Contenedores();
    ~Contenedores();

    void agregarAutomovil(Automovil * automovil);

    void agregarCliente(Cliente * cliente);

    void agregarReserva(Reservas * reserva);

    void eliminarAutomovil(string matric);

    void verListAutomoviles();

    void verListClientes();

    void verListReservas();
};


#endif //CONTENEDORES_H
