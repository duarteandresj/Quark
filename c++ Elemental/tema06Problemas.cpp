#include <iostream>
using namespace std;
int main()
{
    cout << "PROBLEMAS PROPUESTOS DE CONDICIONALES" << endl;
    cout << "Realizar un programa que solicite la carga por teclado de dos números, si el primero es mayor al segundo informar su suma y diferencia, en caso contrario informar el producto y la división del primero respecto al segundo" << endl;
    double num1, num2, suma, resta, producto, division;
    cout << "Ingresar primer numero: ";
    cin >> num1;
    cout << "Ingresar segundo numero: ";
    cin >> num2;
    if (num1 > num2)
    {
        suma = num1 + num2;
        resta = num1 - num2;
        cout << "La suma es: ";
        cout << suma;
        cout << "\nLa resta es: ";
        cout << resta << endl;
    }
    else
    {
        producto = num1 * num2;
        cout << "El producto es: ";
        cout << producto;
        if (num2 != 0)
        {
            division = num1 / num2;
            cout << "\nLa division es: ";
            cout << division;
        }
        else
        {
            cout << "Error: no se puede dividir por 0(cero)";
        }
    }
    cin.get();
    cin.get();

    cout <<"Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete mostrar un mensaje 'Promocionado'." << endl;
    double nota1, nota2, nota3, promedio;
    cout << "Ingresar primer nota: ";
    cin >> nota1;
    cout << "Ingresar primer nota: ";
    cin >> nota2;
    cout << "Ingresar primer nota: ";
    cin >> nota3;
    promedio = (nota1 + nota2 + nota3) / 3;
    if (promedio >= 7)
    {
        cout << "Felicitaciones, llego a una nota de 'Promocion'";
    }
    else if (promedio >= 4)
    {
        cout << "Usted ha 'Aprobado'";
    }
    else
    {
        cout << "Usted no cumplio con las condiciones de aprobacion";
    }
    cin.get();
    cin.get();
    cout <<"Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) mostrar un mensaje indicando si el número tiene uno o dos dígitos." << endl;
    int numero, digitos;
    cout << "ingrese un numero entre 1 y 99 inclusive: ";
    cin >> numero;
    digitos=numero/10;

    if (1 <= numero<= 99)
    {
        if (digitos >= 1)
        {
            cout << "El numero tiene dos digitos";
        }
        else
        {
            cout << "El numero tiene un solo digito";
        }
    }
    else
    {
        cout << "El numero ingresado no cumplio con las condiciones iniciales";
    }
    cin.get();
    cin.get();
    return 0;
}