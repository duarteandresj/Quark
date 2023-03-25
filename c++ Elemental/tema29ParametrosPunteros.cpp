/*Confeccionar una clase que permita administrar un vector de 5 enteros. Definir dos métodos: uno que permita cargar el vector y otro que retorne el mayor y el menor valor del vector. Emplear dos punteros para poder retornar dos datos en un único método.*/
#include <iostream>
using namespace std;
class Vector
{
    int vector[5];

public:
    void cargar();
    void retornaMayorMenor(int *pmay, int *pmen);
};
void Vector::cargar()
{
    cout << "Cargue el vector: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> vector[i];
    }
}
void Vector::retornaMayorMenor(int *pmay, int *pmen)
{
    *pmay = vector[0];
    *pmen = vector[0];
    for (int i = 1; i < 5; i++)
    {
        if (vector[i] > *pmay)
        {
            *pmay = vector[i];
        }
        else
        {
            if (vector[i] < *pmen)
            {
                *pmen = vector[i];
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    cout << "Confeccionar una clase que permita administrar un vector de 5 enteros. Definir dos métodos: uno que permita cargar el vector y otro que retorne el mayor y el menor valor del vector. Emplear dos punteros para poder retornar dos datos en un único método." << endl;
    Vector ve;
    ve.cargar();
    int ma, me;
    ve.retornaMayorMenor(&ma, &me);
    cout << "El mayor dato es: " << ma << endl;
    cout << "El menor dato es: " << me << endl;
    return 0;
}