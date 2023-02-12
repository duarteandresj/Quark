#include <iostream>
using namespace std;
//Desarrollar un programa que permita cargar 5 nombres de personas y sus edades respectivas. Luego de realizar la carga por teclado de todos los datos imprimir los nombres de las personas mayores de edad (mayores o iguales a 18 años)
class Personas{
    private:
    char nombres[5][30];
    int edades[5];
    public:
    void cargar();
    void mayoresEdad();
};
void Personas::cargar(){
    for (int i = 0; i < 5; i++)
    {
        cout<<"Ingrese nombre: ";
        cin.getline(nombres[i],30);
        cout<<"Ingrese edad: ";
        cin>>edades[i];
        cin.get();
    }
}
void Personas::mayoresEdad(){
    cout<<"Personas mayores de edad: "<<endl;
    for (int i = 0; i <5; i++)
    {if (edades[i]>=18)
    {cout<<nombres[i]<<endl;
    }
    }
}

int main(){
    cout<<"Desarrollar un programa que permita cargar 5 nombres de personas y sus edades respectivas. Luego de realizar la carga por teclado de todos los datos imprimir los nombres de las personas mayores de edad (mayores o iguales a 18 años)"<<endl;
    Personas persona;
    persona.cargar();
    persona.mayoresEdad();
    cin.get();
    return 0;
}