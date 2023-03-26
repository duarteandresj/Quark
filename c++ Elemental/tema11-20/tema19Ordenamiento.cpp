#include <iostream>
#include <string.h>
using namespace std;
/*Confeccionar un programa que permita cargar los nombres de 5 alumnos y sus notas respectivas. Luego ordenar las notas de mayor a menor. Imprimir las notas y los nombres de los alumnos.*/
class Alumnos
{
private:
    char nombres[5][30];
    int notas[5];

public:
    void cargar();
    void ordenarPorNota();
    void imprimir();
};

void Alumnos::cargar()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese nombre de alumno: ";
        cin.getline(nombres[i], 40);
        cout << "Ingrese nota: ";
        cin >> notas[i];
        cin.get();
    }
}

void Alumnos::ordenarPorNota()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (notas[j] < notas[j + 1])
            {
                int auxNota;
                auxNota = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = auxNota;
                char auxNombre[30];
                strcpy_s(auxNombre, 30, nombres[j]);
                strcpy_s(nombres[j], 30, nombres[j + 1]);
                strcpy_s(nombres[j + 1], 30, auxNombre);
            }
        }
    }
}

void Alumnos::imprimir()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Alumno: " << nombres[i] << "        "
             << "Nota: " << notas[i] << endl;
    }
    cin.get();
}

int main()
{
    cout << "Confeccionar un programa que permita cargar los nombres de 5 alumnos y sus notas respectivas. Luego ordenar las notas de mayor a menor. Imprimir las notas y los nombres de los alumnos." << endl;
    Alumnos notasAlumnos;
    notasAlumnos.cargar();
    cout << "\nIMPRESION SIN ORDENAR"
         << "\n"
         << endl;
    notasAlumnos.imprimir();
    notasAlumnos.ordenarPorNota();
    cout << "\nIMPRESION ORDENAda"
         << "\n"
         << endl;
    notasAlumnos.imprimir();
    return 0;
}