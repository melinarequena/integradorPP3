//
// Created by melin on 9/18/2024.
//

#ifndef MANTENIMIENTO_H
#define MANTENIMIENTO_H
#include <string>

using namespace std;


class Mantenimiento {
private:
    string fecha;
    string tipoRevision;
    float costo;

public:
    Mantenimiento(string fecha, string revision, float costo);
    ~Mantenimiento();
    string getFecha();
    string getTipoRevision();
    float getCosto();
};




#endif //MANTENIMIENTO_H
