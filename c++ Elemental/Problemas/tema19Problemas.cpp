/*Cargar en un vector los nombres de 5 países y en otro vector paralelo la cantidad de habitantes del mismo. Ordenar alfabéticamente e imprimir los resultados. Por último ordenar con respecto a la cantidad de habitantes (de mayor a menor) e imprimir nuevamente.*/
#include <iostream>
#include <string.h>
using namespace std;
class Paises
{
private:
    char nombres[5][25];
    int habitantes[5];

public:
    void cargar();
    void ordenarPorNombre();
    void ordenarPorHabitantes();
    void imprimir();
};
void Paises::cargar()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese el nombre del pais: ";
        cin.getline(nombres[i], 25);
        cout << "Ingrese cantidad de habitantes: ";
        cin >> habitantes[i];
        cin.get();
    }
}
/*int strcmp(cadena1,cadena2)
       Retorna 0 si las dos cadenas son exactamente iguales
       mayor a cero si cadena1 es mayor alfabéticamente que cadena2
       menor a cero en caso contrario.
*/
void Paises::ordenarPorNombre()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (strcmp(nombres[j], nombres[j + 1]) < 0)
            {
                char auxNombre[25];
                strcpy_s(auxNombre, 25, nombres[j + 1]);
                strcpy_s(nombres[j + 1], 25, nombres[j]);
                strcpy_s(nombres[j], 25, auxNombre);
                int auxHab;
                auxHab = habitantes[j + 1];
                habitantes[j + 1] = habitantes[j];
                habitantes[j] = auxHab;
            }
        }
    }
}

void Paises::ordenarPorHabitantes()
{
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (habitantes[j]<habitantes[j+1])
            {
                char auxNombre[25];
                strcpy_s(auxNombre, 25, nombres[j + 1]);
                strcpy_s(nombres[j + 1], 25, nombres[j]);
                strcpy_s(nombres[j], 25, auxNombre);
                int auxHab;
                auxHab = habitantes[j + 1];
                habitantes[j + 1] = habitantes[j];
                habitantes[j] = auxHab;
            }
        }
    }
}

void Paises::imprimir(){
    for (int i = 0; i < 5; i++)
    {
        cout<<"Pais: "<<nombres[i]<<"\t\t"<<"Habitantes: "<<habitantes[i]<<endl;
    }
cin.get();    
}

int main(){
    cout<<"Cargar en un vector los nombres de 5 países y en otro vector paralelo la cantidad de habitantes del mismo. Ordenar alfabéticamente e imprimir los resultados. Por último ordenar con respecto a la cantidad de habitantes (de mayor a menor) e imprimir nuevamente.\n"<<endl;
Paises paises;
paises.cargar();
cout<<"\n Paises sin ningun ordenamiento: \n"<<endl;
paises.imprimir();
cout<<"Paises ordenados por nombre: \n"<<endl;
paises.ordenarPorNombre();paises.imprimir();
cout<<"Paises ordenados por habitantes: \n"<<endl;
paises.ordenarPorHabitantes();paises.imprimir();
cin.get();
    return 0;
}