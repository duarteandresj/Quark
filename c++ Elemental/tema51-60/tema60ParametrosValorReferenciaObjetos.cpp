/*
Los parámetros de un método pueden ser de tipo objeto y también los podemos hacer por valor o referencia.

Cuando un parámetro de tipo objeto se hace por valor se hace una copia idéntica de dicho objeto en otra parte de memoria.

Si modificáramos los atributos de dicho parámetro no se estarían modificando los atributos del objeto que le pasamos en la llamada.

CUANDO PASAMOS POR REFERENCIA
Se puede modificar los parametros del objeto que se pasa como parametro

Cuando se pasan objetos grandes el tiempo de hacer la copia en el parámetro puede ser costoso para la eficiencia de nuestro programa. Es muy común en estos casos pasar por referencia aunque no tengamos que modificar el objeto que le pasamos, le agregamos el modificador const al parámetro por referencia para evitar modificarlo.
*/

#include <iostream>
using namespace std;

class Reloj
{
    int hora, minuto, segundo;

public:
    Reloj(int hora, int minuto, int segundo)
    {
        this->hora = hora;
        this->minuto = minuto;
        this->segundo = segundo;
    };
    void imprimir();
    void intentoCambiar(Reloj r);
};
void Reloj::imprimir()
{
    cout << hora << ":" << minuto << ":" << segundo << endl;
}
/*En el algoritmo del método intentoCambiar modificamos los atributos del parámetro r:

No se modifican los valores del objeto en si sino de la copia que existe en memoria
*/
void Reloj::intentoCambiar(Reloj r)
{
    r.hora = 1;
    r.minuto = 0;
    r.segundo = 0;
}
// Ahora realizaremos el pasaje del objeto por referencia
class RelojPorReferencia
{
    int hora, minuto, segundo;

public:
    RelojPorReferencia(int hora, int minuto, int segundo)
    {
        this->hora = hora;
        this->minuto = minuto;
        this->segundo = segundo;
    };
    void imprimir();
    void intentoCambiar(RelojPorReferencia &r);
};

void RelojPorReferencia::imprimir()
{
    cout << hora << ":" << minuto << ":" << segundo << endl;
}
// El único cambio que hemos dispuesto es que el parámetro r pasa por referencia
/*Si modificamos los atributos de r, estamos modificando los atributos del objeto reloj2 que le pasamos desde la main y es por eso que cuando imprimimos luego los atributos del objeto reloj2 vemos que los datos son distintos a los que le pasamos en el constructor:
 */
void RelojPorReferencia::intentoCambiar(RelojPorReferencia &r)
{
    r.hora = 1;
    r.minuto = 0;
    r.segundo = 0;
}

int main(int argc, char const *argv[])
{
    Reloj reloj1(10, 10, 10);
    Reloj reloj2(20, 20, 20);
    reloj1.intentoCambiar(reloj2);
    reloj1.imprimir(); // imprime: 10:10:10
    reloj2.imprimir(); // imprime: 20:20:20
    RelojPorReferencia reloj11(10, 10, 10);
    RelojPorReferencia reloj22(20, 20, 20);
    reloj11.intentoCambiar(reloj22);
    reloj11.imprimir(); // imprime: 10:10:10
    reloj22.imprimir(); // imprime: 1:0:0
    return 0;
    return 0;
}
