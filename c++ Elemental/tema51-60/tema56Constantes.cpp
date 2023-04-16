/*
Una constante es un identificador con un valor inmodificable, permanece fijo durante toda la ejecución del programa. Se las define antecediéndole la palabra reservada const. No existe una zona determinada para su declaración. Pueden ser globales o locales.

Una constante a diferencia de una macro ocupa un espacio durante la ejecución del programa.

solo podemos definir constantes estáticas si se trata de valores enteros

Para definir atributos de una clase que sean constantes debemos inicializarlos por única vez en en la zona de inicialización del constructor*/
#include <iostream>
using namespace std;
/*debemos anteceder la palabra clave const al nombre del tipo de dato, son constantes globales si las definimos fuera de la main y que no dependan de otra función o clase:*/
const int inicio = 1;
const double altura = 1.92;
const char mensaje1[] = "Bienvenido al programa";

// Se trata de una constante local a una función cuando la definimos dentro de la misma, por ejemplo dentro de la main:

// Definición de constantes dentro de una clase. Una primer forma es definir una constante estática que podemos utilizar dentro de la clase. Al ser estática todos los objetos de la clase acceden al mismo elemento en memoria:
#define SALTOLINEA "\n"
#define TAB "\t"
class Vector
{
    static const int tamano = 5;
    int vector[tamano];
    void imprimir();

public:
    Vector()
    {
        cout << "Ingrese componentes: " << endl;
        for (int i = 0; i < tamano; i++)
        {
            cin >> vector[i];
        }
        cin.get();
        imprimir();
    }
};
void Vector::imprimir()
{
    cout << SALTOLINEA "Componentes del vector: " << endl;
    for (int i = 0; i < tamano; i++)
    {
        cout << vector[i] << TAB;
    }
    cout << SALTOLINEA;
}

class Temperatura
{
    const int media;
    int minima, maxima;
    void imprimir();

public:
    // Se inicializa la constante privada en la zona del constructor
    Temperatura(int min, int max, int me) : media(me)
    {
        minima = min;
        maxima = max;
        imprimir();
    };
};
void Temperatura::imprimir(){
    cout<<"minima: "<<TAB<<minima<<SALTOLINEA<<"maxima: "<<TAB<<maxima<<SALTOLINEA<<"media:  "<<TAB<<media<<SALTOLINEA;
}

int main(int argc, char const *argv[])
{
    cout << "Constante entera:" << inicio << "\n";
    cout << "Constante doble:" << altura << "\n";
    cout << "Constante 'CHAR':" << mensaje1 << "\n";
    const int fin = 10;
    cout << "Constante local:" << fin << endl;
    cout << SALTOLINEA "Vector"<<endl;
    Vector vector;
    cout<<SALTOLINEA"Temperaturas:"<<endl;
    Temperatura tem(15,25,20);
    cout<<SALTOLINEA;
     Temperatura t2(5,9,7);
    return 0;
}