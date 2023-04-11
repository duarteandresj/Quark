/*Confeccionar una clase llamada Sumatoria que solicite la carga valores enteros por teclado. Finalizar la carga de valores al ingresar el cero. Mostrar en el destructor la suma de los valores ingresados.*/
#include <iostream>
using namespace std;
class Sumatoria
{
private:
    int suma;

public:
    Sumatoria();
    ~Sumatoria();
};
Sumatoria::Sumatoria()
{
    int auxINT;
        cout << "Ingrese los numeros a sumar, con un valor 0 se detiene la sumatoria"<<endl;
    do
    {
        cin >> auxINT;
        suma += auxINT;
    } while (auxINT != 0);
}
Sumatoria::~Sumatoria()
{
    cout << "La sumatoria de los numeros ingresados es: " << suma << endl;
    cin.get();
    cin.get();
}

int main(){
    cout<<"Confeccionar una clase llamada Sumatoria que solicite la carga valores enteros por teclado. Finalizar la carga de valores al ingresar el cero. Mostrar en el destructor la suma de los valores ingresados."<<endl;
    Sumatoria suma;
    return 0;
}