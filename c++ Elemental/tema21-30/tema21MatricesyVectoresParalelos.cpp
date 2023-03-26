/*Se tiene la siguiente información:
· Nombres de 4 empleados.
· Ingresos en concepto de sueldo, cobrado por cada empleado, en los últimos 3 meses.
Confeccionar el programa para:

a) Realizar la carga de la información mencionada.
b) Generar un vector que contenga el ingreso acumulado en sueldos en los últimos 3 meses para cada empleado.
c) Mostrar por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses
d) Obtener el nombre del empleado que tuvo el mayor ingreso acumulado*/
#include <iostream>
using namespace std;

class Empleados
{
private:
    char nombres[4][25];
    int sueldos[4][3];
    int acumulado[4];

public:
    void cargar();
    void sumaSueldos();
    void imprimirTotal();
    void empleadoMayorSueldo();
};
void Empleados::cargar()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "\nIngrese el nombre y luego los ultimos tres sueldos del empleado: " << endl;
        cin >> nombres[i];
        for (int j = 0; j < 3; j++)
        {
            cin >> sueldos[i][j];
        }
    }
}
void Empleados::sumaSueldos()
{
    for (int i = 0; i < 4; i++)
    {
        int auxAcum = 0;
        for (int j = 0; j < 3; j++)
        {
            auxAcum += sueldos[i][j];
        }
        acumulado[i] = auxAcum;
    }
}
void Empleados::imprimirTotal()
{
    cout << "Empleados "
         << "\t"
         << "Sueldo Acum en 3 meses" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << nombres[i] << "\t\t" << acumulado[i] << endl;
        ;
    }
}
void Empleados::empleadoMayorSueldo(){
    int pos=0;
    for (int i = 1; i < 4; i++)
    {
        if (acumulado[pos]<acumulado[i])
        {
            pos=i;
        }
    }
    cout<<"El empleado con mayor sueldo es: "<<nombres[pos]<<" y su sueldo acumulado es: "<<acumulado[pos]<<endl;
    cin.get();
}


int main()
{
    cout << "Se tiene la siguiente información:\n· Nombres de 4 empleados.\n· Ingresos en concepto de sueldo, cobrado por cada empleado, en los últimos 3 meses.\nConfeccionar el programa para:\n\na) Realizar la carga de la información mencionada.\nb) Generar un vector que contenga el ingreso acumulado en sueldos en los últimos 3 meses para cada empleado.\nc) Mostrar por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses\nd) Obtener el nombre del empleado que tuvo el mayor ingreso acumulado" << endl;
    Empleados se;
    se.cargar();
    se.sumaSueldos();
    se.imprimirTotal();
    se.empleadoMayorSueldo();
    return 0;
}