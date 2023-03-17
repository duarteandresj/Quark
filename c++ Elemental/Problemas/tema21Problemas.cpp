/*Se desea saber la temperatura media trimestral de cuatro paises pequeños. Para ello se tiene como dato las temperaturas medias mensuales de dichos paises.
Se debe ingresar el nombre del país y seguidamente las tres temperaturas medias mensuales.
Seleccionar las estructuras de datos adecuadas para el almacenamiento de los datos en memoria.
a - Cargar por teclado los nombres de los países y las temperaturas medias mensuales.
b - Imprimir los nombres de los países y las temperaturas medias mensuales de las mismas.
c - Calcular la temperatura media trimestral de cada país.
d - Imprimir los nombres de los países y las temperaturas medias trimestrales.
e - Imprimir el nombre del país con la temperatura media trimestral mayor.*/
#include <iostream>
using namespace std;
class Paises
{
private:
    char nombres[4][25];
    double temperaturas[4][3];
    double promedioTemperaturas[4];
    void temperaturaMediaTrimestral();
public:
    void cargar();
    void imprimirMensual();

    void imprimirTrimestral();
    void paisMayorTemperatura();
};
void Paises::cargar()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Ingresar nombre de pais y temperaturas mensuales de los ultimos tres meses:" << endl;
        cin.getline(nombres[i], 25);
        for (int j = 0; j < 3; j++)
        {
            cin >> temperaturas[i][j];
        }
        cin.get();
    }
}
void Paises::imprimirMensual()
{
    cout << "Pais"
         << "\t"
         << "Tmp1"
         << "\t"
         << "Tmp2"
         << "\t"
         << "Tmp3" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << nombres[i] << "\t";
        for (int c = 0; c < 3; c++)
        {
            cout << temperaturas[i][c] << "\t";
        }
        cout << "\n";
    }
}
void Paises::temperaturaMediaTrimestral()
{
    for (int i = 0; i < 4; i++)
    {
        double auxProm = 0, acumTemp=0;
        for (int c = 0; c < 3; c++)
        {
            acumTemp += temperaturas[i][c];
        }
        auxProm = acumTemp / 3;
        promedioTemperaturas[i] = auxProm;
    }
}
void Paises::imprimirTrimestral()
{
    temperaturaMediaTrimestral();
    cout << "Pais"
         << "\t\t"
         << "Temp Trimestral" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << nombres[i] << "\t\t" << promedioTemperaturas[i] << endl;
    }
    cin.get();
}
void Paises::paisMayorTemperatura(){
    temperaturaMediaTrimestral();
    int pos=0;
    for (int i = 1; i < 3; i++)
    {
        if (promedioTemperaturas[pos]<promedioTemperaturas[i])
        {
            pos=i;
        }
    }
    cout<<"El pais con mayor temperatura es: "<<nombres[pos]<<" con una temperatura de: "<<promedioTemperaturas[pos]<<endl;
    cin.get();
}

int main()
{
    cout << "Se desea saber la temperatura media trimestral de cuatro paises pequeños. Para ello se tiene como dato las temperaturas medias mensuales de dichos paises.\nSe debe ingresar el nombre del país y seguidamente las tres temperaturas medias mensuales.\nSeleccionar las estructuras de datos adecuadas para el almacenamiento de los datos en memoria.\n\ta - Cargar por teclado los nombres de los países y las temperaturas medias mensuales.\n\tb - Imprimir los nombres de los países y las temperaturas medias mensuales de las mismas.\n\tc - Calcular la temperatura media trimestral de cada país.\n\td - Imprimir los nombres de los países y las temperaturas medias trimestrales.\n\te - Imprimir el nombre del país con la temperatura media trimestral mayor." << endl;
    Paises pa;
    pa.cargar();
    cout << "\nTEMPERATURAS MENSUALES\n";
    pa.imprimirMensual();
    cout << "\nTEMPERATURA TRIMESTRAL\n";
    pa.imprimirTrimestral();
    cout << "\nPAIS CON MAYOR TEMPERATURA TRIMESTRAL\n";
    pa.paisMayorTemperatura();
    return 0;
}