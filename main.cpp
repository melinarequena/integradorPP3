#include <iostream>
#include <string>
#include <vector>

#include "Automovil.h"
#include "Cliente.h"
#include "Reservas.h"
#include "Contenedores.h"
#include "Empleados.h"
#include "AdministradorDeReservas.h"
#include "Facturas.h"
#include "EmpleadoDeVentas.h"
#include "Mantenimiento.h"
using namespace std;


int main() {
    Cliente * pablo = new Cliente("Pablo", "Gomez", "12398422", "8129-9182", "Aca a la vuelta");
    pablo->getInfo();
    AdministradorDeReservas admin = AdministradorDeReservas("Juan", "Perez", "1234", "1234");
    Mantenimiento mantenimiento = Mantenimiento("5/2/20", "Completo", 1000);
    Automovil auto1 = Automovil("Toyota", "Corolla", "1234", "Nafta", 10000, true, mantenimiento);
    Reservas reserva = Reservas(pablo, auto1, "5/2/20", 1000, "10/2/20", "Pendiente");

    return 0;
}
