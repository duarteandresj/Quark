#ifndef RIFLE_H
#define RIFLE_H

#include "Arma.h"
class Rifle:public Arma
{public:
    Rifle();
    string disparar();
    string getNombre();
};
#endif // !RIFLE_H