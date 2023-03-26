/*Desarrollar un programa que defina un vector de 5 enteros y muestre el mayor y menor elemento. En el constructor cargarlo con valores aleatorios entre 0 y 10.
La clase debe utilizar solo la palabra clave public en la declaración de la clase.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Vector
{
    int vector[5];

public:
    Vector();
    ~Vector();
    void mayor();
    void menor();
    void imprimir();
};
Vector::Vector()
{
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        vector[i] = rand() % 10 + 1;
    }
}
void Vector::mayor(){
    int pos=0;
    for (int i = 1; i < 5; i++)
    {
        if (vector[pos]<vector[i])
        {
            pos=i;
        }
    }
    cout<<"El mayor numero es: "<<vector[pos]<<endl;
}
void Vector::menor(){
    int pos=0;
    for (int i = 1; i < 5; i++)
    {
        if (vector[pos]>vector[i])
        {
            pos=i;
        }
    }
    cout<<"El menor numero es: "<<vector[pos]<<endl;
}
void Vector::imprimir(){
    for (int i = 0; i < 5; i++)
    {
        cout<<vector[i]<<"\t";
    }
    cout<<endl;
}
Vector::~Vector(){
    cout<<"Progrma finalizado, gracias."<<endl;
    cin.get();
    cin.get();
}

int main() {
    cout<<"Desarrollar un programa que defina un vector de 5 enteros y muestre el mayor y menor elemento. En el constructor cargarlo con valores aleatorios entre 0 y 10.\nLa clase debe utilizar solo la palabra clave public en la declaración de la clase."<<endl;
    
    Vector v;
    cout<<endl;
    v.mayor();
    cout<<endl;
    v.menor();
    cout<<endl;
    v.imprimir();
    return 0;
}