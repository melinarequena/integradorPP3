//
// Created by melin on 9/18/2024.
//

#include "Reservas.h"
#include "Cliente.h"
#include "Cliente.cpp"
//constructor
Reservas(Cliente cliente, Automovil automovil, string fInicio, string fFinal, float monto, string estadoReser) {
cliente = cliente;
automovil = automovil;
fechaInicio = fInicio;
fechaFinal = fFinal;
montoTotal = monto;
estadoReserva = estadoReser;
cout << "Se ha creado una reserva " << endl;
}

getInfoReservas()const{
    getInfoCliente();
    cout<<"Vehiculo: "<< automovil<<endl;
    cout<<"Fecha de inicio: "<<fechaInicio<<" Fecha Final: "<<fechaFinal<<endl;
    cout<<"Monto: "<<montoTotal;
    cout<<"Estado de reserva: "<<estadoReserva<<endl;
}