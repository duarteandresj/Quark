#include <iostream>
using namespace std;
int main()
{
    cout << "CONSIGNAS" << endl;
    cout << "Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos." << endl;
    double num1, num2, num3;
    cout << "Ingresar primer numero: ";
    cin >> num1;
    cout << "Ingresar segundo numero: ";
    cin >> num2;
    cout << "Ingresar tercer numero: ";
    cin >> num3;
    if (num1 >= num2 && num1 >= num3)
    {
        cout << "El numero mas grande es: ";
        cout << num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        cout << "El numero mas grande es: ";
        cout << num2;
    }
    else
    {
        cout << "El numero mas grande es: ";
        cout << num3;
    }
    cin.get();
    cin.get();
    cout << "Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el número es positivo, negativo o nulo (es decir cero)" << endl;
    double numero;
    cout << "Ingrese el numero: ";
    cin >> numero;
    if (numero > 0)
    {
        cout << "El numero es Positivo";
    }
    else if (numero < 0)
    {
        cout << "El numero es Negativo";
    }
    else
    {
        cout << "El numero es Nulo ";
    }
    cin.get();
    cin.get();
    cout << "Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras y muestre un mensaje indicando si tiene 1, 2, o 3 cifras. Mostrar un mensaje de error si el número de cifras es mayor." << endl;
    int numero1;
    cout << "Ingrese el numero a evaluar: ";
    cin >> numero1;
    if (numero1 >= 0)
    {
        if (numero1 >= 100 && numero < 1000)
        {
            cout << "El numero tiene 3 cifras";
        }
        else if (numero1 >= 10 && numero < 100)
        {
            cout << "El numero tiene 2 cifras";
        }
        else if (numero < 10)
        {
            cout << "El numero tiene una sola cifra";
        }
        else
        {
            cout << "El numero tiene mas de 3 cifras";
        }
    }
    else
    {
        cout << "El numero es negativo y no podra ser evaluado";
    }
    cin.get();
    cin.get();
    cout << "Un postulante a un empleo, realiza un test de capacitación, se obtuvo la siguiente información : cantidad total de preguntas que se le realizaron y la cantidad de preguntas que contestó correctamente.Se pide confeccionar un programa que ingrese los dos datos por teclado e informe el nivel del mismo según el porcentaje de respuestas correctas que ha obtenido, y sabiendo que : \nNivel máximo : Porcentaje >= 90 %.\nNivel medio : Porcentaje >= 75 % y < 90 %.\nNivel regular : Porcentaje >= 50 % y < 75 %.\nFuera de nivel : Porcentaje < 50 %." << endl;
    int preguntas, respuestas;
    cout << "Cantidad de preguntas realizadas: ";
    cin >> preguntas;
    cout << "Cantidad de respuestas correctas: ";
    cin >> respuestas;
    double porcentaje = respuestas / preguntas;

    if (porcentaje >= 0.90)
    {
        cout << "Nivel Maximo";
    }
    else if (0.90 > porcentaje >= 0.75)
    {
        cout << "Nivel Medio";
    }
    else if (0.75 > porcentaje >= 0.50)
    {
        cout << "Nivel Regular";
    }
    else
    {
        cout << "Fuera de nivel";
    }
    cin.get();
    cin.get();
    return 0;
}