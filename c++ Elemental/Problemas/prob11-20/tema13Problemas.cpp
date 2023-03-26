#include <iostream>
using namespace std;
// Confeccionar una clase que represente un empleado. Definir como atributos su nombre y su sueldo. Confeccionar los métodos para la carga, otro para imprimir sus datos y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)

class Empleado
{
private:
    char nombre[30];
    double sueldo;

public:
    void inicializador();
    void imprimir();
    void pagaImpuestos();
};
void Empleado::inicializador()
{
    cout << "Ingrese nombre del empleado: ";
    cin.getline(nombre, 30);
    cout << "Ingrese sueldo del empleado: ";
    cin >> sueldo;
}
void Empleado::imprimir()
{
    cout << "Empleado: ";
    cout << nombre << endl;
    cout << "Sueldo: ";
    cout << sueldo << endl;
}
void Empleado::pagaImpuestos()
{
    if (sueldo > 3000)
    {
        cout << "Paga Impuestos" << endl;
    }
    else
    {
        cout << "No paga impuestos" << endl;
    }
}
// Implementar la clase operaciones. Se deben cargar dos valores enteros, calcular su suma, resta, multiplicación y división, cada una en un método, imprimir dichos resultados.
class Operaciones
{
private:
    double x, y;

public:
    void inicializador();
    void suma();
    void resta();
    void multiplicacion();
    void division();
};
void Operaciones::inicializador()
{
    cout << "Ingrese el primer valor: ";
    cin >> x;
    cout << "Ingrese el segundo valor: ";
    cin >> y;
}
void Operaciones::suma()
{
    double suma;
    suma = x + y;
    cout << "El resultado de la suma es: ";
    cout << suma << endl;
}
void Operaciones::resta()
{
    double resta;
    resta = x - y;
    cout << "El resultado de la resta es: ";
    cout << resta << endl;
}
void Operaciones::multiplicacion()
{
    double aux;
    aux = x * y;
    cout << "El resultado de la multiplicacion es: ";
    cout << aux << endl;
}
void Operaciones::division()
{
    double aux;
    if (y != 0)
    {
        cout << "El resultado de la division es: ";
        aux = x / y;
        cout << aux << endl;
    }
    else
    {
        cout << "El divisor no puede ser 0";
    };
}
int main()
{
    cout << " Confeccionar una clase que represente un empleado. Definir como atributos su nombre y su sueldo. Confeccionar los métodos para la carga, otro para imprimir sus datos y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)\n"
         << endl;
    Empleado josesito;
    josesito.inicializador();
    cout << "\n";
    josesito.imprimir();
    cout << "\n";
    josesito.pagaImpuestos();
    cin.get();
    cin.get();
    cout << "Implementar la clase operaciones. Se deben cargar dos valores enteros, calcular su suma, resta, multiplicación y división, cada una en un método, imprimir dichos resultados.\n"
         << endl;
    Operaciones operacion;
    operacion.inicializador();
    cout << "\n";
    operacion.suma();
    cout << "\n";
    operacion.resta();
    cout << "\n";
    operacion.multiplicacion();
    cout << "\n";
    operacion.division();
    cin.get();
    cin.get();
    return 0;
}