#include <iostream>
using namespace std;
int main()
{
    cout << "Realizar un programa que imprima en pantalla los números del 1 al 100." << endl;
    for (int i = 1; i <= 100; i++)
    {
        cout << i;
        cout << "-";
    }
    cin.get();
    cin.get();
    cout << "Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente la suma de los valores ingresados y su promedio. Este problema ya lo desarrollamos, lo resolveremos empleando la estructura for." << endl;
    int suma = 0, valor;
    double promedio = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Ingrese un valor: ";
        cin >> valor;
        suma += valor;
    }
    promedio = (double)suma / 10;
    cout << "La suma de los numeros es: ";
    cout << suma << endl;
    cout << "El promedio de los numeros es: ";
    cout << promedio << endl;
    cin.get();
    cin.get();
    cout << "Escribir un programa que lea 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores." << endl;
    int nota, mayorA7 = 0, menorA7 = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "ingrese las notas de los alumnos: ";
        cin >> nota;
        if (nota >= 7)
        {
            mayorA7++;
        }
        else
        {
            menorA7++;
        }
    }
    cout << "Notas con 7 o mas: ";
    cout << mayorA7 << endl;
    cout << "Notas menores a 7: ";
    cout << menorA7 << endl;
    cin.get();
    cin.get();

    cout << "Escribir un programa que lea 10 números enteros y luego muestre cuántos valores ingresados fueron múltiplos de 3 y cuántos de 5. Debemos tener en cuenta que hay números que son múltiplos de 3 y de 5 a la vez." << endl;
    int multi3 = 0, multi5 = 0, valor1;
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese valor: ";
        cin >> valor1;
        if (valor1 % 3 == 0 && valor1 % 5 == 0)
        {
            multi3++;
            multi5++;
        }
        else if (valor1 % 5 == 0)
        {
            multi5++;
        }
        else if (valor1 % 3 == 0)
        {
            multi3++;
        }
    }
    cout << "Multiplos de 3: ";
    cout << multi3 << endl;
    cout << "Multiplos de 5: ";
    cout << multi5 << endl;
    cin.get();
    cin.get();

    cout << "Escribir un programa que lea n números enteros y calcule la cantidad de valores mayores o iguales a 1000" << endl;
    int cantidad, valor2, mayores = 0;
    cout << "Cantidad de numeros a ingresar: ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese valor: ";
        cin >> valor2;
        if (valor2 >= 1000)
        {
            mayores++;
        }
    }
    cout << "La cantidad de valores iguales o mayores a 1000 fue: ";
    cout << mayores << endl;
    cin.get();
    cin.get();

    return 0;
}