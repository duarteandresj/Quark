#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Definir tres variables enteras e inicializarlas con los valores 5,10 y 15. Luego definir una variable puntero a entero. Hacer que dicha variable apunte sucesivamente a las distintas variables definidas previamente e imprimir su contenido." << endl;
    int val1 = 5, val2 = 10, val3 = 15;
    int *pe;
    pe = &val1;
    cout << "Puntero apuntando a: " << pe << " con un valor: " << *pe << endl;
    pe = &val2;
    cout << "Puntero apuntando a: " << pe << " con un valor: " << *pe << endl;
    pe = &val3;
    cout << "Puntero apuntando a: " << pe << " con un valor: " << *pe << endl;

    cout << "Se puede observar como el puntero cambia la direccion por la nueva a la que apunta" << endl;


    cout << "\n\n\nDefinir dos variables float y un puntero a un tipo de dato float. Hacer que el puntero guarde sucesivamente las direcciones de la primera y segunda variable y cambiar el contenido de las mismas por asignación. Imprimir las dos variables de tipo float.\n" << endl;
    float vf1=10.5,vf2=5.10;
    float *pf;
    pf=&vf1;
    cout<<"Puntero: "<<pf<<" valor: "<<*pf<<endl;
    cout<<"Modificacion del valor de vf1 por puntero"<<endl;
    *pf=123.2;
    cout<<"valor de variable: "<<vf1<<endl;
    cout<<"Modificamos destino de puntero"<<endl;
    pf=&vf2;
    cout<<"Puntero: "<<pf<<" valor: "<<*pf<<endl;
    cout<<"Modificacion del valor de vf2 por puntero"<<endl;
    *pf=223.2;
    cout<<"valor de variable: "<<vf2<<endl;
    return 0;
}
