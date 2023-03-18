/*Plantear una clase llamada Dado. Definir un atributo valor y tres métodos uno privado que dibuje una línea de asteríscos y otro dos públicos, uno que genere un número aleatorio entre 1 y 6 y otro que lo imprima llamando en este último al que dibuja la línea de asteríscos.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Dado
{//aca se obvia la palabra private ya que al no especificar se toma como private
    int valor;
    void dibujarLinea()
    {
        cout << "********" << endl;
    };

public:
    void aleatorio();
    void imprimir();
};

void Dado::aleatorio()
{
    srand(time(NULL));//semilla inicial para dar numeros aleatorios
    valor = rand() % 6 + 1;//Esto me da valores entre 1 y 6
}
void Dado::imprimir()
{
    dibujarLinea();
    cout << valor << endl;
    dibujarLinea();
}
int main()
{
    cout << "Plantear una clase llamada Dado. Definir un atributo valor y tres métodos uno privado que dibuje una línea de asteríscos y otro dos públicos, uno que genere un número aleatorio entre 1 y 6 y otro que lo imprima llamando en este último al que dibuja la línea de asteríscos." << endl;
    Dado dadi;
    dadi.aleatorio();
    dadi.imprimir();
    return 0;
}