//
// Created by melin on 9/18/2024.
//

#include "Contenedores.h"
#include "Reservas.h"

#include <vector>

Contenedores::Contenedores() {
}
Contenedores::~Contenedores() {
    for(Automovil * automovil : listadoAutomoviles) {
        delete automovil;
    }
    for(Cliente * cliente : listadoClientes) {
        delete cliente;
    }
    for(Reservas * reserva : listadoReservas) {
        delete reserva;
    }
}

void Contenedores::agregarAutomovil(Automovil * automovil) {
    listadoAutomoviles.push_back(automovil);
}

void Contenedores::agregarCliente(Cliente * cliente) {
    listadoClientes.push_back(cliente);
}

void Contenedores::agregarReserva(Reservas * reserva) {
    listadoReservas.push_back(reserva);
}
void Contenedores::agregarEmpleado(Empleados *empleado) {
    listadoEmpleados.push_back(empleado);
}

void Contenedores::eliminarAutomovil(string matric) {
    for(auto it = listadoAutomoviles.begin(); it != listadoAutomoviles.end(); ++it) {
        if((*it)->getMatricula() == matric) {
            delete *it;
            listadoAutomoviles.erase(it);
            break;
        }
    }
}

void Contenedores::eliminarEmpleado(string matricula) {
    for(auto it = listadoEmpleados.begin(); it != listadoEmpleados.end(); ++it) {
        if((*it)->getMatricula() == matricula) {
            delete *it;
            listadoEmpleados.erase(it);
            break;
        }
    }
}

void Contenedores::eliminarCliente(string dni) {
    for(auto it = listadoClientes.begin(); it != listadoClientes.end(); ++it) {
        if((*it)->getDni() == dni) {
            delete *it;
            listadoClientes.erase(it);
            break;
        }
    }
}

void Contenedores::verListAutomoviles() {
    for(Automovil * automovil : listadoAutomoviles) {
        automovil->getInfo();
    }
    if(listadoAutomoviles.empty()) {
        cout << "No hay automoviles registrados" << endl;
    }
}

void Contenedores::verListClientes() {
    for(Cliente * cliente : listadoClientes) {
        cliente->getInfo();
    }
    if(listadoClientes.empty()) {
        cout << "No hay clientes registrados" << endl;
    }
}

void Contenedores::verListReservas() {
    for(Reservas * reservas : listadoReservas) {
        reservas->getInfo();
    }
    if(listadoReservas.empty()) {
        cout << "No hay reservas registradas" << endl;
    }
}
void Contenedores::verListEmpleados() {
    for(Empleados * empleado : listadoEmpleados) {
        empleado->getInfo();
    }
    if(listadoEmpleados.empty()) {
        cout << "No hay empleados registrados" << endl;
    }
}

Cliente* Contenedores::buscarCliente(string dni) {
    for(Cliente * cliente : listadoClientes) {
        if(cliente->getDni() == dni) {
            return cliente;
        }
    }
    cout << "Cliente no encontrado" << endl;
    return nullptr;
}
Automovil* Contenedores::buscarAutomovil(string matricula) {
    for(Automovil * automovil : listadoAutomoviles) {
        if(automovil->getMatricula() == matricula) {
            return automovil;
        }
    }
    cout << "Automovil no encontrado" << endl;
    return nullptr;
}
Reservas* Contenedores::buscarReserva(string matricula) {
    for(Reservas * reserva : listadoReservas) {
        if(reserva->getCliente()->getDni() == matricula) {
            return reserva;
        }
    }
    cout << "Reserva no encontrada" << endl;
    return nullptr;
}
Empleados* Contenedores::buscarEmpleado(string matricula) {
    for(Empleados * empleado : listadoEmpleados) {
        if(empleado->getMatricula() == matricula) {
            return empleado;
        }
    }
    cout << "Empleado no encontrado" << endl;
    return nullptr;
}





