#include <iostream>
using namespace std;
/*Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
El valor acumulado de todos los elementos del vector.
El valor acumulado de los elementos del vector que sean mayores a 36.
Cantidad de valores mayores a 50.*/
class Vector
{
private:
    int valores[8];

public:
    void cargar();
    void acumuladoTotal();
    void acumuladoMayorA(int v);
    void cuentaMayorA(int V);
};
void Vector::cargar()
{
    cout << "Ingrese los valores del vector: " << endl;
    for (int i = 0; i < 8; i++)
    {
        cin >> valores[i];
    }
}
void Vector::acumuladoTotal()
{
    cout << "El acumulado total es: ";
    int aux = 0;
    for (int i = 0; i < 8; i++)
    {
        aux += valores[i];
    }
    cout << aux << endl;
}
void Vector::acumuladoMayorA(int v)
{
    cout << "El acumulado mayor a ";
    cout << v;
    cout << " es: ";
    int aux = 0;
    for (int i = 0; i < 8; i++)
    {
        if (valores[i] > v)
        {
            aux += valores[i];
        }
    }
    cout << aux << endl;
}
/*Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño. Sumar componente a componente.*/
class VectorSuma
{
private:
    int vector1[4], vector2[4], vectorResultado[4];

public:
    void cargar();
    void sumaVectores();
};
void VectorSuma::cargar()
{
    cout << "Cargue los datos del primer vector: \n";
    for (int i = 0; i < 4; i++)
    {
        cin >> vector1[i];
    }
    cout << "Cargue los datos del segundo vector: \n";
    for (int i = 0; i < 4; i++)
    {
        cin >> vector2[i];
    }
}
void VectorSuma::sumaVectores()
{
    for (int i = 0; i < 4; i++)
    {
        vectorResultado[i] = vector1[i] + vector2[i];
    }
    cout << "El resultado de sumar el vector ";
    for (int i = 0; i < 4; i++)
    {
        cout << vector1[i];
        cout << " ";
    }

    cout << " y el vector ";
    for (int i = 0; i < 4; i++)
    {
        cout << vector2[i];
        cout << " ";
    }
    cout << " da como resultado: ";
    for (int i = 0; i < 4; i++)
    {
        cout << vectorResultado[i];
        cout << " ";
    }
    cout << " ." << endl;
}

void Vector::cuentaMayorA(int v)
{
    cout << "La cantidad de valores mayores a ";
    cout << v;
    cout << " es: ";
    int cuenta = 0;
    for (int i = 0; i < 8; i++)
    {
        if (valores[i] > v)
        {
            cuenta++;
        }
    }
    cout << cuenta << endl;
}
/*Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
Realizar un programa que muestre el curso que obtuvo el mayor promedio general.*/
class Curso
{
private:
    double notasA[5], notasB[5];

public:
    void cargar();
    void getPromedio();
};
void Curso::cargar()
{
    cout << "Cargar las notas del primer curso: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> notasA[i];
    }
    cout << "Cargar notas del segundo curso: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> notasB[i];
    }
}
void Curso::getPromedio()
{
    double promedioA, promedioB;
    int aux1 = 0, aux2 = 0;
    for (int i = 0; i < 5; i++)
    {
        aux1 += notasA[i];
        aux2 += notasB[i];
    }
    promedioA = aux1 / 5;
    promedioB = aux2 / 5;
    if (promedioA != promedioB)
    {
        cout << "El promedio mayor lo tiene ";
        if (promedioA > promedioB)
        {
            cout << "el curso A con: ";
            cout << promedioA << endl;
        }
        else
        {
            cout << "el curso B con: ";
            cout << promedioB << endl;
        }
    }
    else
    {
        cout << "Los cursos tienen el mismo promedio: ";
        cout << promedioA << endl;
    }
}

/* Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor.*/
class VectorLargo
{
private:
    int largo[10];

public:
    void cargar();
    void verificarOrden();
};
void VectorLargo::cargar()
{
    cout << "Ingrese los valores del vector: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> largo[i];
    }
}
void VectorLargo::verificarOrden()
{
    bool isOrdenado = true;
    int ant = largo[0];
    for (int i = 0; i < 10; i++)
    {
        if (ant <= largo[i])
        {
            ant = largo[i];
        }
        else
        {
            isOrdenado = false;
        }
    }
    if (isOrdenado){
        cout<<"El vector esta ordenado"<<endl;
    }else{
        cout<<"El vector NO esta ordenado"<<endl;
    }
}

int main()
{
    cout << "Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:\nEl valor acumulado de todos los elementos del vector.\nEl valor acumulado de los elementos del vector que sean mayores a 36.\nCantidad de valores mayores a 50." << endl;
    Vector array;
    array.cargar();
    array.acumuladoTotal();
    array.acumuladoMayorA(36);
    array.cuentaMayorA(50);
    cin.get();
    cin.get();
    cout << "Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño. Sumar componente a componente." << endl;
    VectorSuma suma;
    suma.cargar();
    suma.sumaVectores();
    cin.get();
    cin.get();
    cout<<"Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.Realizar un programa que muestre el curso que obtuvo el mayor promedio general"<<endl;
    Curso cursos;
    cursos.cargar();
    cursos.getPromedio();
    cin.get();
    cin.get();
    cout<<"Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor."<<endl;
    VectorLargo vectorcito;
    vectorcito.cargar();
    vectorcito.verificarOrden();
    cin.get();
    cin.get();
    
    return 0;

}