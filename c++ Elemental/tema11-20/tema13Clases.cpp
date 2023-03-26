#include <iostream>
using namespace std;
// Confeccionar una clase que permita cargar el nombre y la edad de una persona. Mostrar los datos cargados. Imprimir un mensaje si es mayor de edad (edad>=18) o no
class Persona
{
private:
    char nombre[40];
    int edad;

public:
    void inicializar();
    void imprimir();
    void esMayorEdad();
};
void Persona::inicializar()
{
    cout << "Ingrese nombre: ";
    cin.getline(nombre, 40);
    cout << "Ingrese su edad: ";
    cin >> edad;
    cin.get();
}
void Persona::imprimir()
{
    cout << "Nombre: ";
    cout << nombre << endl;
    cout << "Edad: ";
    cout << edad << endl;
}
void Persona::esMayorEdad()
{
    if (edad != 0)
    {
        if (edad >= 18)
        {
            cout << "Es mayor de edad";
        }
        else
        {
            cout << "No es mayor de edad";
        }
    }
    else
    {
        cout << "Edad invalida, igual a 0";
    }
}
// Desarrollar un programa que cargue los lados de un triángulo e implemente los siguientes métodos: inicializar los atributos, imprimir el valor del lado mayor y otro método que muestre si es equilátero o no.
class Triangulo
{
private:
    int ladoA;
    int ladoB;
    int ladoC;

public:
    void inicializar();
    void imprimirLadoMayor();
    void isEquilatero();
};
void Triangulo::inicializar()
{
    cout << "Ingrese longitud del lado: ";
    cin >> ladoA;
    cout << "Ingrese longitud del lado: ";
    cin >> ladoB;
    cout << "Ingrese longitud del lado: ";
    cin >> ladoC;
}
void Triangulo::imprimirLadoMayor()
{
    cout << "La longitud mayor es: ";
    if (ladoA > ladoB && ladoA > ladoC)
    {
        cout << ladoA;
    }
    else if (ladoB > ladoC)
    {
        cout << ladoB;
    }
    else
    {
        cout << ladoC;
    }
}
void Triangulo::isEquilatero()
{
    if (ladoA == ladoB && ladoB == ladoC)
    {
        cout << "Es un triangulo equilatero;" << endl;
    }
    else
    {
        cout << "No es un triangulo equilatero;" << endl;
    }
}
// Desarrollar una clase que represente un punto en el plano y tenga los siguientes métodos: cargar los valores de x e y, imprimir en que cuadrante se encuentra dicho punto (concepto matemático, primer cuadrante si x e y son positivas, si x<0 e y>0 segundo cuadrante, etc.)
class Punto
{
private:
    int coordX;
    int coordY;

public:
    void inicializar();
    void cuadrante();
};
void Punto::inicializar()
{
    cout << "Ingrese coordenada en X: ";
    cin >> coordX;
    cout << "Ingrese coordenada en Y: ";
    cin >> coordY;
}
void Punto::cuadrante()
{
    if (coordX != 0 && coordY != 0)
    {
        cout << "El punto se encuentra en: ";
        if (coordX > 0)
        {
            if (coordY > 0)
            {
                cout << "Primer cuadrante" << endl;
            }
            else
            {
                cout << "Cuarto cuadrante" << endl;
            }
        }
        else
        {
            if (coordY > 0)
            {
                cout << "Segundo cuadrante" << endl;
            }
            else
            {
                cout << "Tercer cuadrante" << endl;
            }
        }
    }
    else
    {
        cout << "El punto se encuentre en algun eje (Algun valor es 0)" << endl;
    }
}
//Desarrollar una clase que represente un Cuadrado y tenga los siguientes métodos: cargar el valor de su lado, imprimir su perímetro y su superficie.
class Cuadrado{
private:
int lado;
public:
void inicializar();
void perimetro();
void superficie();
};
void Cuadrado::inicializar(){
    cout<<"Ingrese el largo de un lado: ";cin>>lado;
}
void Cuadrado::perimetro(){
    cout<<"El perimetro del cuadrado es: ";
    cout<<4*lado<<endl;

}
void Cuadrado::superficie(){
    cout<<"La superficie del cuadrado es: ";
    cout<<lado*lado<<endl;

}
int main()
{
    Persona persona1;
    persona1.inicializar();
    persona1.imprimir();
    persona1.esMayorEdad();
    cin.get();
    cin.get();
    cout << "Modificar el problema anterior para realizar la carga del nombre y la edad de dos personas. Mostrar los datos cargados. Imprimir un mensaje si son mayor de edad o no." << endl;
    Persona pepito;
    Persona pepita;
    pepito.inicializar();
    cin.get();
    pepita.inicializar();
    pepito.imprimir();
    pepito.esMayorEdad();
    cout << "\n";
    pepita.imprimir();
    pepita.esMayorEdad();
    cin.get();
    cin.get();
    cout << "Desarrollar un programa que cargue los lados de un triángulo e implemente los siguientes métodos: inicializar los atributos, imprimir el valor del lado mayor y otro método que muestre si es equilátero o no." << endl;
    Triangulo triangulito;
    triangulito.inicializar();
    cin.get();
    cout << "\n";
    triangulito.imprimirLadoMayor();
    cout << "\n";
    triangulito.isEquilatero();
    cin.get();
    cout << "Desarrollar una clase que represente un punto en el plano y tenga los siguientes métodos: cargar los valores de x e y, imprimir en que cuadrante se encuentra dicho punto (concepto matemático, primer cuadrante si x e y son positivas, si x<0 e y>0 segundo cuadrante, etc.)" << endl;
    Punto puntito;
    puntito.inicializar();
    cin.get();
    cout<<"\n";
    puntito.cuadrante();
    cin.get();
    cout<<"Desarrollar una clase que represente un Cuadrado y tenga los siguientes métodos: cargar el valor de su lado, imprimir su perímetro y su superficie."<<endl;
    Cuadrado cuadradito;
    cuadradito.inicializar();
   cout<<"\n";
    cuadradito.perimetro();
    cout<<"\n";
    cuadradito.superficie();
    cin.get();
    cin.get();
    return 0;
}
