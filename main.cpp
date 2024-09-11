#include <iostream>
#include <string>
using namespace std;


class Mantenimiento {
private:
    string fecha;
    string tipoRevision;
    float costo;

public:
    Mantenimiento(string fecha, string revision, float costo) {
        fecha = fecha;
        tipoRevision = revision;
        costo = costo;
    }
};

class Automovil {
protected:
    string marca;
    string modelo;
    string matricula;
    string combustible;
    float precioAlquiler;
    bool disponiblidad;
    Mantenimiento mantenimiento;

public:
    Automovil(string marca, string modelo, string matricula, string combustible, float precio, bool disponibilidad,Mantenimiento m) {
        marca = marca;
        modelo = modelo;
        matricula = matricula;
        combustible = combustible;
        precioAlquiler = precio;
        disponiblidad = disponibilidad;
        mantenimiento = m;
    }
};

class Sedan : public Automovil {
    public:
    Sedan (string marc, string mod, string matr, string comb, float pre, bool disp, Mantenimiento m) {
        marca = marc;
        modelo = mod;
        matricula = matr;
        combustible = comb;
        precioAlquiler = pre;
        disponiblidad = disp;
        mantenimiento = m;
}

class SUV : public Automovil {
    public:
        SUV(string marc, string mod, string matr, string comb, float pre, bool disp, Mantenimiento m) {
            marca = marc;
            modelo = mod;
            matricula = matr;
            combustible = comb;
            precioAlquiler = pre;
            disponiblidad = disp;
            mantenimiento = m;
        }
}

class Camioneta : public Automovil {
    public:
        Camioneta(string marc, string mod, string matr, string comb, float pre, bool disp, Mantenimiento m) {
            marca = marc;
            modelo = mod;
            matricula = matr;
            combustible = comb;
            precioAlquiler = pre;
            disponiblidad = disp;
            mantenimiento = m;
        }
};


class Cliente {
private:
    string nombre;
    string apellido;
    string dni;
    string telefono;
    string direccion;

    // hisyorial de resevas (CONTENEDOR DE RESERVAS?)

public:
    Cliente(string nom, string ape, string dni, string tel, string direc){
        nombre = nom;
        apellido = ape;
        dni = dni;
        telefono = tel;
        direccion = direc;
        cout <<"Se ha creado el cliente: "<<dni<<endl;
    }
};

class Reservas {
private:
    Cliente cliente;
    Automovil automovil;
    string fechaInicio;
    string fechaFinal;
    float montoTotal;
    string estadoReserva;

public:
    Reservas(Cliente cliente, Automovil automovil, string fInicio, string fFinal, floar monto, string estadoReser) {
        cliente = cliente;
        automovil = automovil;
        fechaInicio = fInicio;
        fechaFinal = fFinal;
        montoTotal = monto;
        estadoReserva = estadoReser;
        cout << "Se ha creado una reserva " << endl;
    }

};

class Facturas {
private:
    Reservas reserva;
    bool cobro;


public:
    Facturas(Reservas reserva, bool cob) {
        reserva = reserva;
        cobro = cob;
    }
};



class Empleados {
private:
    string nombre;
    string apellido;
    string matricula;
    string Rol;

    /*Los empleados deben tener roles (administradores, empleados
    de ventas
    )
    y gestionar diferentes aspectos del sistema, como la asignación
    de reservas y la actualización de inventario
    .*/
public:
    Empleados(string nom, string ap, string mat, string rol) {
        nombre = nom;
        apellido = ap;
        matricula = mat;
        Rol = rol;
    }
};

class Contenedores {
    private:
    // vector vehiculos
    // vector clientes
    // vector reservas
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
