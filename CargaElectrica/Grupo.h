//
// Created by Ivan on 08/11/2021.
//

#ifndef CARGAS_GRUPO_H
#define CARGAS_GRUPO_H

#include <string>

using namespace std;

class Grupo {
private:
    string nombre;
    float pka;
    int carga;

public:
    //constructores
    Grupo(string, float, int);
    Grupo();

    // funciones
    int GetCarga();
    float GetpK();

};


#endif //CARGAELECTRICA_GRUPO_H
