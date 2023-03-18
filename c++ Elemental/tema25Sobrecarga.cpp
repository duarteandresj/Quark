/*Plantear una clase llamada Matematica que implemente cuatro métodos llamados mayor. El primero que reciba como parámetros dos enteros y devuelva el mayor de ellos. El segundo que reciba tres enteros y devuelva el mayor. Los mismo deben hacer los siguientes dos métodos pero recibiendo parámetros de tipo float.*/
#include <iostream>
using namespace std;
class Matematica
{
public:
    int mayor(int v, int v1);
    int mayor(int v, int v1, int v2);
    float mayor(float v, float v1);
    float mayor(float v, float v1, float v2);
};
int Matematica::mayor(int v, int v1)
{
    int aux;
    if (v > v1)
    {
        aux = v;
    }
    else
    {
        aux = v1;
    }
    return aux;
}
int Matematica::mayor(int v, int v1, int v2)
{
    int aux;
    if (v > v1 && v > v2)
    {
        aux = v;
    }
    else if (v1 > v2)
    {
        aux = v1;
    }
    else
    {
        aux = v2;
    }
    return aux;
}
float Matematica::mayor(float v, float v1)
{
    float aux;
    if (v > v1)
    {
        aux = v;
    }
    else
    {
        aux = v1;
    }
    return aux;
}
float Matematica::mayor(float v, float v1, float v2)
{
    float aux;
    if (v > v1 && v > v2)
    {
        aux = v;
    }
    else if (v1 > v2)
    {
        aux = v1;
    }
    else
    {
        aux = v2;
    }
    return aux;
}
/*Crear una clase llamada EstructuraVector. Definir un atributo de tipo vector de 5 elementos enteros. Declarar dos constructores, uno sin parámetros que cargue el vector con valores cero y otro constructor que reciba un entero indicando el valor entero con el que deben inicializarse las componentes.*/
class EstructuraVector
{
    int vector[5];

public:
    EstructuraVector();
    EstructuraVector(int v);
    void imprimir();
};
EstructuraVector::EstructuraVector()
{
    for (int i = 0; i < 5; i++)
    {
        vector[i] = 0;
    }
}
EstructuraVector::EstructuraVector(int v)
{
    for (int i = 0; i < 5; i++)
    {
        vector[i] = v;
    }
}
void EstructuraVector::imprimir()
{
    for (int i = 0; i < 5; i++)
    {
        cout << vector[i] << "\t";
    }
    cout << endl;
}
int main()
{
    cout << "Plantear una clase llamada Matematica que implemente cuatro métodos llamados mayor. El primero que reciba como parámetros dos enteros y devuelva el mayor de ellos. El segundo que reciba tres enteros y devuelva el mayor. Los mismo deben hacer los siguientes dos métodos pero recibiendo parámetros de tipo float." << endl;
    Matematica ma;
    cout << "mayor entre 2 y 5: " << ma.mayor(2, 5) << endl;
    cout << "mayor entre 2, 7 y 5: " << ma.mayor(2, 7, 5) << endl;
    cout << "mayor entre 2.5 y 5.1: " << ma.mayor(2.5f, 5.1f) << endl;
    cout << "mayor entre 2.5,5.8 y 7.55: " << ma.mayor(2.5f, 5.8f, 7.55f) << endl;
    cin.get();
    cin.get();
    cout << "Crear una clase llamada EstructuraVector. Definir un atributo de tipo vector de 5 elementos enteros. Declarar dos constructores, uno sin parámetros que cargue el vector con valores cero y otro constructor que reciba un entero indicando el valor entero con el que deben inicializarse las componentes." << endl;
    EstructuraVector ve;
    ve.imprimir();
    cout << endl;
    EstructuraVector vc(2);
    vc.imprimir();
    cin.get();
    cin.get();
    return 0;
}