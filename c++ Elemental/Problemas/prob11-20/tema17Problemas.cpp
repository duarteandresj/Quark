#include <iostream>
using namespace std;
// Cargar un vector de 5 elementos enteros. imprimir el menor y un mensaje si se repite dentro del vector.
class Enteros
{
private:
    int numeros[5];
    int menor;

public:
    void cargar();
    void getMenor();
    void seRepite();
};
void Enteros::cargar()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese el numero: ";
        cin >> numeros[i];
    }
}
void Enteros::getMenor()
{
    menor = numeros[0];
    for (int i = 0; i < 5; i++)
    {
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }
    cout << "El menor numero es: ";
    cout << menor << endl;
}
void Enteros::seRepite()
{
    bool seRepite = false;
    int cant = 0;
    for (int i = 0; i < 5; i++)
    {
        if (menor == numeros[i])
        {
            cant++;
        }
    }
    if (cant > 1)
    {
        cout << "El numero 'menor' se repite";
    }
    else
    {
        cout << "El numero 'menor' no se repite";
    }
}
int main()
{
    cout << "Cargar un vector de 5 elementos enteros. imprimir el menor y un mensaje si se repite dentro del vector.\n"
         << endl;
    Enteros vector;
    vector.cargar();
    cout << "\n";
    vector.getMenor();
    cout << "\n";
    vector.seRepite();
    cin.get();
    cin.get();
    return 0;
}