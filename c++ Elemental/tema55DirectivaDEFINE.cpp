/*
La directiva #define especifica un nombre que será reemplazado por un cierto valor en todos los lugares del programa donde se haga referencia.

#define [nombre de la macro]  [valor de la macro]

#define TAMANO 20
#define MENSAJEFIN “Presione una tecla para finalizar”

El nombre de la macro es común que se la escriba con caracteres mayúsculas

El uso excesivo de macros puede tornar muy difícil el mantenimiento de programas.
*/

// Definir tres macros y utilizarlas en distintas partes del programa.

#include <iostream>
#define TAMANO 5
#define MENSAJEFIN "Presione una tecla para finalizar.\n"
#define DETENER \
    cin.get();  \
    cin.get();

using namespace std;
// Plantear una clase para administrar una matriz de enteros de 4 filas y 2 columnas. Definir dos macros para indicar la cantidad de filas y columnas.
#define FILAS 4
#define COLUMNAS 2
class Matriz
{
private:
    int matriz[FILAS][COLUMNAS];
    void imprimir();

public:
    Matriz()
    {
        cout << "Ingrese componentes de matriz: " << endl;
        for (int i = 0; i < FILAS; i++)
        {
            for (int j = 0; j < COLUMNAS; j++)
            {
                cin >> matriz[i][j];
            }
            cin.get();
        }
        imprimir();
    };
};
void Matriz::imprimir()
{
    cout << "\n MAtriz" << endl;
    for (int i = 0; i < FILAS; i++)
    {
        for (int c = 0; c < COLUMNAS; c++)
        {
            cout << matriz[i][c] << "\t";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int vec[TAMANO];
    for (int i = 0; i < TAMANO; i++)
    {
        cout << "Ingrese elemento: ";
        cin >> vec[i];
    }
    for (int i = 0; i < TAMANO; i++)
    {
        cout << vec[i] << "\t";
    }
    cout << "\n";
    DETENER;

    Matriz ma;
    cout << MENSAJEFIN;
    DETENER;
    return 0;
}
