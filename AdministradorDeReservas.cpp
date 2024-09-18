//
// Created by spendice on 9/18/24.
//

#include "AdministradorDeReservas.h"
#include "Automovil.h"
#include "Cliente.h"
#include "Reservas.h"
#include "Contenedores.h"

class AdministradorDeReservas : Empleados {
    public:
        AdministradorDeReservas(string nom, string ap, string mat, int dni) : Empleados(nom, ap, mat, dni) {
        }
        void AdministradorDeReservas::hacerReserva(Automovil auto, Cliente cliente, Contenedores contenedores) {
            Reservas res = Reservas(auto, cliente);
            cliente.addReserva(res);
            contenedores.addReserva(res);
        }
};