/*Plantear una clase Club y otra clase Socio.
La clase Socio debe tener los siguientes atributos privados: nombre y la antigüedad en el club (en años). En el constructor pedir la carga del nombre y su antigüedad. La clase Club debe tener como atributos 3 objetos de la clase Socio. Definir una responsabilidad para imprimir el nombre del socio con mayor antigüedad en el club.*/
#include <iostream>
using namespace std;
class Socio
{
    char nombre[25];
    int antiguedad;

public:
    Socio();
    void imprimir();
    int getAntiguedad();
};
class Club
{
    Socio socio1, socio2, socio3;

public:
    void masAntiguo();
};
Socio::Socio()
{
    cout << "Ingrese nombre del socio: ";
    cin.getline(nombre, 25);
    cout << "Ingrese antiguedad: ";
    cin >> antiguedad;
    cin.get();
}
void Socio::imprimir()
{
    cout << "Nombre: " << nombre << "\tAntiguedad: " << antiguedad << endl;
}
int Socio::getAntiguedad()
{
    return this->antiguedad;
}
void Club::masAntiguo()
{
    cout << "El socio con mayor antiguedad es: " << endl;
    if (socio1.getAntiguedad() > socio2.getAntiguedad() && socio1.getAntiguedad() > socio3.getAntiguedad())
    {
        socio1.imprimir();
    }
    else if (socio2.getAntiguedad() > socio3.getAntiguedad())
    {
        socio2.imprimir();
    }
    else
    {
        socio3.getAntiguedad();
    }
}

int main(int argc, char const *argv[])
{
    cout<<"Plantear una clase Club y otra clase Socio.\nLa clase Socio debe tener los siguientes atributos privados: nombre y la antigüedad en el club (en años). En el constructor pedir la carga del nombre y su antigüedad. La clase Club debe tener como atributos 3 objetos de la clase Socio. Definir una responsabilidad para imprimir el nombre del socio con mayor antigüedad en el club."<<endl;
    Club cl;
    cl.masAntiguo();
    cin.get();
    return 0;
}
