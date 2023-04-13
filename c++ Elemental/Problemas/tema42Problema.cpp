/*
Plantear una clase para administrar una lista genérica doblemente encadenada implementando los siguientes métodos:
a) Insertar un nodo al principio de la lista.
b) Insertar un nodo al final de la lista.
c) Insertar un nodo en la segunda posición. Si la lista está vacía no se inserta el nodo.
d) Insertar un nodo en la ante última posición.
e) Borrar el primer nodo.
f) Borrar el segundo nodo.
g) Borrar el último nodo.
h) Borrar el nodo con información mayor.
*/
#include <iostream>
using namespace std;
class ListaGenericaDobleEncadenada
{
private:
    class Nodo
    {
    public:
        Nodo *ant;
        int info;
        Nodo *sig;
    };
    Nodo *raiz;

public:
    ListaGenericaDobleEncadenada();
    ~ListaGenericaDobleEncadenada();
    void insertarPrimero(int x);
    void insertarSegundo(int x);
    void insertarAnteUltimo(int x);
    void insertarUltimo(int x);
    void borrarPrimero();
    void borrarSegundo();
    void borrarUltimo();
    void borrarMayor();
    void imprimir();
};
ListaGenericaDobleEncadenada::ListaGenericaDobleEncadenada()
{
    raiz = NULL;
}
ListaGenericaDobleEncadenada::~ListaGenericaDobleEncadenada()
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
void ListaGenericaDobleEncadenada::insertarPrimero(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = raiz;
    if (raiz != NULL)
    {
        raiz->ant = nuevo;
    }
    raiz = nuevo;
}
void ListaGenericaDobleEncadenada::insertarSegundo(int x)
{
    if (raiz != NULL)
    {
        Nodo *nuevo = new Nodo();
        nuevo->info = x;
        nuevo->ant = raiz;
        if (raiz->sig != NULL)
        {
            Nodo *prox = raiz->sig;
            nuevo->sig = raiz->sig;
            prox->ant = nuevo;
        }
        else
        {
            nuevo->sig = NULL;
        }
        raiz->sig = nuevo;
    }
}
void ListaGenericaDobleEncadenada::insertarAnteUltimo(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    if (raiz->sig == NULL)
    {
        nuevo->sig = raiz;
        raiz->ant = nuevo;
        nuevo->ant = NULL;
        raiz = nuevo;
    }
    else
    {
        Nodo *reco = raiz;
        Nodo *ultimo = raiz->sig;
        while (ultimo->sig != NULL)
        {
            reco = reco->sig;
            ultimo = ultimo->sig;
        }
        nuevo->sig = ultimo;
        nuevo->ant = reco;
        ultimo->ant = nuevo;
        reco->sig = nuevo;
    }
}
void ListaGenericaDobleEncadenada::insertarUltimo(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    if (raiz == NULL)
    {
        raiz = nuevo;
        raiz->sig = NULL;
    }
    else
    {
        Nodo *reco = raiz;
        while (reco->sig != NULL)
        {
            reco = reco->sig;
        }
        reco->sig = nuevo;
        nuevo->ant = reco;
        nuevo->sig = NULL;
    }
}

void ListaGenericaDobleEncadenada::borrarPrimero()
{
    if (raiz != NULL)
    {
        Nodo *bor = raiz;
        if (raiz->sig != NULL)
        {
            raiz = raiz->sig;
            raiz->ant = NULL;
            delete bor;
        }
    }
}
void ListaGenericaDobleEncadenada::borrarUltimo()
{
    if (raiz != NULL)
    {
        Nodo *bor;
        if (raiz->sig == NULL)
        {
            bor = raiz;
            raiz = NULL;
        }
        else
        {
            Nodo *reco = raiz;
            while (reco->sig != NULL)
            {
                reco = reco->sig;
            }
            Nodo *anterior;
            anterior = reco->ant;
            anterior->sig = NULL;
            bor = reco;
        }
        delete bor;
    }
}
void ListaGenericaDobleEncadenada::borrarSegundo()
{
    if (raiz != NULL)
    {
        Nodo *bor;
        if (raiz->sig != NULL)
        {
            bor = raiz->sig;
            Nodo *tercero = raiz->sig->sig;
            raiz->sig = tercero;
            if (tercero != NULL)
            {
                tercero->ant = raiz;
            }
            delete bor;
        }
    }
}
void ListaGenericaDobleEncadenada::borrarMayor()
{

    if (raiz != NULL)
    {
        int mayor = raiz->info;
        Nodo *reco = raiz;
        while (reco != NULL)
        {
            if (reco->info > mayor)
            {
                mayor = reco->info;
            }
            reco = reco->sig;
        }
        reco = raiz;
        Nodo *bor;
        while (reco != NULL)
        {
            if (reco->info == mayor)
            {
                if (reco == raiz)
                {
                    bor = raiz;
                    raiz = raiz->sig;
                    if (raiz->sig != NULL)
                    {
                        raiz->ant = NULL;
                    }
                    delete bor;
                }
                else
                {
                    if (reco->sig == NULL)
                    {
                        bor = reco;
                        reco = reco->ant;
                        reco->sig = NULL;
                        delete bor;
                    }
                    else
                    {
                        Nodo *ante = reco->ant;
                        bor = reco;
                        reco = reco->sig;
                        ante->sig = reco;
                        reco->ant = ante;
                        delete bor;
                    }
                }
            }
            else
            {
                reco = reco->sig;
            }
        }
    }
}

// void ListaGenericaDobleEncadenada::borrar(int pos)
// {
//         {
//             Nodo *reco;
//             reco = raiz;
//             for (int i = 1; i < pos - 2; i++)
//             {
//                 reco = reco->sig;
//             }
//             Nodo *prox = reco->sig;
//             bor = prox;
//             reco->sig = prox->sig;
//             Nodo *siguiente = prox->sig;
//             if (siguiente != NULL)
//             {
//                 siguiente->ant = reco;
//             }
//         }
//         delete bor;
//     }
// }
void ListaGenericaDobleEncadenada::imprimir()
{
    Nodo *reco = raiz;
    cout << "Componentes de la lista: " << endl;
    while (reco != NULL)
    {
        cout << reco->info << "\t";
        reco = reco->sig;
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    ListaGenericaDobleEncadenada *lg = new ListaGenericaDobleEncadenada();
    lg->insertarPrimero(10);
    lg->insertarPrimero(45);
    lg->insertarPrimero(23);
    lg->insertarPrimero(89);
    lg->imprimir();
    cout << "Insertamos un nodo al final:\n";
    lg->insertarUltimo(160);
    lg->imprimir();
    cout << "Insertamos un nodo en la segunda posición:\n";
    lg->insertarSegundo(13);
    lg->imprimir();
    cout << "Insertamos un nodo en la anteultima posición:\n";
    lg->insertarAnteUltimo(600);
    lg->imprimir();
    cout << "Borramos el primer nodo de la lista:\n";
    lg->borrarPrimero();
    lg->imprimir();
    cout << "Borramos el segundo nodo de la lista:\n";
    lg->borrarSegundo();
    lg->imprimir();
    cout << "Borramos el ultimo nodo de la lista:\n";
    lg->borrarUltimo();
    lg->imprimir();
    cout << "Borramos el mayor de la lista:\n";
    lg->borrarMayor();
    lg->imprimir();
    return 0;
}
