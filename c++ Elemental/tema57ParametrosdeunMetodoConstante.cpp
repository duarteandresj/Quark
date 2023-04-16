/*
En muchas situaciones podemos enviar a un método punteros a objetos para trabajar en el mismo con su contenido y sin la intención de modificar el objeto que le pasamos

Cuando indicamos que un parámetro es de tipo const significa que el cuerpo del método no puede modificarlo, pero si consultar la información del mismo.

El objetivo de definir un parámetro de tipo const es evitar por descuido modificar con dicho parámetro el dato que llega.
*/

// Plantear una clase ListaGenerica con los métodos insertarPrimero, imprimir y un método llamado iguales que le llegue como parámetro la referencia de otra lista y retorne true o false. Definir el parámetro del método iguales de tipo const.
#include <iostream>
using namespace std;
class ListaGenerica
{
    class Nodo
    {
    public:
        int info;
        Nodo *sig;
    };
    Nodo *raiz;

public:
    ListaGenerica() { raiz = NULL; };
    ~ListaGenerica();
    void insertarPrimero(int x);
    void imprimir();
    bool iguales(const ListaGenerica *l2);
};
ListaGenerica::~ListaGenerica()
{
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}
void ListaGenerica::insertarPrimero(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = raiz;
    raiz = nuevo;
}
void ListaGenerica::imprimir()
{
    Nodo *reco = raiz;
    cout << "Listado completo: " << endl;
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << endl;
}
//Al declarar como constante al parametro nos aseguramos que no podemos modificar la otra lista por error.
bool ListaGenerica::iguales(const ListaGenerica *lista2)
{
    bool iguales = true;
    Nodo *reco1 = raiz;
    Nodo *reco2 = lista2->raiz;
    while (reco1 != NULL && reco2 != NULL)
    {
        if (reco1->info != reco2->info)
        {
            iguales = false;
            break;
        }
        reco1 = reco1->sig;
        reco2 = reco2->sig;
    }
    if (iguales && reco1 == NULL && reco2 == NULL)
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
    ListaGenerica *lg1 = new ListaGenerica();
    lg1->insertarPrimero(10);
    lg1->insertarPrimero(25);
    lg1->insertarPrimero(30);
    lg1->imprimir();

    ListaGenerica *lg2 = new ListaGenerica();
    lg2->insertarPrimero(10);
    lg2->insertarPrimero(20);
    lg2->insertarPrimero(30);
    lg2->imprimir();

    if (lg1->iguales(lg2))
        cout << "Las dos listas son iguales\n";
    else
        cout << "Las dos listas no son iguales\n";

    delete lg1;
    delete lg2;
    return 0;
}
