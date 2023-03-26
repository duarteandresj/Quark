#include <iostream>

using namespace std;

int main()
{
    int horasTrabajadas;
    double costoHora;
    double sueldo;
    cout << "Ingrese horas trabajadas por el operario: ";
    cin >> horasTrabajadas;
    cout << "Ingrese el pago por hora: ";
    cin >> costoHora;
    sueldo = horasTrabajadas * costoHora;
    cout << "\n";
    cout << "El sueldo total del operario es: ";
    cout << sueldo;
    cin.get();
    cin.get();
    return 0;
}