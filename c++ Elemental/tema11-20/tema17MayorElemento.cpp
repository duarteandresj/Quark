#include <iostream>
using namespace std;
// Confeccionar un programa que permita cargar los nombres de 5 operarios y sus sueldos respectivos. Mostrar el sueldo mayor y el nombre del operario.
class Operarios
{
private:
    char nombres[5][30];
    double sueldo[5];

public:
    void cargar();
    void getMayor();
};
void Operarios::cargar()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese nombre: ";
        cin.getline(nombres[i], 30);
        cout << "Ingrese sueldo: ";
        cin >> sueldo[i];
        cin.get();
    }
}
void Operarios::getMayor()
{
    double mayor = sueldo[0];
    int pos = 0;
    for (int i = 0; i < 5; i++)
    {
        if (sueldo[i] > mayor)
        {
            mayor = sueldo[i];
            pos = i;
        }
    }

    cout << "El sueldo mayor es: ";
    cout << mayor << endl;
    cout << "El operario que lo tiene adjudicado es: ";
    cout << nombres[pos] << endl;
}

int main()
{
    cout << "Confeccionar un programa que permita cargar los nombres de 5 operarios y sus sueldos respectivos. Mostrar el sueldo mayor y el nombre del operario.\n"
         << endl;
    Operarios operarios;
    operarios.cargar();
    cout << "\n";
    operarios.getMayor();
    cin.get();
    cin.get();
    return 0;
}