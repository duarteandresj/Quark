#ifndef ARMA_H
#define ARMA_H
#include <string>
using namespace std;
class Arma
{
public:
    virtual string disparar()=0;
    virtual string getNombre()=0;
protected:
    string nombre;
};
#endif // ARMA_H