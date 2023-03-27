/* FIFO first int first out

Confeccionaremos un programa que permita administrar una lista tipo cola. Desarrollaremos los métodos de insertar, extraer, vacia e imprimir, además del constructor y destructor.
*/
#include <iostream>
using namespace std;
class Cola
{
    class Nodo
    {
    public:
        int info;
        Nodo *sig;
    };
    Nodo *raiz;
    Nodo *fondo;

public:
    Cola();
    ~Cola();
    void insertar(int x);
    int extraer();
    bool vacia();
    void imprimir();
};
Cola::Cola()
{
    raiz = NULL;
    fondo = NULL;
}
Cola::~Cola()
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
void Cola::insertar(int x)
{
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = NULL;
    if (vacia())
    {
        raiz = nuevo;
        fondo = nuevo;
    }
    else
    {
        fondo->sig = nuevo;
        fondo = nuevo;
    }
}
bool Cola::vacia()
{
    bool isVacia = false;
    if (raiz == NULL)
    {
        isVacia = true;
    }
    return isVacia;
}
int Cola::extraer()
{
    if (!vacia())
    {
        int informacion = raiz->info;
        Nodo *bor = raiz;
        if (raiz == fondo)
        {
            raiz = NULL;
            fondo = NULL;
        }
        else
        {
            raiz = raiz->sig;
        }
        delete bor;
        return informacion;
    }
    else
    {
        return -1;
    }
}
void Cola::imprimir()
{
    Nodo *reco = raiz;
    cout << "Lista de los elementos de la cola: " << endl;
    while (reco != NULL)
    {
        cout << reco->info << "\t";
        reco = reco->sig;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    Cola *cola1 = new Cola();
    cola1->insertar(5);
    cola1->insertar(10);
    cola1->insertar(15);
    cola1->imprimir();
    cout<<"Extraemos uno de la cola y luego imprimimos";
    cola1->extraer();
    cola1->imprimir();
    delete cola1;
    cin.get();
    cin.get();
    return 0;
}
/*
raiz apunta al principio de la lista y fondo al final.
en el constructor inicializamos los dos punteros con NULL.
Y en el destructor procedemos liberar cada nodo
*/