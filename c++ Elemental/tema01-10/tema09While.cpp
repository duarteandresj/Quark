#include <iostream>
using namespace std;
int main()
{
    cout << "Realizar un programa que imprima en pantalla los números del 1 al 100." << endl;
    int x = 1;
    while (x <= 100)
    {
        cout << x;
        cout << "-";
        x += 1;
    }
    cin.get();
    cin.get();
    cout << "Escribir un programa que solicite la carga de un valor positivo y nos muestre desde 1 hasta el valor ingresado de uno en uno." << endl;
    int limite;
    cout << "Ingrese el numero: ";
    cin >> limite;
    int y = 1;
    while (y <= limite)
    {
        cout << y;
        cout << "-";
        y += 1;
    }
    cin.get();
    cin.get();
    cout << "Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente la suma de los valores ingresados y su promedio." << endl;
    int suma = 0, n = 0;
    double promedio;
    while (n < 10)
    {
        cout << "Ingrese valor: ";
        int valor;
        cin >> valor;
        suma += valor;
        n += 1;
    }
    cout << "El resultado de la suma es: ";
    cout << suma << endl;
    promedio = suma / 10;
    cout << "El promedio es: ";
    cout << promedio << endl;
    cin.get();
    cin.get();

    cout << "Una planta que fabrica perfiles de hierro posee un lote de n piezas.\nConfeccionar un programa que pida ingresar por teclado la cantidad de piezas a procesar y luego ingrese la longitud de cada perfil; sabiendo que la pieza cuya longitud esté comprendida en el rango de 1.20 y 1.30 son aptas. Imprimir por pantalla la cantidad de piezas aptas que hay en el lote" << endl;
    int nPiezas, piezaApta = 0;
    double longitud;
    cout << "Ingrese cantidad de piezas: ";
    cin >> nPiezas;
    int cont = 1;
    while (cont <= nPiezas)
    {
        cout << "Ingrese el largo de cada pieza en m(x.x): ";
        cin >> longitud;
        if (longitud >= 1.2 && longitud <= 1.3)
        {
            piezaApta += 1;
        }
        cont+=1;
    }

    cout << "La cantidad de piezas aptas son: ";
    cout << piezaApta << endl;
    cin.get();
    cin.get();

    return 0;
}