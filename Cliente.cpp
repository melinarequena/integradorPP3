//
// Created by melin on 9/18/2024.
//
//constructor cliente
Cliente(string nom, string ape, string dni, string tel, string direc, Reservas res){
    nombre = nom;
    apellido = ape;
    dni = dni;
    telefono = tel;
    direccion = direc;
    cout <<"Se ha creado el cliente: "<<dni<<endl;
}
//nueva reserva
void agregarReserva(const Reservas& reserva) {
    historialReservas.push_back(reserva);
    cout << "Se ha agregado una nueva reserva para el cliente: " << dni << endl;
}

// obtener el historial de reservas
vector<Reservas> obtenerHistorialReservas() const {
    return historialReservas;
}
getInfoCliente()const{
    cout<<"Nombre: "<<nombre<<" "<<apellido<<endl;
    cout<<"DNI: "<< dni<<endl;
    cout<<"Telefono: "<<telefono;
    cout<<"Direccion: "<<direccion;
}

