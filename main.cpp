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
    bool exit = false;
    Contenedores DB = Contenedores();
    int choice;
    while(!exit){
        cout << endl;
        cout << "--------------------------------------------------------------" << endl;
        cout<<"Bienvenido al sistema de alquiler de autos"<<endl;
        cout << "--------------------------------------------------------------" << endl;
        cout<<"Por favor, seleccione un usuario: "<<endl;
        cout<<"1. Gestor de Base de Datos"<<endl;
        cout<<"2. Empleado"<<endl;
        cout<<"3. Salir"<<endl;
        cin >> choice;
        switch (choice) {
            case 1:
                while(!exit) {
                    cout << endl;
                    cout << "--------------------------------------------------------------" << endl;
                    cout << "Seleccione lo que quiere hacer: " << endl;
                    cout << "--------------------------------------------------------------" << endl;
                    cout << endl;
                    cout << "--------------------------------------------------------------" << endl;
                    cout << "Generacion de reporte: " << endl;
                    cout << "--------------------------------------------------------------" << endl;
                    cout << "1. Ver lista de reservas" << endl;
                    cout << "2. Ver lista de clientes" << endl;
                    cout << "3. Ver lista de autos" << endl;
                    cout << "4. Ver lista de empleados" << endl;
                    cout << "5. Ver lista de reservas de un cliente" << endl;
                    cout << endl;
                    cout << "--------------------------------------------------------------" << endl;
                    cout << "Agregado de objetos: " << endl;
                    cout << "--------------------------------------------------------------" << endl;
                    cout << "6. Agregar auto" << endl;
                    cout << "7. Agregar cliente" << endl;
                    cout << "8. Agregar Administrador de Reservas" << endl;
                    cout << "9. Agregar Empleado de Ventas" << endl;
                    cout << endl;
                    cout << "--------------------------------------------------------------" << endl;
                    cout << "Eliminacion de objetos: " << endl;
                    cout << "--------------------------------------------------------------" << endl;
                    cout << "10. Eliminar auto" << endl;
                    cout << "11. Eliminar cliente" << endl;
                    cout << "12. Eliminar empleado" << endl;
                    cout << "13. Salir" << endl;
                    cin >> choice;
                    switch (choice){
                        case 1:
                            DB.verListReservas();
                            break;
                        case 2:
                            DB.verListClientes();
                            break;
                        case 3:
                            DB.verListAutomoviles();
                            break;
                        case 4:
                            DB.verListEmpleados();
                            break;
                        case 5: {
                            cout << endl;
                            cout << "--------------------------------------------------------------" << endl;
                            cout << "Ingrese el DNI del cliente cuyas reseras quiere visualizar" << endl;
                            string dni;
                            cin >> dni;
                            DB.buscarCliente(dni)->verReservas();
                            break;
                        }
                        case 6: {
                            cout << endl;
                            cout << "--------------------------------------------------------------" << endl;
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
                            string temp;
                            cin >> temp;
                            if (temp == "true" || temp == "True" || temp == "TRUE" || temp == "Verdadero" ||
                                temp == "verdadero" || temp == "VERDADERO" || temp == "1" || temp == "si" ||
                                temp == "Si" || temp == "SI" || temp == "S" || temp == "s" || temp == "y" ||
                                temp == "Y" || temp == "yes" || temp == "Yes" || temp == "YES" || temp == "ok" ||
                                temp == "Ok" || temp == "OK")
                                disponibilidad = true;
                            else
                                disponibilidad = false;
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
                            Automovil *automovil = new Automovil(marca, modelo, matricula, combustible, precio, disponibilidad, mantenimiento);
                            DB.agregarAutomovil(automovil);
                            break;
                        }
                        case 7: {
                            cout << endl;
                            cout << "--------------------------------------------------------------" << endl;
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
                            Cliente *cliente = new Cliente(nombre, apellido, dni, telefono, direccion);
                            DB.agregarCliente(cliente);
                            break;
                        }
                        case 8: {
                            cout << endl;
                            cout << "--------------------------------------------------------------" << endl;
                            cout << "Ingrese por favor los datos del administrador de reservas: ";
                            cout << "Nombre: ";
                            string nombre;
                            cin >> nombre;
                            cout << "Apellido: ";
                            string apellido;
                            cin >> apellido;
                            cout << "DNI: ";
                            string dni;
                            cin >> dni;
                            cout << "Matricula: ";
                            string matricula;
                            cin >> matricula;
                            Empleados *admin = new AdministradorDeReservas(nombre, apellido, dni, matricula);
                            DB.agregarEmpleado(admin);
                            break;
                        }
                        case 9:{
                            cout << endl;
                            cout << "--------------------------------------------------------------" << endl;
                            cout << "Ingrese por favor los datos del empleado de ventas: ";
                            cout << "Nombre: ";
                            string nombre;
                            cin >> nombre;
                            cout << "Apellido: ";
                            string apellido;
                            cin >> apellido;
                            cout << "DNI: ";
                            string dni;
                            cin >> dni;
                            cout << "Matricula: ";
                            string matricula;
                            cin >> matricula;
                            Empleados *ventas = new EmpleadoDeVentas(nombre, apellido, dni, matricula);
                            DB.agregarEmpleado(ventas);
                            break;
                        }
                        case 10: {
                            cout << endl;
                            cout << "--------------------------------------------------------------" << endl;
                            cout << "Ingrese la matricula del auto que desea eliminar: " << endl;
                            string matricula;
                            cin >> matricula;
                            DB.eliminarAutomovil(matricula);
                            break;
                        }
                        case 11: {
                            cout << endl;
                            cout << "--------------------------------------------------------------" << endl;
                            cout << "Ingrese el DNI del cliente que desea eliminar: " << endl;
                            string dni;
                            cin >> dni;
                            DB.eliminarCliente(dni);
                            break;
                        }
                        case 12: {
                            cout << endl;
                            cout << "--------------------------------------------------------------" << endl;
                            cout << "Ingrese la matricula del empleado que desea eliminar: " << endl;
                            string matricula;
                            cin >> matricula;
                            DB.eliminarEmpleado(matricula);
                            break;
                        }
                        case 13:
                            exit = true;
                            break;
                    }
                }
                exit = false;
                break;
            case 2: {
                cout << endl;
                cout << "--------------------------------------------------------------" << endl;
                cout<<"Ingrese por favor la matricula del Empleado: ";
                string matricula;
                cin >> matricula;
                Empleados * empleado = DB.buscarEmpleado(matricula);
                if(empleado == nullptr) {
                    break;
                }
                if(dynamic_cast<AdministradorDeReservas*>(empleado)){
                    AdministradorDeReservas * admin = dynamic_cast<AdministradorDeReservas*>(empleado);
                    while(!exit){
                        cout<<endl;
                        cout<<"--------------------------------------------------------------"<<endl;
                        cout<<"Bienvenido empleado "<<admin->getNombre()<<" "<<admin->getApellido()<<endl;
                        cout<<"--------------------------------------------------------------"<<endl;
                        cout<<"Seleccione lo que quiere hacer: "<<endl;
                        cout<<"1. Agregar reserva"<<endl;
                        cout<<"2. Salir"<<endl;
                        cin >> choice;
                        switch (choice) {
                            case 1:{
                                cout << endl;
                                cout << "--------------------------------------------------------------" << endl;
                                cout << "Ingrese el DNI del cliente que desea hacer la reserva: " << endl;
                                string dni;
                                cin >> dni;
                                Cliente * cliente = DB.buscarCliente(dni);
                                if(cliente == nullptr)
                                    break;
                                cout << "Ingrese la matricula del auto que desea reservar: " << endl;
                                string matricula;
                                cin >> matricula;
                                Automovil * autom = DB.buscarAutomovil(matricula);
                                if(autom == nullptr)
                                    break;
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
                                admin->hacerReserva(cliente, autom, fechaInicio, fechaFin, estado, DB);
                                break;
                            }
                            case 2:
                                exit = true;
                                break;
                        }
                    }
                    exit = false;
                    break;
                }
                else if(dynamic_cast<EmpleadoDeVentas*>(empleado)){
                    EmpleadoDeVentas * ventas = dynamic_cast<EmpleadoDeVentas*>(empleado);
                    while(!exit) {
                        cout << endl;
                        cout << "--------------------------------------------------------------" << endl;
                        cout << "Bienvenido empleado " << ventas->getNombre() << " " << ventas->getApellido() << endl;
                        cout << "--------------------------------------------------------------" << endl;
                        cout << "Seleccione lo que quiere hacer: " << endl;
                        cout << "1. Facturar reserva" << endl;
                        cout << "2. Salir" << endl;
                        cin >> choice;
                        switch (choice) {
                            case 1:{
                                cout << endl;
                                cout << "--------------------------------------------------------------" << endl;
                                cout<<"Ingrese el DNI del cliente cuya reserva desea facturar: "<<endl;
                                string dni;
                                cin >> dni;
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
                                Reservas* reserva = DB.buscarReserva(dni, fechaInicio);
                                if(reserva == nullptr)
                                    break;
                                ventas->facturar(reserva, true);
                                break;
                            }
                            case 2:
                                exit = true;
                                break;
                        }
                    }
                    exit = false;
                    break;
                }

            }
            case 3:
                exit = true;
                break;
        }
    }
    return 0;
}
