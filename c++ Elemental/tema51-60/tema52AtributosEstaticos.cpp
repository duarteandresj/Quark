/*Un atributo estático de una clase se crea independientemente a que se definan objetos de la misma, y en el caso que se creen más de un objeto de dicha clase dicho atributo es compartido por todas las instancias.

Un atributo estático pertenece a la clase pero su existencia es independiente a que se definan o no objetos de la misma.

No alcanza con solo declararlo dentro de la clase debemos definirlo fuera de la clase.

Es muy importante entender que el atributo estático es compartido por todos los objetos que se definan de dicha clase.
*/

// Plantear una clase que defina dos atributos, definir a uno de tipo estático. Crear dos objetos de dicha clase y modificar e imprimir dichos atributos.

#include <iostream>
using namespace std;

class Prueba
{
    int x1;
    static int x2;

public:
    Prueba(int v1, int v2)
    {
        x1 = v1;
        x2 = v2;
    };
    void imprimir();
};
// HAY QUE DECLARAR CUANDO ES UN ATRIBUTO ESTATICO
int Prueba::x2;
void Prueba::imprimir()
{
    cout << "Valor de x1: " << x1 << endl;
    cout << "Valor de x2 estatico: " << x2 << endl;
}
// Plantear una clase Cuenta que defina dos atributos, uno que almacene el importe de la misma y otro atributo estático llamado cantidad que se debe incrementar en uno cada vez que se crea un objeto de dicha clase. Por otro lado crear una clase Banco que defina tres objetos de la clase Cuenta. Imprimir la cantidad de cuentas accediendo al atributo cantidad de la clase Cuenta.
class Cuenta
{
    double saldo;
    static int cantidad;

public:
    // Cada vez que se cree una cuenta se aumenta en uno la cantidad estica
    Cuenta(double saldo)
    {
        saldo = saldo;
        cantidad++;
    };
    int retornarCantidad() { return cantidad; }
};
// Se inicializa la variable estatica
int Cuenta::cantidad = 0;

class Banco
{
    Cuenta *cuenta1, *cuenta2, *cuenta3;

public:
    Banco();
    ~Banco();
    void cantidadClientes();
};
Banco::Banco()
{
    cuenta1 = new Cuenta(1000);
    cuenta2 = new Cuenta(2000);
    cuenta3 = new Cuenta(3000);
}
Banco::~Banco()
{
    delete cuenta1;
    delete cuenta2;
    delete cuenta3;
}
void Banco::cantidadClientes()
{
    cout << cuenta1->retornarCantidad() << endl;
}

int main(int argc, char const *argv[])
{
    Prueba prueba1(1, 1);
    prueba1.imprimir(); //  1   1
    cout << "Se crea un objeto prueba 2 y se modifica el valor estatico por 20" << endl;
    Prueba prueba2(20, 20);
    prueba1.imprimir(); //  1  20

    cout << "BANCO:" << endl;
    Banco *banco1 = new Banco();
    banco1->cantidadClientes();
    delete banco1;
    return 0;
}
