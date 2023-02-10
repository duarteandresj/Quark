#include <iostream>
using namespace std;
// Se desea guardar los sueldos de 5 operarios.
class PruebaVector
{
private:
    int sueldos[5];

public:
    void cargar();
    void imprimir();
};
void PruebaVector::cargar()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese el ";
        cout << i + 1;
        cout << "° sueldo: ";
        cin >> sueldos[i];
    }
}
void PruebaVector::imprimir()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "El ";
        cout << i + 1;
        cout << "° sueldo es:";
        cout << sueldos[i] << endl;
    }
}
/*Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.
Obtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio y cuántas más bajas.*/
class VectorFloat
{
private:
    float alturas[5];
    float promedioAltura;

public:
    void cargar();
    void getPromedio();
    void mayoresMenores();
};

void VectorFloat::cargar()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese la #";
        cout << i + 1;
        cout << " altura: ";
        cin >> alturas[i];
    }
}
void VectorFloat::getPromedio()
{
    float aux = 0;
    for (int i = 0; i < 5; i++)
    {
        aux += alturas[i];
    }
    promedioAltura=aux/5;
    cout<<"El promedio de las alturas es: ";cout<<promedioAltura<<endl;
}
void VectorFloat::mayoresMenores()
{
    int mayor = 0, menor = 0;
    for (int i = 0; i < 5; i++)
    {
        if (alturas[i] > promedioAltura)
        {
            mayor++;
        }
        else
        {
            menor++;
        }
    }
    cout << "Personas mas altas al promedio: ";
    cout << mayor << endl;
    cout << "Personas mas bajas al promedio: ";
    cout << menor << endl;
}
/*Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno.
Imprimir los gastos en sueldos de cada turno.*/
class Empresa{
    private:
    double sueldoTM[4];
    double sueldoTT[4];
    public:
    void cargar();
    void getGastos();
};
void Empresa::cargar(){
    for (int i = 0; i < 4; i++)
    {cout<<"Ingrese sueldo T.M: ";
    cin>>sueldoTM[i];
    }
    for (int i = 0; i < 4; i++)
    {cout<<"Ingrese sueldo T.T: ";
    cin>>sueldoTT[i];
    }
}
void Empresa::getGastos(){
    double sueldoMañana=0,sueldoTarde=0;
    for (int i = 0; i < 4 ; i++)
    {sueldoMañana+=sueldoTM[i];
    sueldoTarde+=sueldoTT[i];
    }
    cout<<"La suma de sueldos de TM es: ";cout<<sueldoMañana<<endl;
    cout<<"La suma de sueldos de TT es: ";cout<<sueldoTarde<<endl;    
}

int main()
{
    cout << "Se desea guardar los sueldos de 5 operarios.Empleando vector" << endl;
    PruebaVector vector;
    vector.cargar();
    vector.imprimir();
    cout << "Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.\nObtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio y cuántas más bajas." << endl;
    VectorFloat flotante;
    flotante.cargar();
    flotante.getPromedio();
    flotante.mayoresMenores();
    cin.get();
    cin.get();
    cout<<"Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)\nConfeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno.\nImprimir los gastos en sueldos de cada turno."<<endl;
    Empresa factory;
    factory.cargar();
    factory.getGastos();
    cin.get();
    cin.get();
    return 0;
}