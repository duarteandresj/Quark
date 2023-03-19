/*Supongamos que necesitamos implementar dos clases que llamaremos Suma y Resta. Cada clase tiene como atributo valor1, valor2 y resultado. Los métodos a definir son cargar1 (que inicializa el atributo valor1), carga2 (que inicializa el atributo valor2), operar (que en el caso de la clase "Suma" suma los dos atributos y en el caso de la clase "Resta" hace la diferencia entre valor1 y valor2, y otro método mostrarResultado)*/
#include <iostream>
using namespace std;
class Operaciones
{
protected:
    int valor1, valor2, resultado;

public:
    void carga1(), carga2(), mostrarResultado();
};
void Operaciones::carga1()
{
    cout << "Ingrese el primer valor: ";
    cin >> valor1;
}
void Operaciones::carga2()
{
    cout << "Ingrese el segundo valor: ";
    cin >> valor2;
}
void Operaciones::mostrarResultado()
{
    cout << "Resultado: " << resultado << endl;
}
class Suma : public Operaciones
{
public:
    void operar();
};
void Suma::operar()
{
    resultado = valor1 + valor2;
}
class Resta : public Operaciones
{
public:
    void operar();
};
void Resta::operar()
{
    resultado = valor1 - valor2;
}
int main()
{
    cout<<"Supongamos que necesitamos implementar dos clases que llamaremos Suma y Resta. Cada clase tiene como atributo valor1, valor2 y resultado. Los métodos a definir son cargar1 (que inicializa el atributo valor1), carga2 (que inicializa el atributo valor2), operar (que en el caso de la clase 'Suma' suma los dos atributos y en el caso de la clase 'Resta' hace la diferencia entre valor1 y valor2, y otro método mostrarResultado)"<<endl;
    Suma suma;
    suma.carga1();
    suma.carga2();
    suma.operar();
    cout<<"El resultado de la suma es:"<<endl;
    suma.mostrarResultado();
    cin.get();
    Resta resta;
    resta.carga1();
    resta.carga2();
    resta.operar();
    cout<<"El resultado de la resta es:"<<endl;
    resta.mostrarResultado();
    return 0;
}
