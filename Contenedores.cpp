//
// Created by melin on 9/18/2024.
//

#include "Contenedores.h"

#include <vector>

void Contenedores::agregarAutomovil(Automovil * automovil) {
    listadoAutomoviles.push_back(automovil);
}

void Contenedores::agregarCliente(Cliente * cliente) {
    listadoClientes.push_back(cliente);
}

void Contenedores::agregarReserva(Reservas * reserva) {
    listadoReservas.push_back(reserva);
}

void Contenedores::eliminarAutomovil(string matric) {
    for(Automovil * recorredor : listadoAutomoviles) {
        if(recorredor->getMatricula() == matric) {
            delete recorredor;
        }
    }
}

void Contenedores::verListAutomoviles() {
    for(Automovil * automovil : listadoAutomoviles) {
        automovil->getInfo();
    }
}

void Contenedores::verListClientes() {
    for(Cliente * cliente : listadoClientes) {
        cliente->getInfo();
}

void Contenedores::verListReservas() {
    for(Reservas * reservas : listadoReservas) {
        reservas->getInfo();
}





