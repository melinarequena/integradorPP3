//
// Created by melin on 9/18/2024.
//

#ifndef CONTENEDORES_H
#define CONTENEDORES_H
#include <vector>
#include "Automovil.h"
#include "Cliente.h"
#include "Reservas.h"
#include "Empleados.h"
using namespace std;


class Contenedores {
    private:
    vector<Automovil*> listadoAutomoviles;
    vector<Cliente*> listadoClientes;
    vector<Reservas*> listadoReservas;
    vector<Empleados*> listadoEmpleados;

    public:
    Contenedores();
    ~Contenedores();

    void agregarAutomovil(Automovil * automovil);
    void agregarCliente(Cliente * cliente);
    void agregarReserva(Reservas * reserva);
    void agregarEmpleado(Empleados * empleado);

    void eliminarAutomovil(string matric);
    void eliminarEmpleado(string matricula);
    void eliminarCliente(string dni);

    void verListAutomoviles();
    void verListClientes();
    void verListReservas();
    void verListEmpleados();

    Cliente* buscarCliente(string dni);
    Automovil* buscarAutomovil(string matricula);
    Reservas* buscarReserva(string dni);
    Empleados* buscarEmpleado(string matricula);
};


#endif //CONTENEDORES_H
