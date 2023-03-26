#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    cout << "Confeccionar un programa que defina dos vectores de caracteres con los nombres de meses de 'enero' y 'febrero'.\nMostrar luego por pantalla los dos vectores" << endl;
    char mes1[10] = "Enero";
    char mes2[10] = "Febrero";
    cout << mes1 << endl;
    cout << mes2 << endl;
    cin.get();
    cout << "Confeccionar un programa que defina una cadena de caracteres para almacenar el nombre y apellido de una persona.\nLa carga del dato hacerla por teclado." << endl;
    char nombre[30];
    cout << "Ingrese su nombre y apellido: " << endl;
    cin.getline(nombre, 30);
    cout << "Un gusto saludarle ";
    cout << nombre;
    cin.get();

    cout << "Confeccionar un programa que permita ingresar dos cadenas de caracteres por teclado y luego mostrar un mensaje indicando si: 'son iguales', 'la primer cadena ingresada es mayor alfabéticamente' o 'la segunda cadena ingresada es mayor alfabéticamente'." << endl;
    char cadena1[30];
    char cadena2[30];
    cout << "Ingrese primer cadena: " << endl;
    cin.getline(cadena1, 30);
    cout << "Ingrese segunda cadena: " << endl;
    cin.getline(cadena2, 30);
    int comparador = strcmp(cadena1, cadena2);
    /*int strcmp(cadena1,cadena2)
        Retorna 0 si las dos cadenas son exactamente iguales
        mayor a cero si cadena1 es mayor alfabéticamente que cadena2
        menor a cero en caso contrario.
*/
    if (comparador == 0)
    {
        cout << "Las cadenas son iguales" << endl;
    }
    else if (comparador > 0)
    {
        cout << "La primer cadena ingresada es mayor alfabéticamente" << endl;
    }
    else
    {
        cout << "La segunda cadena ingresada es mayor alfabéticamente" << endl;
    }
}