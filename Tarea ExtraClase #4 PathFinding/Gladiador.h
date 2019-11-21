//
// Creado por  Kevin Rodriguez el 04/09/19.
//

#ifndef TE4_DATOSII_IIS_2019_GLADIADOR_H
#define TE4_DATOSII_IIS_2019_GLADIADOR_H


#include <iostream>
#include <vector>
#include "Cuadricula.h"

#define ZONE_SIZE 100

using namespace std;

class Gladiador {

private:
    bool muerto=false;
    vector<int> pathToGoal;
    Cuadricula* cuadricula;
    int hits[ZONE_SIZE*ZONE_SIZE][24];



public:

    ///Metodos
    void morir();

    ///Getters & Setters
    void setPathToGoal(vector<int> _pathToGoal);
    void setCuadricula(Cuadricula* _cuadricula);

    bool getMuerto();
    vector<int> getPathToGoal();
    Cuadricula* getCuadricula();


};


#endif //Tarea Extra Clase 4 2019_GLADIADOR_H
