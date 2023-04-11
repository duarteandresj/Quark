/*Desarrollar una clase que permita cargar el nombre y la edad de una persona. Mostrar los datos cargados. Imprimir un mensaje si es mayor de edad (edad>=18) o no. Crear en la main un objeto dinámico de esta clase y llamar a sus métodos.*/
#include <iostream>
using namespace std;
class Persona
{
    string nombre;
    int edad;

public:
    Persona();
    void imprimir();
    void esMayor();
};
Persona::Persona()
{
    cout << "Ingrese nombre: ";
    cin >> nombre;
    cout << "ingrese edad: ";
    cin >> edad;
    cin.get();
}
void Persona::imprimir()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}
void Persona::esMayor()
{
    if (edad >= 18)
    {
        cout << "ES MAYOR DE EDAD" << endl;
    }
    else
    {
        cout << "ES menor DE EDAD" << endl;
    }
}
int main(int argc, char const *argv[])
{
    cout << "Desarrollar una clase que permita cargar el nombre y la edad de una persona. Mostrar los datos cargados. Imprimir un mensaje si es mayor de edad (edad>=18) o no. Crear en la main un objeto dinámico de esta clase y llamar a sus métodos.\n"
         << endl;
    Persona *persona1;      // aqui definimos el puntero
    persona1 = new Persona; // aqui es un objeto dinamico;
    persona1->imprimir();
    /*
      aqui se usa flecha porque sino se deberia poner (*persona1).nombreMetodo
      (*persona1).imprimir();==persona1->imprimir()
      */
    persona1->esMayor();
    delete persona1; // aqui lo borramos, liberamos espacio de la memoria
    return 0;
}
