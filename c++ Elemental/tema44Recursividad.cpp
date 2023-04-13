/*Primero debemos decir que la recursividad no es una estructura de datos, sino que es una técnica de programación que nos permite que un bloque de instrucciones se ejecute n veces. Remplaza en ocasiones a estructuras repetitivas.
En C++ los métodos pueden llamarse a sí mismos. Si dentro de un método existe la llamada a sí mismo decimos que el método es recursivo.
 */
// Problema 1:
// Implementación de un método recursivo.
#include <iostream>
using namespace std;
class Recursividad
{
public:
    void repetir();
};
void Recursividad::repetir()
{
    repetir();
}
/*
Problema 2:
Implementar un método recursivo que reciba un parámetro de tipo entero y luego llame en forma recursiva con el valor del parámetro menos 1.*/
class Recursividad2
{
public:
    void imprimir(int x);
};
void Recursividad2::imprimir(int x)
{
    cout << x << "\t";
    imprimir(x - 1);
}
/*Problema 3:
Implementar un método recursivo que imprima en forma descendente de 5 a 1 de uno en uno. */
class Recursividad3
{
public:
    void imprimir(int x);
};
void Recursividad3::imprimir(int x)
{
    if (x > 0)
    {
        cout << x << "\t";
        imprimir(x - 1);
    }
}
/*Problema 4:
Imprimir los números de 1 a 5 en pantalla utilizando recursividad.*/
class Recursividad4
{
public:
    void imprimir(int x);
};
void Recursividad4::imprimir(int x)
{
    if (x > 0)
    {
        cout << x << "-";
        imprimir(x - 1);
    }
}
/*Problema 5:
Otro problema típico que se presenta para analizar la recursividad es el obtener el factorial de un número.
Recordar que el factorial de un número es el resultado que se obtiene de multiplicar dicho número por el anterior y así sucesivamente hasta llegar a uno.
Ej. el factorial de 4 es 4 * 3 * 2 * 1 es decir 24.*/
class Factorial
{
public:
    int factorial(int x);
};
int Factorial::factorial(int x)
{
    if (x > 0)
    {
        int resultado = x * factorial(x - 1);
        return resultado;
    }
    else
    {
        return 1;
    }
}
/*Problema 6:
Implementar un método recursivo para ordenar los elementos de un vector.*/
class Vector
{
    int vector[5];
    void ordenar(int cant);

public:
    void cargar();
    void imprimir();
    void ordenar();
};
void Vector::cargar()
{
    cout << "Ingrese los componentes del vector" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> vector[i];
        cin.get();
    }
}
void Vector::imprimir()
{
    for (int i = 0; i < 5; i++)
    {
        cout << vector[i] << "\t";
    }
    cout << endl;
}
void Vector::ordenar(int cant)
{
    if (cant > 1)
    {
        for (int i = 0; i < cant - 1; i++)
        {
            if (vector[i] > vector[i + 1])
            {
                int aux = vector[i + 1];
                vector[i + 1] = vector[i];
                vector[i] = aux;
            }
        }
        ordenar(cant - 1);
    }
}
void Vector::ordenar()
{
    ordenar(5);
}

int main(int argc, char const *argv[])
{
    cout << "PROBLEMA 1" << endl;
    Recursividad *re = new Recursividad();
    re->repetir();
    delete re;
    cout << "PROBLEMA 2" << endl;
    Recursividad2 *rec = new Recursividad2();
    rec->imprimir(5);
    delete rec;
    cout << "PROBLEMA 3" << endl;
    Recursividad3 *recu = new Recursividad3();
    recu->imprimir(5);
    delete recu;
    cout << "PROBLEMA 4" << endl;
    Recursividad4 *recur = new Recursividad4();
    recur->imprimir(7);
    cout << "PROBLEMA 5" << endl;
    Factorial *fa = new Factorial();
    cout << "El factorial de 0 es " << fa->factorial(0) << endl;
    cout << "El factorial de 1 es " << fa->factorial(1) << endl;
    cout << "El factorial de 2 es " << fa->factorial(2) << endl;
    cout << "El factorial de 3 es " << fa->factorial(3) << endl;
    cout << "El factorial de 4 es " << fa->factorial(4) << endl;
    cout << "El factorial de 5 es " << fa->factorial(5) << endl;
    cout << "El factorial de 6 es " << fa->factorial(6) << endl;
    cout << "El factorial de 7 es " << fa->factorial(7) << endl;
    cout << "El factorial de 8 es " << fa->factorial(8) << endl;
    cout << "El factorial de 9 es " << fa->factorial(9) << endl;
    cout << "El factorial de 10 es " << fa->factorial(10) << endl;
    delete fa;
    cout << "PROBLEMA 6" << endl;
    Vector *ve = new Vector;
    ve->cargar();
    ve->imprimir();
    ve->ordenar();
    ve->imprimir();
    delete ve;
    return 0;
}
