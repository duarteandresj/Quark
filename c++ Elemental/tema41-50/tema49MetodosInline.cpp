/*
En C++ un método es inline solo con implementarlo en la declaración de la clase:

Es conveniente utilizar métodos inline solo para algoritmos pequeñas ya que si bien hacen el código más eficiente por otro lado generan un código compilado más grande.

Tanto constructores como destructores pueden implementarse inline

Otra cosa que podemos notar en programas escritos en C++ es que cuando se declaran métodos inline se codifiquen en una sola línea,
*/
// Crear una clase llamada Temperatura que permita cargar la temperatura mínima, máxima y actual. Definir un método inline para retornar el rango de variación (diferencia entre la máxima y la mínima)
#include <iostream>
using namespace std;
class Temperatura
{
private:
    int tempMin, tempMax, tempAct;

public:
    Temperatura(int tmin, int tmax, int tact){  tempMax = tmax; tempAct = tact; tempMin = tmin;}
    // Se puede poner inline para ser mas especifico pero no es necesario
    int rango() { return this->tempMax - this->tempMin; }
    // generalmente se escriben en una sola linea;
    void imprimir();
};
void Temperatura::imprimir()
{
    cout << "TEMPERATURAS:" << endl;
    cout << "Maxima: " << tempMax << endl;
    cout << "Minima: " << tempMin << endl;
    cout << "Actual: " << tempAct << endl;
}

int main(int argc, char const *argv[])
{
    Temperatura temperatura(-1, 5, 8);
    cout << "Rango: " << temperatura.rango() << endl;
    temperatura.imprimir();
    return 0;
}
