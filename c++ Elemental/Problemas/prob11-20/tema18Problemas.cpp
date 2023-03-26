#include <iostream>
using namespace std;
// Cargar un vector de 5 elementos enteros. Ordenarlo de mayor a menor y mostrarlo por pantalla, luego ordenar de menor a mayor e imprimir nuevamente.
class Vector
{
private:
    int numeros[5];

public:
    void cargar();
    void ordenarMayorMenor();
    void ordenarMenorMayor();
    void imprimir(char mensaje[30]);
};
void Vector::cargar()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese valor: ";
        cin >> numeros[i];
    }
}
void Vector::ordenarMayorMenor()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (numeros[j] < numeros[j + 1])
            {
                int aux = numeros[j + 1];
                numeros[j + 1] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
}
void Vector::ordenarMenorMayor()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                int aux = numeros[j + 1];
                numeros[j + 1] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
}

void Vector::imprimir(char mensaje[30])
{
    cout << "El vector ordenado ";
    cout << mensaje;
    for (int i = 0; i < 5; i++)
    {
        if (i != 4)
        {
            cout << numeros[i];
            cout << "-";
        }
        else
        {
            cout << numeros[i];
        }
    }
}
int main(){
    cout<<"Cargar un vector de 5 elementos enteros. Ordenarlo de mayor a menor y mostrarlo por pantalla, luego ordenar de menor a mayor e imprimir nuevamente."<<endl;
    Vector numeros;
    numeros.cargar();
    cout<<"\n";
    numeros.ordenarMayorMenor();
    char mensaje[30]="Mayor a Menor: ";
    numeros.imprimir(mensaje);
    cout<<"\n";
    numeros.ordenarMenorMayor();
    char mensaje1[30]="Menor a Mayor:";
    numeros.imprimir(mensaje1);
    cin.get();
    cin.get();
    return 0;
}