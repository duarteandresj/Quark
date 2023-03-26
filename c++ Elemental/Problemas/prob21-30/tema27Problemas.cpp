/*Confeccionar una clase Persona que tenga como atributos el nombre y la edad. Definir como responsabilidades un método que cargue los datos personales y otro que los imprima.
Plantear una segunda clase Empleado que herede de la clase Persona. Añadir un atributo sueldo y los métodos de cargar el sueldo e imprimir su sueldo.
Definir un objeto de la clase Persona y llamar a sus métodos. También crear un objeto de la clase Empleado y llamar a sus métodos.*/
#include <iostream>
using namespace std;
class Persona
{
protected:
    char nombre[25];
    int edad;

public:
    void cargar(), imprimir();
};
void Persona::cargar()
{
    cout << "Ingrese nombre: ";
    cin.getline(nombre, 25);
    cout << "Ingrese edad: ";
    cin >> edad;
    cin.get();
}
void Persona::imprimir()
{
    cout << "Nombre: " << nombre << "\t\tEdad:" << edad << endl;
}
class Empleado : public Persona
{
    double sueldo;

public:
    void cargarSueldo();
    void imprimirSueldo();
};
void Empleado::cargarSueldo()
{
    cout << "Ingrese sueldo: ";
    cin >> sueldo;
    cin.get();
}
void Empleado::imprimirSueldo()
{
    cout << "Sueldo: " << sueldo << endl;
}

int main()
{
    cout << "Confeccionar una clase Persona que tenga como atributos el nombre y la edad. Definir como responsabilidades un método que cargue los datos personales y otro que los imprima.\nPlantear una segunda clase Empleado que herede de la clase Persona. Añadir un atributo sueldo y los métodos de cargar el sueldo e imprimir su sueldo.\nDefinir un objeto de la clase Persona y llamar a sus métodos. También crear un objeto de la clase Empleado y llamar a sus métodos." << endl;
    cout << "\nCarga de persona\n"
         << endl;
    Persona people;
    people.cargar();
    people.imprimir();
    cout << "\nCarga de empleado\n"
         << endl;
    Empleado operario;
    operario.cargar();
    operario.cargarSueldo();
    operario.imprimir();
    operario.imprimirSueldo();
    cin.get();
    cin.get();
    return 0;
}
