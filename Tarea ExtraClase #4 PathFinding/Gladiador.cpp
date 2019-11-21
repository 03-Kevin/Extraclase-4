//
// Creado por  Kevin Rodriguez el 04/09/19.
//

#include "Gladiador.h"

void Gladiador::morir(){
    muerto=true;
}

void Gladiador::setPathToGoal(vector<int> _pathToGoal) {
    pathToGoal = _pathToGoal;
}

Cuadricula* Gladiador::getCuadricula() {
    return cuadricula;
}

void Gladiador::setCuadricula(Cuadricula* _cuadricula) {
    cuadricula = _cuadricula;
}

bool Gladiador::getMuerto(){
    return muerto;
}

vector<int> Gladiador::getPathToGoal() {
    return pathToGoal;
}