#include <iostream>
#include <string>
#include <vector>
#include <chrono>

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
    Camioneta auto1 = Camioneta("Toyota", "Corolla", "1234", "Nafta", 500, true, mantenimiento);
    Contenedores contenedores = Contenedores();
    admin.hacerReserva(pablo, auto1, chrono::year_month_day(chrono::year(2020), chrono::month(1), chrono::day(15)), chrono::year_month_day(chrono::year(2020), chrono::month(2), chrono::day(7)), "Reservado", contenedores);

    return 0;
        }
