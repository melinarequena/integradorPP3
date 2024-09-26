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
/*    Cliente * pablo = new Cliente("Pablo", "Gomez", "12398422", "8129-9182", "Aca a la vuelta");
    pablo->getInfo();
    AdministradorDeReservas admin = AdministradorDeReservas("Juan", "Perez", "1234", "1234");
    Mantenimiento mantenimiento = Mantenimiento("5/2/20", "Completo", 1000);
    Camioneta auto1 = Camioneta("Toyota", "Corolla", "1234", "Nafta", 500, true, mantenimiento);
    Contenedores contenedores = Contenedores();
    admin.hacerReserva(pablo, auto1, chrono::year_month_day(chrono::year(2020), chrono::month(1), chrono::day(15)), chrono::year_month_day(chrono::year(2020), chrono::month(2), chrono::day(7)), "Reservado", contenedores);
    contenedores.verListReservas();
    contenedores.verListClientes();*/
    bool exit = false;
    Contenedores DB = Contenedores();
    AdministradorDeReservas admin = AdministradorDeReservas("Juan", "Perez", "1234", "1234");
    EmpleadoDeVentas ventas = EmpleadoDeVentas("Pedro", "Gomez", "5678", "5678");
    cout<<"Bienvenido al sistema de alquiler de autos"<<endl;
    cout<<"Por favor, seleccione un usuario: "<<endl;
    cout<<"1. Administrador de Reservas"<<endl;
    cout<<"2. Empleado de Ventas"<<endl;
    cout<<"3. Salir"<<endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            while(!exit)
            {
            cout<<"Seleccione lo que quiere hacer: "<<endl;
            cout<<"1. Ver lista de reservas"<<endl;
            cout<<"2. Ver lista de clientes"<<endl;
            cout<<"3. Ver lista de autos"<<endl;
            cout<<"4. Agregar auto"<<endl;
            cout<<"5. Agregar cliente"<<endl;
            cout<<"6. Eliminar auto"<<endl;
            cout<<"7. Eliminar cliente"<<endl;
            cout<<"8. Agregar reserva"<<endl;
            cout<<"9. Salir"<<endl;
            cin >> choice;
            switch (choice) {
                case 1:
                    DB.verListReservas();
                    break;
                case 2:
                    DB.verListClientes();
                    break;
                case 3:
                    DB.verListAutomoviles();
                    break;
                case 4:{
                    cout << "Ingrese por favor los datos del auto" << endl;
                    cout << "Marca: " << endl;
                    string marca;
                    cin >> marca;
                    cout << "Modelo: " << endl;
                    string modelo;
                    cin >> modelo;
                    cout << "Matricula: " << endl;
                    string matricula;
                    cin >> matricula;
                    cout << "Combustible: " << endl;
                    string combustible;
                    cin >> combustible;
                    cout << "Precio por dia: " << endl;
                    float precio;
                    cin >> precio;
                    cout << "Disponibilidad: " << endl;
                    bool disponibilidad;
                    cin >> disponibilidad;
                    cout << "Fecha de mantenimiento: " << endl;
                    string fecha;
                    cin >> fecha;
                    cout << "Tipo de mantenimiento: " << endl;
                    string tipo;
                    cin >> tipo;
                    cout << "Costo de mantenimiento: " << endl;
                    float costo;
                    cin >> costo;
                    Mantenimiento mantenimiento = Mantenimiento(fecha, tipo, costo);
                    admin.addAutomovil(marca, modelo, matricula, combustible, precio, disponibilidad, mantenimiento,DB);
                    break;
                }
                case 5:{
                    cout << "Ingrese por favor los datos del cliente: ";
                    cout << "Nombre: ";
                    string nombre;
                    cin >> nombre;
                    cout << "Apellido: ";
                    string apellido;
                    cin >> apellido;
                    cout << "DNI: ";
                    string dni;
                    cin >> dni;
                    cout << "Telefono: ";
                    string telefono;
                    cin >> telefono;
                    cout << "Direccion: ";
                    string direccion;
                    cin >> direccion;
                    admin.addCliente(nombre, apellido, dni, telefono, direccion, DB);
                    break;
                }
                case 6: {
                    cout << "Ingrese la matricula del auto que desea eliminar: " << endl;
                    string matricula;
                    cin >> matricula;
                    delete DB.buscarAutomovil(matricula);
                    break;
                }
                case 7: {
                    cout << "Ingrese el DNI del cliente que desea eliminar: " << endl;
                    string dni;
                    cin >> dni;
                    delete DB.buscarCliente(dni);
                    break;
                }
                case 8:{
                    cout << "Ingrese el DNI del cliente que desea hacer la reserva: " << endl;
                    string dni;
                    cin >> dni;
                    Cliente * cliente = DB.buscarCliente(dni);
                    cout << "Ingrese la matricula del auto que desea reservar: " << endl;
                    string matricula;
                    cin >> matricula;
                    Automovil * autom = DB.buscarAutomovil(matricula);
                    cout << "Ingrese la fecha de inicio de la reserva: " << endl;
                    cout<<"Año: ";
                    int year;
                    cin >> year;
                    cout<<"Mes: ";
                    int month;
                    cin >> month;
                    cout<<"Dia: ";
                    int day;
                    cin >> day;
                    chrono::year_month_day fechaInicio = chrono::year_month_day(chrono::year(year), chrono::month(month), chrono::day(day));
                    cout << "Ingrese la fecha de fin de la reserva: " << endl;
                    cout<<"Año: ";
                    cin >> year;
                    cout<<"Mes: ";
                    cin >> month;
                    cout<<"Dia: ";
                    cin >> day;
                    chrono::year_month_day fechaFin = chrono::year_month_day(chrono::year(year), chrono::month(month), chrono::day(day));
                    cout << "Ingrese el estado de la reserva: " << endl;
                    string estado;
                    cin >> estado;
                    admin.hacerReserva(cliente, autom, fechaInicio, fechaFin, estado, DB);
                    break;
                }
                case 9:
                    exit = true;
                    break;
                }
            }
        case 2:
            while(!exit) {
                cout << "Seleccione lo que quiere hacer: " << endl;
                cout << "1. Ver lista de reservas" << endl;
                cout << "2. Ver lista de clientes" << endl;
                cout << "3. Ver lista de autos" << endl;
                cout << "4. Agregar auto" << endl;
                cout << "5. Agregar cliente" << endl;
                cout << "6. Eliminar auto" << endl;
                cout << "7. Eliminar cliente" << endl;
                cout << "8. Facturar reserva" << endl;
                cout << "9. Salir" << endl;
                cin >> choice;
                switch (choice) {
                    case 1:
                        DB.verListReservas();
                        break;
                    case 2:
                        DB.verListClientes();
                        break;
                    case 3:
                        DB.verListAutomoviles();
                        break;
                    case 4:{
                        cout << "Ingrese por favor los datos del auto" << endl;
                        cout << "Marca: " << endl;
                        string marca;
                        cin >> marca;
                        cout << "Modelo: " << endl;
                        string modelo;
                        cin >> modelo;
                        cout << "Matricula: " << endl;
                        string matricula;
                        cin >> matricula;
                        cout << "Combustible: " << endl;
                        string combustible;
                        cin >> combustible;
                        cout << "Precio por dia: " << endl;
                        float precio;
                        cin >> precio;
                        cout << "Disponibilidad: " << endl;
                        bool disponibilidad;
                        cin >> disponibilidad;
                        cout << "Fecha de mantenimiento: " << endl;
                        string fecha;
                        cin >> fecha;
                        cout << "Tipo de mantenimiento: " << endl;
                        string tipo;
                        cin >> tipo;
                        cout << "Costo de mantenimiento: " << endl;
                        float costo;
                        cin >> costo;
                        Mantenimiento mantenimiento = Mantenimiento(fecha, tipo, costo);
                        ventas.addAutomovil(marca, modelo, matricula, combustible, precio, disponibilidad, mantenimiento,DB);
                        break;
                    }
                    case 5:{
                        cout << "Ingrese por favor los datos del cliente: ";
                        cout << "Nombre: ";
                        string nombre;
                        cin >> nombre;
                        cout << "Apellido: ";
                        string apellido;
                        cin >> apellido;
                        cout << "DNI: ";
                        string dni;
                        cin >> dni;
                        cout << "Telefono: ";
                        string telefono;
                        cin >> telefono;
                        cout << "Direccion: ";
                        string direccion;
                        cin >> direccion;
                        ventas.addCliente(nombre, apellido, dni, telefono, direccion, DB);
                        break;
                    }
                    case 6: {
                        cout << "Ingrese la matricula del auto que desea eliminar: " << endl;
                        string matricula;
                        cin >> matricula;
                        delete DB.buscarAutomovil(matricula);
                        break;
                    }
                    case 7: {
                        cout << "Ingrese el DNI del cliente que desea eliminar: " << endl;
                        string dni;
                        cin >> dni;
                        delete DB.buscarCliente(dni);
                        break;
                    }
                    case 8:{
                        cout<<"Ingrese el DNI del cliente cuya reserva desea facturar: "<<endl;
                        string dni;
                        cin >> dni;
                        ventas.facturar(DB.buscarReserva(dni), true);
                        break;
                    }
                    case 9:
                        exit = true;
                        break;
                }
            }
    }
    return 0;
}
