/*
Un método estático solo puede acceder a los atributos estáticos declarados en la clase.

Un método estático se lo puede llamar sin la necesitad de crear un objeto de dicha clase. Para poder llamarlo debemos anteceder el nombre de la clase y el modificador :: (dos veces dos puntos).
*/

// Plantear una clase que defina un atributo y un método estático. Desde la main llamar al método estático sin tener que crear un objeto de dicha clase.
#include <iostream>
using namespace std;

// Primero declaramos el atributo estático y el método estático en la declaración de la clase antecediendo la palabra clave static:
class Prueba
{
    static int x;

public:
    static int retornar();
};
// Definimos e inicializamos la variable estática con el valor 20
int Prueba::x = 20;
int Prueba::retornar()
{
    return x;
}

// Plantear una clase Cuenta que defina dos atributos, uno que almacene el importe de la misma y otro atributo estático llamado cantidad que se debe incrementar en uno cada vez que se crea un objeto de dicha clase, definir en esta misma clase un método estático que retorne el contandor cantidad. Por otro lado crear una clase Banco que defina tres objetos de la clase Cuenta. Imprimir la cantidad de cuentas llamando al método estático de la clase Cuenta.

class Cuenta
{
    double saldo;
    static int cantidad;

public:
    Cuenta(double saldo)
    {
        saldo = saldo;
        cantidad++;
    };
    static int retornarCantidad() { return cantidad; };
};
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
    cout << "Cantidad de cuentas: " << Cuenta::retornarCantidad() << endl;
}
int main(int argc, char const *argv[])
{
    // Finalmente podemos ver que para acceder a dicho método no es necesario crear un objeto de la clase Prueba, solo con anteceder al nombre del método con el nombre de la clase y los caracteres :: tenemos acceso:
    cout << "Valor de atributo estatico: " << Prueba::retornar() << endl;

    Banco *banco1 = new Banco();
    banco1->cantidadClientes();
    delete banco1;
    return 0;
}
