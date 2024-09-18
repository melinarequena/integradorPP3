//
// Created by melin on 9/18/2024.
//

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;

class Cliente {
private:
    string nombre;
    string apellido;
    string dni;
    string telefono;
    string direccion;

    // hisyorial de resevas (CONTENEDOR DE RESERVAS?)

public:
    Cliente(string nom, string ape, string dni, string tel, string direc); //constructor
    ~Cliente(){}; //destructor
};



#endif //CLIENTE_H
