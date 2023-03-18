/*Mostrar la tabla de multiplicar de un valor que se ingresa por teclado. En el constructor pedir el entero. Al finalizar el programa mostrar un mensaje de despedida (este mensaje mostrarlo en el destructor).*/
#include <iostream>
using namespace std;
class Tabla
{
private:
    int valor;

public:
    Tabla();
    void imprimir();
    ~Tabla();
};
Tabla::Tabla()
{
    cout << "Escriba el valor de la tabla que desea" << endl;
    cin >> valor;
}
void Tabla::imprimir()
{
    for (int i = 0; i < 10; i++)
    {
        cout << valor << "x" << i + 1 << "=\t" << valor * (i + 1) << endl;
    }
}
Tabla::~Tabla(){
    cout<<"Gracias por usar este progrma."<<endl;
    cin.get();
    cin.get();
}

int main()
{cout<<"Mostrar la tabla de multiplicar de un valor que se ingresa por teclado. En el constructor pedir el entero. Al finalizar el programa mostrar un mensaje de despedida (este mensaje mostrarlo en el destructor)."<<endl;
Tabla tablita;
tablita.imprimir();
return 0;
}