#include <iostream>
using namespace std;
// Plantear una clase que permita cargar un valor entero por teclado. Definir un método que solicite la carga del entero y llame a otro método al que le pasamos el valor ingresado y proceda a mostrar los valores enteros desde el 1 hasta el valor que llega como parámetro (es decir el ingresado por teclado)
class DeUno
{
private:
    void moverValor(int v1);

public:
    void cargaValor();
};
void DeUno::moverValor(int v1)
{
    if (v1 >= 1)
    {
        for (int i = 1; i <= v1; i++)
        {
            cout << i;
            if (i != v1)
            {

                cout << "-";
            }
        }
    }
    else
    {
        for (int i = 1; i >= v1; i--)
        {
            cout << i;
            if (i != v1)
            {

                cout << "-";
            }
        }
    }
}
void DeUno::cargaValor()
{
    int valor;
    cout << "Ingrese valor: ";
    cin >> valor;
    moverValor(valor);
}
// Desarrollar una clase con dos métodos, uno para la carga de dos enteros. Definir un método privado que le enviemos los valores ingresados por teclado y nos retorne el mayor de ellos.
class Mayor
{
private:
    int maximo(int v1, int v2);

public:
    void cargaValores();
};
int Mayor::maximo(int v1, int v2)
{
    int aux;
    if (v1 > v2)
    {
        aux = v1;
    }
    else
    {
        aux = v2;
    }
    return aux;
}
void Mayor::cargaValores()
{
    int val1, val2;
    cout << "Ingrese primer valor: ";
    cin >> val1;
    cout << "Ingrese segundo valor: ";
    cin >> val2;
    cout << "\n";
    cout << "El mayor de los datos ingresados es: ";
    cout << maximo(val1, val2) << endl;
}

int main()
{
    cout << "Plantear una clase que permita cargar un valor entero por teclado. Definir un método que solicite la carga del entero y llame a otro método al que le pasamos el valor ingresado y proceda a mostrar los valores enteros desde el 1 hasta el valor que llega como parámetro (es decir el ingresado por teclado)" << endl;
    DeUno deUnoEnUno;
    deUnoEnUno.cargaValor();
    cin.get();
    cin.get();
    cout << "Desarrollar una clase con dos métodos, uno para la carga de dos enteros. Definir un método privado que le enviemos los valores ingresados por teclado y nos retorne el mayor de ellos." << endl;
    Mayor maxi;
    maxi.cargaValores();
    cin.get();
    cin.get();
    return 0;
}