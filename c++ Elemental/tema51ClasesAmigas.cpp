/*
Las clases amigas deben utilizarse en situaciones especiales ya que deteriora el concepto de encapsulamiento de nuestra aplicación.

Declarar dos clases independientes: Nodo y ListaGenerica. En la clase nodo definir el atributo info, los punteros sig y ant e indicar que tiene una clase amiga llamada ListaGenerica por lo que tendrá acceso a sus atributos.*/
#include <iostream>
using namespace std;
class Nodo
{
    int info;
    Nodo *ant, *sig;
//Se declara la clase ListaGenerica como amiga por ende esta va a poder acceder a los atributos privados y protegidos de la clase nodo
public:
    Nodo(int x) { info = x; };
    friend class ListaGenerica;
};
class ListaGenerica
{
    Nodo *raiz;

public:
    ListaGenerica() { raiz = NULL; };
    ~ListaGenerica();
    void insertarPrimero(int x);
    void imprimir();
};
ListaGenerica::~ListaGenerica()
{
    Nodo *bor, *reco = raiz;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}
void ListaGenerica::insertarPrimero(int x)
{
    Nodo *nuevo = new Nodo(x);
    nuevo->ant = NULL;
    if (raiz == NULL)
    {
        nuevo->sig = NULL;
        raiz = nuevo;
    }
    else
    {
        nuevo->sig = raiz;
        raiz->ant = raiz;
        raiz = nuevo;
    }
}
void ListaGenerica::imprimir()
{
    Nodo *reco = raiz;
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    ListaGenerica *lista1 = new ListaGenerica();
    lista1->insertarPrimero(10);
    lista1->insertarPrimero(20);
    lista1->insertarPrimero(5);
    lista1->imprimir();
    delete lista1;
    return 0;
}
