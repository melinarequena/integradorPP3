//
// Created by melin on 9/18/2024.
//

#ifndef EMPLEADOS_H
#define EMPLEADOS_H
#include <string>

using namespace std;



class Empleados {
private:
    string nombre;
    string apellido;
    string matricula;
    int dni;

    /*Los empleados deben tener roles (administradores, empleados
    de ventas
    )
    y gestionar diferentes aspectos del sistema, como la asignación
    de reservas y la actualización de inventario
    .*/
public:
    Empleados(string nom, string ap, string mat, int dni) {}
};

#endif //EMPLEADOS_H
