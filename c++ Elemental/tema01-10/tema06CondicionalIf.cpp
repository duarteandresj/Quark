#include <iostream>
using namespace std;
int main()
{
    cout << "Ingresar el sueldo de una persona, si supera los 3000 pesos mostrar un mensaje en pantalla indicando que debe abonar impuestos." << endl;
    double sueldo;
    cout << "Ingrese sueldo: ";
    cin >> sueldo;
    if (sueldo > 3000)
    {
        cout << "Debe abonar impuestos" << endl;
    }
    cin.get();
    cin.get();
    double num1, num2;
    cout << "Realizar un programa que solicite ingresar dos números distintos y muestre por pantalla el mayor de ellos." << endl;
    cout << "Ingrese los dos numeros a continuacion: " << endl;
    cin >> num1;
    cin >> num2;
    if (num1 > num2)
    {
        cout << "El numero mayor es: ";
        cout << num1;
    }
    else
    {
        cout << "El numero mayor es: ";
        cout << num2;
    }
    cin.get();
    cin.get();
    return 0;
}