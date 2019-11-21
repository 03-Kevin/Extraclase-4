#include <iostream>
#include "Juego.h"

int main() {
    Juego* xd = new Juego();
    xd->generateTowers(2);
    xd->doAStar();
}