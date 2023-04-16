/*
En C++ hay dos formas de pasar parámetros a un método: por valor o por referencia.

Veremos que podemos pasar una variable y que el parámetro pueda acceder y modificar directamente la variable que le pasamos.
*/
#include <iostream>
using namespace std;

class Prueba
{
public:
    void cambiar1(int z);
    void cambiar2(int &z);
};
void Prueba::cambiar1(int z)
{
    z = 0;
}
// Los parámetros por referencia se les antecede al nombre del parámetro el caracter &
void Prueba::cambiar2(int &z)
{
    z = 0;
}
// En nuestro ejemplo el parámetro z accede directamente al contenido de la variable num que definimos en la main

// Plantear una clase Vector que permita definir y cargar un vector de 5 elementos enteros. Definir un método que retorne el mayor y menor elemento del vector mediante dos parámetros por referencia.
class Vector
{
    int vector[5];

public:
    Vector()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "ingrese elemento: ";
            cin >> vector[i];
        }
        cin.get();
    }
    void imprimir();
    void mayorMenor(int &may, int &men);
};
void Vector::imprimir()
{
    for (int i = 0; i < 5; i++)
    {
        cout << vector[i] << "-";
    }
    cout << endl;
}

//Como tenemos que retornar dos valores (mayor y menor elemento) a la main implementamos un método con dos parámetros por referencia:
void Vector::mayorMenor(int &may, int &men)
{
    may = vector[0];
    men = vector[0];
    for (int i = 1; i < 5; i++)
    {
        if (vector[i] > may)
        {
            may = vector[i];
        }
        else
        {
            if (vector[i] < men)
            {
                men = vector[i];
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    Prueba prueba1;
    int num = 10;
    cout << "Valor de la variable num:" << num << "\n";
    prueba1.cambiar1(num);
    cout << "Valor de la variable num luego de enviarla por valor:" << num << "\n";
    prueba1.cambiar2(num);
    cout << "Valor de la variable num luego de enviarla por referencia:" << num << "\n";
    Vector vector1;
    vector1.imprimir();
    int mayor, menor;
    vector1.mayorMenor(mayor, menor);
    //Cuando modificamos los parámetros may y men en realidad estamos modificando las variables definidas en la main llamadas mayor y menor:
    cout << "Mayor elemento del vector:" << mayor << "\n";
    cout << "Menor elemento del vector:" << menor << "\n";
    return 0;
}
