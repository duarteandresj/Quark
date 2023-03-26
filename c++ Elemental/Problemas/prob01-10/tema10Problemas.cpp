#include <iostream>
using namespace std;
int main()
{
    cout << "CONSIGNAS:" << endl;
    cout << "Confeccionar un programa que lea n pares de datos, cada par de datos corresponde a la medida de la base y la altura de un triángulo. El programa deberá informar:\na) De cada triángulo la medida de su base, su altura y su superficie.\nb) La cantidad de triángulos cuya superficie es mayor a 12." << endl;
    int cantidadDatos, base, altura, supMayor = 0;
    double area;
    cout << "Cantidad de triangulos a ingresar: ";
    cin >> cantidadDatos;
    for (int i = 1; i <= cantidadDatos; i++)
    {
        cout << "Ingrese par de datos: ";
        cin >> base;
        cin >> altura;
        area = (double)base * altura / 2;
        cout << "Triangulo ";
        cout << i << endl;
        cout << "Base: ";
        cout << base;
        cout << ", Altura: ";
        cout << altura << endl;
        cout << "Superficie: ";
        cout << area;
        cout << "\n \n";
        if (area > 12)
        {
            supMayor++;
        }
    }
    cout << "Cantidad de triangulos con superficie mayor a 12: ";
    cout << supMayor << endl;
    cin.get();
    cin.get();
    cout << "Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados." << endl;
    int sum5Ultimos = 0, valorIngresado;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Ingrese un valor: ";
        cin >> valorIngresado;
        if (i > 5)
        {
            sum5Ultimos += valorIngresado;
        }
    }
    cout << "La suma de los ultimos 5 es: ";
    cout << sum5Ultimos << endl;
    cin.get();
    cin.get();
    cout << "Desarrollar un programa que muestre la tabla de multiplicar del 5 (del 5 al 50)" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i * 5;
        cout << "-";
    }
    cin.get();
    cin.get();
    cout << "Confeccionar un programa que permita ingresar un valor del 1 al 10 y nos muestre la tabla de multiplicar del mismo (los primeros 12 términos)" << endl;
    int tabla;
    cout << "Ingrese la tabla de que valor necesita: ";
    cin >> tabla;
    if (tabla < 1 || tabla > 10)
    {
        cout << "Ingrese la tabla de que valor necesita: ";
        cin >> tabla;
    }
    else
    {
        for (int i = 1; i <= 12; i++)
        {
            cout << i * tabla;
            cout << "-";
        }
    }
    cin.get();
    cin.get();
    cout << "Realizar un programa que lea los lados de n triángulos, e informar:\na) De cada uno de ellos, qué tipo de triángulo es: equilátero (tres lados iguales), isósceles (dos lados iguales), o escaleno (ningún lado igual)\nb) Cantidad de triángulos de cada tipo.\nc) Tipo de triángulo que posee menor cantidad." << endl;
    int cantidad, ladoA, ladoB, ladoC, equilatero = 0, isosceles = 0, escaleno = 0;
    cout << "Ingrese cantidad de triangulos a procesar: ";
    cin >> cantidad;
    for (int i = 1; i <= cantidad; i++)
    {
        cout << "Ingrese los lados del triangulos: " << endl;
        cin >> ladoA;
        cin >> ladoB;
        cin >> ladoC;
        if (ladoA == ladoB && ladoA == ladoC)
        {
            cout << "Es un triangulo equilatero" << endl;
            equilatero++;
        }
        else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC)
        {
            cout << "Es un triangulo isosceles" << endl;
            isosceles++;
        }
        else
        {
            cout << "Es un triangulo escaleno" << endl;
            escaleno++;
        }
    }
    cout << "CANTIDAD DE TRIANGULOS: " << endl;
    cout << "Equilateros: ";
    cout << equilatero << endl;
    cout << "Isosceles: ";
    cout << isosceles << endl;
    cout << "Escalenos: ";
    cout << escaleno << endl;
    cout << "Hay menor cantidad de triangulos: ";
    if (equilatero == isosceles && equilatero == escaleno)
    {
        cout << "hay la misma cantidad";
    }
    else if (equilatero < isosceles && equilatero < escaleno)
    {
        cout << "Equilateros" << endl;
    }
    else if (isosceles < escaleno)
    {
        cout << "Isosceles" << endl;
    }
    else
    {
        cout << "Escalenos" << endl;
    }
    cin.get();
    cin.get();

    cout << "Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano.\nInformar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante. Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar." << endl;
    int cantidadPuntos, cX, cY, primerCuadrante = 0, segundoCuadrante = 0, tercerCuadrante = 0, cuartoCuadrante = 0, enElEje = 0;
    cout << "Ingresar puntos a procesar: ";
    cin >> cantidadPuntos;
    for (int i = 1; i <= cantidadPuntos; i++)
    {
        cout << "Ingrese coordenada en X: ";
        cin >> cX;
        cout << "Ingrese coordenada en Y: ";
        cin >> cY;
        if (cX == 0 || cY == 0)
        {
            enElEje++;
        }
        else if (cX > 0)
        {
            if (cY > 0)
            {
                primerCuadrante++;
            }
            else
            {
                cuartoCuadrante++;
            }
        }
        else
        {
            if (cY > 0)
            {
                segundoCuadrante++;
            }
            else
            {
                cuartoCuadrante++;
            }
        }
    }
    cout << "Puntos en algun eje: ";
    cout << enElEje << endl;
    cout << "Puntos en Primer cuadrante: ";
    cout << primerCuadrante << endl;
    cout << "Puntos en Segundo cuadrante: ";
    cout << segundoCuadrante << endl;
    cout << "Puntos en Tercer cuadrante: ";
    cout << tercerCuadrante << endl;
    cout << "Puntos en Cuarto cuadrante: ";
    cout << cuartoCuadrante << endl;

    cout << "Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:\na) La cantidad de valores ingresados negativos.\nb) La cantidad de valores ingresados positivos.\nc) La cantidad de múltiplos de 15.\nd) El valor acumulado de los números ingresados que son pares." << endl;
    int valor, valNeg = 0, valPos = 0, mult15 = 0, acumuladoPares = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Ingrese valor: ";
        cin >> valor;
        if (valor >= 0)
        {
            valPos++;
        }
        else
        {
            valNeg++;
        }
        if (valor!=0&&valor % 15 == 0)
        {
            mult15++;
        }
        if (valor!=0&&valor % 2 == 0)
        {
            acumuladoPares += valor;
        }
    }
    cout << "Cantidad de valores negativos: ";
    cout << valNeg << endl;
    cout << "Cantidad de valores positivos: ";
    cout << valPos << endl;
    cout << "Cantidad de valores multiplos de 15: ";
    cout << mult15 << endl;
    cout << "Valor acumulado de numeros pares: ";
    cout << acumuladoPares << endl;
    cin.get();
    cin.get();

    cout << "Se cuenta con la siguiente información:\nLas edades de 5 estudiantes del turno mañana.\nLas edades de 6 estudiantes del turno tarde.\nLas edades de 11 estudiantes del turno noche.\nLas edades de cada estudiante deben ingresarse por teclado.\na) Obtener el promedio de las edades de cada turno (tres promedios)\nb) Imprimir dichos promedios (promedio de cada turno)\nc) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades mayor." << endl;
    int edad, sumaEdad = 0;
    double promedioTM, promedioTT, promedioTN;
    // TM
    cout << "Ingrese las edades de los estudiantes del TM" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> edad;
        sumaEdad += edad;
    }
    promedioTM = (double)sumaEdad / 5;
    sumaEdad = 0;
    // TT
    cout << "Ingrese las edades de los estudiantes del TT" << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> edad;
        sumaEdad += edad;
    }
    promedioTT = (double)sumaEdad / 6;
    sumaEdad = 0;
    // TN
    cout << "Ingrese las edades de los estudiantes del TN" << endl;
    for (int i = 0; i < 11; i++)
    {
        cin >> edad;
        sumaEdad += edad;
    }
    promedioTN = (double)sumaEdad / 11;
    cout << "El promedio de edades de cada turno es:" << endl;
    cout << "Promedio de TM: ";
    cout << promedioTM << endl;
    cout << "Promedio de TT: ";
    cout << promedioTT << endl;
    cout << "Promedio de TN: ";
    cout << promedioTN << endl;

    cout << "El turno con mayor promedio de edad es: ";
    if (promedioTM > promedioTN && promedioTM > promedioTT)
    {
        cout << "Turno Mañana";
    }
    else if (promedioTN > promedioTT)
    {
        cout << "Turno Noche";
    }
    else
    {
        cout << "Turno Tarde";
    }

    cin.get();
    cin.get();

    return 0;
}