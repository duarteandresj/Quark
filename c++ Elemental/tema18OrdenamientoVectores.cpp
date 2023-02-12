#include <iostream>
#include <string.h>
using namespace std;
// Se debe crear un vector donde almacenar 5 sueldos. Ordenar el vector sueldos de menor a mayor.
class Vector
{
private:
    double sueldos[5];

public:
    void cargar();
    void ordenar();
    void imprimir();
};
void Vector::cargar()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese sueldo: ";
        cin >> sueldos[i];
        cin.get();
    }
}
void Vector::ordenar()
{
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4 - j; i++)
        {
            double aux;
            if (sueldos[i] > sueldos[i + 1])
            {
                aux = sueldos[i + 1];
                sueldos[i + 1] = sueldos[i];
                sueldos[i] = aux;
            }
        }
    }
}

void Vector::imprimir()
{
    cout << "El vector ordenado queda de la siguiente forma: " << endl;
    for (int i = 0; i < 5; i++)
    {
        if (i != 4)
        {
            cout << sueldos[i];
            cout << "-";
        }
        else
        {
            cout << sueldos[i];
        }
    }
}
// Definir un vector donde almacenar los nombres de 5 países. Confeccionar el algoritmo de ordenamiento alfabético.
class Paises
{
private:
    char nombres[5][30];

public:
    void cargar();
    void ordenar();
    void imprimir();
};
void Paises::cargar()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese nombre del pais: ";
        cin.getline(nombres[i], 30);
    }
}
/*if (strcmp(cad1,cad2)>0)
{
    cout <<cad1;
    cout <<" es mayor alfabéticamente que ";
    cout <<cad2;
}*/
void Paises::ordenar()
{
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4-j; i++)
        {
            if (strcmp(nombres[i], nombres[i + 1]) > 0)
            {
                char aux[30];
                strcpy_s(aux, 30, nombres[i + 1]);
                strcpy_s(nombres[i+1], 30, nombres[i]);
                strcpy_s(nombres[i], 30, aux);
            }
        }
    }
}
void Paises::imprimir(){
    cout<<"Los paises ordenados alfabeticamente quedan: "<<endl;
    for (int i = 0; i < 5; i++)
    {if (i!=4)
    {
        cout<<nombres[i];
        cout<<"-";
    }else{
        cout<<nombres[i];
    }
    }
    
}

int main()
{
    cout << "Se debe crear un vector donde almacenar 5 sueldos. Ordenar el vector sueldos de menor a mayor.\n"
         << endl;
    Vector array;
    array.cargar();
    cout << "\n";
    array.ordenar();
    array.imprimir();
    cin.get();
    cin.get();
    cout<<"Definir un vector donde almacenar los nombres de 5 países. Confeccionar el algoritmo de ordenamiento alfabético.\n";
    Paises latam;
    latam.cargar();
    cout<<"\n";
    latam.ordenar();
    latam.imprimir();
    cin.get();
    cin.get();
    return 0;
}