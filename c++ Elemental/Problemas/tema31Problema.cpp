/*Plantear una clase para administrar un vector de 5 enteros. Definir además del método para cargar el vector un método que imprima las componentes empleando un puntero que avance por todas las direcciones de las componentes utilizando el operador ++.*/
#include <iostream>
using namespace std;
class Vector
{
    int vector[5];

public:
    void carga();
    void imprimir();
};

void Vector::carga()
{
    cout << "Cargue el vector: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> vector[i];
    }
}

void Vector::imprimir()
{
    int *pe;
    pe = &vector[0];
for (int i = 0; i < 5; i++)
{
    cout<<*pe<<"\t";
    pe++;
}
cout<<endl;
    
}
int main(int argc, char const *argv[])
{
    cout<<"Plantear una clase para administrar un vector de 5 enteros. Definir además del método para cargar el vector un método que imprima las componentes empleando un puntero que avance por todas las direcciones de las componentes utilizando el operador ++."<<endl;
    Vector ve;
    ve.carga();
    cout<<"\n"<<endl;
    ve.imprimir();
    return 0;
}
