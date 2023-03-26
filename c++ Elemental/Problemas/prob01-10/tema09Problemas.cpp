#include <iostream>
using namespace std;
int main()
{
    cout << "Escribir un programa que solicite ingresar 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores." << endl;
    int x = 0, notaMayorA7 = 0, notaMenorA7 = 0, nota;
    while (x < 10)
    {
        cout << "Ingrese nota: ";
        cin >> nota;
        if (nota >= 7)
        {
            notaMayorA7++;
        }
        else
        {
            notaMenorA7++;
        }
        x++;
    }
    cout << "Hay ";
    cout << notaMayorA7;
    cout << " notas mayores o iguales a 7" << endl;
    cout << "Hay ";
    cout << notaMenorA7;
    cout << " notas menores a 7" << endl;
    cin.get();
    cin.get();

    cout << "Se ingresan un conjunto de n alturas de personas por teclado. Mostrar la altura promedio de las personas." << endl;
    double alt, promedio, alturaAcum = 0;
    int n, y = 0;
    cout << "Cantidad de personas a evaluar: ";
    cin >> n;
    while (y < n)
    {
        cout << "Ingrese alturas en metros: ";
        cin >> alt;
        alturaAcum += alt;
        y++;
    }
    promedio = alturaAcum / n;
    cout << "El promedio de las alturas es: ";
    cout << promedio;
    cin.get();
    cin.get();

    cout << "En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, realizar un programa que lea los sueldos que cobra cada empleado e informe cuántos empleados cobran entre $100 y $300 y cuántos cobran más de $300. Además el programa deberá informar el importe que gasta la empresa en sueldos al personal." << endl;
    int cantidadEmpleados, bajo = 0, alto = 0;
    x = 0;
    double sueldosAcum = 0, sueldo;
    cout << "Ingrese la cantidad de empleados: ";
    cin >> cantidadEmpleados;
    while (x < cantidadEmpleados)
    {
        cout << "Ingrese sueldo de empleado: ";
        cin >> sueldo;
        if (sueldo >= 100 && sueldo < 300)
        {
            bajo++;
        }
        else if (sueldo >= 300)
        {
            alto++;
        }
        else
        {
            cout << "Sueldo menor a 100" << endl;
            bajo++;
        }
        sueldosAcum += sueldo;
        x++;
    }
    cout << "Los empleados que cobran menos de 300 son: ";
    cout << bajo << endl;
    cout << "Los empleados que cobran 300 o mas son: ";
    cout << alto << endl;
    cout << "La empresa gasta en sueldos: ";
    cout << sueldosAcum << endl;
    cin.get();
    cin.get();

    cout << "Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado)" << endl;
    int count = 0;
    while (count < 25)
    {
        count++;
        cout << count;
        cout << count;
        cout << "-";
    }
    cin.get();
    cin.get();

    cout << "Mostrar los múltiplos de 8 hasta el valor 500. Debe aparecer en pantalla 8 - 16 - 24, etc." << endl;
    int z = 1, valor = 0;
    while (valor <= 500)
    {
        valor = 8 * z;
        if (valor <= 500)
        {
            cout << valor;
            cout << "-";
        }

        z++;
    }
    cin.get();
    cin.get();

    cout << "Realizar un programa que permita cargar dos listas de 15 valores cada una. Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor (mensajes 'Lista 1 mayor', 'Lista 2 mayor', 'Listas iguales')" << endl;
    int lista, acumLista1 = 0, acumLista2 = 0, m = 0;
    cout << "Ingres los 15 valores para la primer lista: \n";
    while (m < 15)
    {
        cin >> lista;
        acumLista1 += lista;
        m++;
    }
    cout << "Ingres los 15 valores para la segunda lista: \n";
    while (m >= 15 && m < 30)
    {
        cin >> lista;
        acumLista2 += lista;
        m++;
    }
    if (acumLista1 > acumLista2)
    {
        cout << "Lista 1 es mayor";
    }
    else if (acumLista1 < acumLista2)
    {
        cout << "Lista 2 es mayor";
    }
    else
    {
        cout << "Listas iguales";
    }
    cin.get();
    cin.get();
    cout << "Desarrollar un programa que permita cargar n números enteros y luego nos informe cuántos valores fueron pares y cuántos impares.\nEmplear el operador “%” en la condición de la estructura condicional (este operador retorna el resto de la división de dos valores, por ejemplo 11%2 retorna un 1):\nif (valor%2==0)" << endl;
    int w = 0, cant = 0, pares = 0, impares = 0, num1;
    cout << "Ingrese cantidad de numeros a ingresar: ";
    cin >> cant;
    while (w < cant)
    {
        cout << "Ingrese numeros: ";
        cin >> num1;
        if (num1 % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
        w++;
    }
    cout << "La cantidad de numeros pares fue: ";
    cout << pares << endl;
    cout << "La cantidad de numeros impares fue: ";
    cout << impares << endl;
    cin.get();
    cin.get();
    return 0;
}
