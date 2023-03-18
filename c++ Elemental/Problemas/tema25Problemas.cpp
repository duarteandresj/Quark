/*Implementar una clase que permita cargar un vector de 5 elementos. Definir tres métodos sobrecargados que :
void imprimir(); //imprime todo el vector
void imprimir(int hasta);//imprime desde el principio del vector hasta el valor que le pasamos
void imprimir(int desde,int hasta);//imprime un rango de valores del vector.*/
#include <iostream>
using namespace std;
class Vector
{
    int vector[5];

public:
    Vector();
    void imprimir();
    void imprimir(int final);
    void imprimir(int inicial, int final);
};
Vector::Vector()
{
    cout << "Carga del vector: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> vector[i];
    }
    cin.get();
}
void Vector::imprimir()
{
    for (int i = 0; i < 5; i++)
    {
        cout << vector[i] << "\t";
    }
    cout << endl;
}
void Vector::imprimir(int final)
{
    if (final < 5)
    {

        for (int i = 0; i < final; i++)
        {
            cout << vector[i] << "\t";
        }
        cout << endl;
    }
    else
    {
        cout << "El numero ingresado es mayor al tamaño del vector" << endl;
        cout << "Se imprimira el vector entero:" << endl;
        imprimir();
    }
}

void Vector::imprimir(int inicial, int final)
{
    if (inicial > 0 && final < 5 && inicial < final)
    {

        for (int i = inicial; i < final; i++)
        {
            cout << vector[i] << "\t";
        }
        cout << endl;
    }
    else
    {
        cout << "Los numeros ingresados rompen alguna regla." << endl;
        cout << "Se imprimira el vector entero:" << endl;
        imprimir();
    }
}
/*Plantear una clase llamada Punto con dos atributos llamados x e y.
Definir dos constructores uno sin parámetros donde cargue en los atributos x e y el valor cero y otro con dos parámetros que cargue los atributos x e y con los valores que llegan al constructor. Imprimir los valores de los atributos.*/
class Punto
{
    int x, y;

public:
    Punto();
    Punto(int x, int y);
    void imprimir();
};
Punto::Punto()
{
    x = 0;
    y = 0;
}
Punto::Punto(int x, int y)
{
    this->x = x;
    this->y = y;
}
void Punto::imprimir()
{
    cout << "El valor de x es: " << x << endl;
    cout << "El valor de y es: " << y << endl;
}

int main(int argc, char const *argv[])
{
    cout << "Implementar una clase que permita cargar un vector de 5 elementos. Definir tres métodos sobrecargados que :\n\tvoid imprimir(); //imprime todo el vector\n\tvoid imprimir(int hasta);//imprime desde el principio del vector hasta el valor que le pasamos\n\tvoid imprimir(int desde,int hasta);//imprime un rango de valores del vector." << endl;
    Vector ve;
    cout << "Impresion sin parametros" << endl;
    ve.imprimir();
    cout << "Impresion con parametro final 3" << endl;
    ve.imprimir(3);
    cout << "Impresion con parametro final 6" << endl;
    ve.imprimir(6);
    cout << "Impresion con parametro inicial 1 y final 3" << endl;
    ve.imprimir(1, 3);
    cout << "Impresion con parametro inicial 1 y final 9" << endl;
    ve.imprimir(1, 9);
    cout << "Impresion con parametro inicial 5 y final 1" << endl;
    ve.imprimir(5, 1);
    cout << "Impresion con parametro inicial -1 y final 25 " << endl;
    ve.imprimir(-1, 25);
    cin.get();
    cin.get();
    cout << "Plantear una clase llamada Punto con dos atributos llamados x e y.\nDefinir dos constructores uno sin parámetros donde cargue en los atributos x e y el valor cero y otro con dos parámetros que cargue los atributos x e y con los valores que llegan al constructor. Imprimir los valores de los atributos." << endl;
    Punto p;
    Punto q(2, 8);
    cout << "Punto sin parametros:" << endl;
    p.imprimir();
    cout << "Punto con parametros:" << endl;
    q.imprimir();
    cin.get();
    cin.get();
    return 0;
}
