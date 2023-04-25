#ifndef ESCOPETA_H
#define ESCOPETA_H

#include "Arma.h"
class Escopeta : public Arma
{
public:
    Escopeta();
    string disparar();
    string getNombre();
};
#endif // !ESCOPETA_H