/*Un banco tiene 3 clientes que pueden hacer depósitos y extracciones. También el banco requiere que al final del día calcule la cantidad de dinero que hay depositada.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
using namespace std;
class Cliente
{
    char nombre[25];
    double saldo;

public:
    Cliente(const char nom[25]);
    void depositar(double m);
    void extraer(double m);
    double consultaSaldo();
    void imprimir();
};
class Banco
{
    Cliente cliente1, cliente2, cliente3;

public:
    Banco();
    void operar();
    void depositosTotales();
};
Cliente::Cliente(const char nom[25])
{
    strcpy_s(nombre, nom);
    this->saldo = 0;
}
void Cliente::depositar(double m)
{
    if (m > 0)
    {
        this->saldo += m;
    }
    else
    {
        cout << "El monto debe ser mayor a cero" << endl;
    }
}
void Cliente::extraer(double m)
{
    if (m < this->saldo)
    {
        this->saldo -= m;
    }
    else
    {
        cout << "La suma es mayor al dinero en cuenta." << endl;
    }
}
double Cliente::consultaSaldo()
{
    return this->saldo;
}
void Cliente::imprimir()
{
    cout << "Nombre Cliente\t"
         << "Saldo en cuenta" << endl;
    cout << nombre << "\t\t" << this->saldo << endl;
}
/*ClassName::ClassName(): classMember(parameter){}*/
Banco::Banco() : cliente1("Juana"), cliente2("Jose"), cliente3("Pepito")
{
}
void Banco::operar()
{
    cliente1.depositar(100);
    cliente2.depositar(150);
    cliente3.depositar(200);
    cliente3.extraer(150);
}
void Banco::depositosTotales()
{
    double aux = 0;
    aux += cliente1.consultaSaldo();
    aux += cliente2.consultaSaldo();
    aux += cliente3.consultaSaldo();
    cout << "El total de dinero en el banco es: " << aux << endl;
    cout << endl;
    cliente1.imprimir();
    cout << endl;
    cliente2.imprimir();
    cout << endl;
    cliente3.imprimir();
}
/*Plantear un programa que permita jugar a los dados. Las reglas de juego son: se tiran tres dados si los tres salen con el mismo valor mostrar un mensaje que "gano", sino "perdió".*/

class Dado
{
    int value;

public:
    void tirar();
    void imprimir();
    int getValor();
};
class JuegoDados
{
    Dado dado1, dado2, dado3;

public:
    void jugar();
};
void Dado::tirar()
{
    this->value = rand() % 6 + 1;
}
void Dado::imprimir()
{
    cout << "Valor del dado: " << this->value << endl;
}
int Dado::getValor()
{
    return this->value;
}
void JuegoDados::jugar()
{
    dado1.tirar();
    dado1.imprimir();
    dado2.tirar();
    dado2.imprimir();
    dado3.tirar();
    dado3.imprimir();
    bool isWinner = dado1.getValor() == dado2.getValor() && dado1.getValor() == dado3.getValor();
    if (isWinner)
    {
        cout << "Los tres dados han obtenito " << dado1.getValor() << ", GANO.\n"
             << "FELICITACIONES" << endl;
    }
    else
    {
        cout << "Los dados tienen valores distintos.\n"
             << "Usted PERDIO." << endl;
    }
}

int main()
{
    cout << "Un banco tiene 3 clientes que pueden hacer depósitos y extracciones. También el banco requiere que al final del día calcule la cantidad de dinero que hay depositada." << endl;
    Banco s;
    s.operar();
    s.depositosTotales();
    cin.get();
    cin.get();
    cout << "Plantear un programa que permita jugar a los dados. Las reglas de juego son: se tiran tres dados si los tres salen con el mismo valor mostrar un mensaje que 'gano', sino 'perdió'" << endl;
    srand(time(NULL));
    JuegoDados juego;
    juego.jugar();
    cin.get();
    cin.get();
    return 0;
}