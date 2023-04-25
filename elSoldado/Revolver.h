#ifndef REVOLVER_H
#define REVOLVER_H

#include "Arma.h"
class Revolver:public Arma
{public:
    Revolver();
    string disparar();
    string getNombre();
};
#endif // !REVOLVER_H