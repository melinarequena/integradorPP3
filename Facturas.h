//
// Created by melin on 9/18/2024.
//

#ifndef FACTURAS_H
#define FACTURAS_H
#include "Reservas.h"


class Facturas {
private:
    Reservas reserva;
    bool cobro;
public:
    Facturas(Reservas reserva, bool cob);
    ~Facturas(); //destructor
};



#endif //FACTURAS_H
