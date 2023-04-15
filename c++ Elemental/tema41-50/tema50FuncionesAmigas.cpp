/*En algunas situaciones puede ser conveniente definir una función independiente pero que tenga acceso a los atributos privados y protegidos de una clase, esto se logra con las funciones amiga (friend)

Para definir una función amiga debemos anteceder la palabra clave friend y cuando la llamamos como realmente no pertenece a la clase sino que es amiga la invocamos por su nombre y no antecedemos un nombre de objeto.
*/
#include <iostream>
using namespace std;

/*Crear una clase llamada Temperatura que permita inicializar la temperatura mínima, máxima y actual. Definir una función amiga que reciba dos objetos de la clase Temperatura y retorne la temperatura promedio actual.*/
class Temperatura
{
    int minima, maxima, actual;

public:
    Temperatura(int min, int max, int act)
    {
        minima = min;
        maxima = max;
        actual = act;
    };
    friend int tempPromActual(Temperatura t1, Temperatura t2);
};

/*La funcion amiga no es propia de la clase, por eso no se antecede la clase
Al ser una funcion amiga puede acceder a los atributos privados de la clase*/
int tempPromActual(Temperatura t1, Temperatura t2)
{return (t1.actual+t2.actual)/2;
}

int main(int argc, char const *argv[])
{
    Temperatura t1(-5,25,20);
    Temperatura t2(5,40,28);
    cout<<"La temperatura promedio actual es de: "<<tempPromActual(t1,t2)<<endl;

    return 0;
}
