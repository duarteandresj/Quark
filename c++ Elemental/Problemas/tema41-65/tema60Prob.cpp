/*
Plantear la clase Reloj y definir como atributo la hora, minuto y segundo. En el constructor inicializar los atributos. Definir un método que retorne si son iguales los atributos de dos objetos de tipo Reloj, el método tiene que tener la estructura:

  bool iguales(Reloj r);
*/
#include <iostream>
using namespace std;
class Reloj
{
    int hora, minuto, segundo;

public:
    Reloj(int hor, int min, int seg)
    {
        hora = hor;
        minuto = min;
        segundo = seg;
    };
    void imprimir();
    bool iguales(Reloj r);
};
void Reloj::imprimir()
{
    cout << hora << ":" << minuto << ":" << segundo << endl;
}
bool Reloj::iguales(Reloj r)
{
    if (hora == r.hora && minuto == r.minuto && segundo == r.segundo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/*
Volver a codificar el problema anterior pero ahora al método iguales hacer que llegue como referencia el parámetro (agregamos el modificador const ya que no tenemos que modificar el objeto que le pasamos como referencia):

  bool iguales(const Reloj &r);
  */

class Relojcito
{
    int hora, minuto, segundo;

public:
    Relojcito(int hor, int min, int seg)
    {
        hora = hor;
        minuto = min;
        segundo = seg;
    };
    void imprimir();
    bool iguales(const Relojcito &r);
};
void Relojcito::imprimir()
{
    cout << hora << ":" << minuto << ":" << segundo << endl;
}
bool Relojcito::iguales(const Relojcito &r)
{
    if (hora == r.hora && minuto == r.minuto && segundo == r.segundo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    Reloj reloj1(10, 10, 10);
    Reloj reloj2(10, 10, 10);
    reloj1.imprimir();
    reloj2.imprimir();
    if (reloj1.iguales(reloj2))
        cout << "Tienen la misma hora los relojes" << endl;
    else
        cout << "No tienen la misma hora los relojes" << endl;

    Relojcito reloj3(10, 10, 10);
    Relojcito reloj4(10, 10, 10);
    reloj3.imprimir();
    reloj4.imprimir();
    if (reloj3.iguales(reloj4))
        cout << "Tienen la misma hora los relojes" << endl;
    else
        cout << "No tienen la misma hora los relojes" << endl;
    return 0;
}
