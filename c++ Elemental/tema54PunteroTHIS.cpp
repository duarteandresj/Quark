/*
En el lenguaje C++ para poder identificar a que objeto en particular estamos accediendo cuando llamamos a un método se le pasa un parámetro llamado this (significa este objeto)

Este puntero almacena la dirección de memoria donde se guardan los atributos del objeto respectivo

También cuando llamamos a un método dentro de la clase estamos antecediendo el puntero this para saber de cual objeto se trata:

No es obligatorio anteceder a los nombres de atributos y métodos, pero en realidad la dirección de los atributos de cada objeto en C++ se resuelve mediante este puntero.

Un caso muy sencillo donde debemos utilizar el puntero this obligatorio es cuando un método tiene parámetros con el mismo nombre que los atributos de la clase.*/

#include <iostream>
using namespace std;
// Crear una clase llamada Temperatura que permita inicializar la temperatura mínima, máxima y actual. Definir en el constructor los nombres de los parámetros iguales a los atributos.
class Temperatura
{
    int minima, maxima, actual;
    void imprimir();

public:
    Temperatura(int min, int max, int act);
};

// En este caso debemos hacer uso de this para especificar que se estan hablando de los atributos privados de la clase y no de los parametros que se estan pasando
Temperatura::Temperatura(int minima, int maxima, int actual)
{
    this->minima = minima;
    this->maxima = maxima;
    this->actual = actual;
    imprimir();
}
void Temperatura::imprimir()
{
    cout << minima << "\t" << maxima << "\t" << actual << endl;
}
int main(int argc, char const *argv[])
{
    Temperatura t1(-5, 35, 25);
    Temperatura t2(-15, 45, 5);
    return 0;
}
