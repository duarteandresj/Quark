#include <iostream>
using namespace std;
int main()
{
    cout << "CONSIGNAS" << endl;
    cout << "Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha corresponde a Navidad." << endl;
    int dia, mes, anio;
    cout << "Ingresar dia: ";
    cin >> dia;
    cout << "Ingresar mes: ";
    cin >> mes;
    cout << "Ingresar año: ";
    cin >> anio;
    if (dia == 25 && mes == 12)
    {
        cout << "La fecha ingresada corresponde a navidad";
    }
    else
    {
        cout << "La fecha no corresponde a navidad";
    }
    cin.get();
    cin.get();

    cout << "Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del primero con el segundo y a este resultado se lo multiplica por el tercero." << endl;
    int num1, num2, num3;
    cout << "Ingrese el primer valor: ";
    cin >> num1;
    cout << "Ingrese el segundo valor: ";
    cin >> num2;
    cout << "Ingrese el tercer valor: ";
    cin >> num3;
    if (num1 == num2 && num2 == num3)
    {
        cout << (num1 + num2) * num3;
    }
    else
    {
        cout << "Los numeros no eran iguales";
    }
    cin.get();
    cin.get();

    cout << "Se ingresan por teclado tres números, si todos los valores ingresados son menores a 10, imprimir en pantalla la leyenda 'Todos los números son menores a diez'." << endl;
    int nume1, nume2, nume3;
    cout << "Ingrese el primer numero: ";
    cin >> nume1;
    cout << "Ingrese el segundo numero: ";
    cin >> nume2;
    cout << "Ingrese el tercer numero: ";
    cin >> nume3;
    if (nume1 < 10 && nume2 < 10 && nume3 < 10)
    {
        cout << "Todos los numeros son menores a diez";
    }
    else
    {
        cout << "Algun numero no era menor a diez";
    }
    cin.get();
    cin.get();

    cout << "Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10, imprimir en pantalla la leyenda 'Alguno de los números es menor a diez'." << endl;
    int numer1, numer2, numer3;
    cout << "Ingrese el primer numero: ";
    cin >> numer1;
    cout << "Ingrese el segundo numero: ";
    cin >> numer2;
    cout << "Ingrese el tercer numero: ";
    cin >> numer3;
    if (numer1 < 10 || numer2 < 10 || numer3 < 10)
    {
        cout << "Algun numero es menor a diez";
    }
    else
    {
        cout << "Ningun numero era menor a diez";
    }
    cin.get();
    cin.get();

    cout << "Escribir un programa que pida ingresar la coordenada de un punto en el plano, es decir dos valores enteros x e y (distintos a cero).\nPosteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. (1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.)" << endl;
    int pX, pY;
    cout << "Ingrese la coordenada en x: ";
    cin >> pX;
    cout << "Ingrese la coordenada en y: ";
    cin >> pY;
    if (pX != 0 && pY != 0)
    {
        if (pX > 0)
        {
            if (pY > 0)
            {
                cout << "1° Cuadrante";
            }
            else
            {
                cout << "4° Cuadrante";
            }
        }
        else
        {
            if (pY > 0)
            {
                cout << "2° Cuadrante";
            }
            else
            {
                cout << "3° Cuadrante";
            }
        }
    }
    else
    {
        cout << "Alguna de las coordenadas era 0";
    }
    cin.get();
    cin.get();

    cout << "De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa que lea los datos de entrada e informe:\na) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento del 20 %, mostrar el sueldo a pagar.\nb)Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.\nc) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios." << endl;
    double sueldo;
    int antiguedad;
    cout << "Ingrese el sueldo del operario: ";
    cin >> sueldo;
    cout << "Ingrese la antiguedad del operario: ";
    cin >> antiguedad;
    if (sueldo < 500 && antiguedad >= 10)
    {
        sueldo = sueldo * 1.2;
        cout << sueldo;
    }
    else if (sueldo < 500 && antiguedad < 10)
    {
        sueldo = sueldo * 1.05;
        cout << sueldo;
    }
    else
    {
        cout << "El sueldo es mayor o igual a 500\n";
        cout << sueldo;
    }
    cin.get();
    cin.get();

    cout << "Escribir un programa en el cual: dada una lista de tres valores numéricos distintos se calcule e informe su rango de variación dar menor y mayor " << endl;
    int val1, val2, val3, menorValor, mayorValor;
    cout << "Ingrese el primer valor: ";
    cin >> val1;
    cout << "Ingrese el segundo valor: ";
    cin >> val2;
    cout << "Ingrese el tercer valor: ";
    cin >> val3;
    if (val1 < val2 && val1 < val3)
    {
        menorValor = val1;
    }
    else if (val2 < val3)
    {
        menorValor = val2;
    }
    else
    {
        menorValor = val3;
    }
    if (val1 > val2 && val1 > val3)
    {
        mayorValor = val1;
    }
    else if (val2 > val3)
    {
        mayorValor = val2;
    }
    else
    {
        mayorValor = val3;
    }

    cout << "El rango de valores es: (";
    cout << menorValor;
    cout << "-";
    cout << mayorValor;
    cout << ")";
}