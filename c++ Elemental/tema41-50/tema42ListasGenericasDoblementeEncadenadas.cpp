/*Resolveremos algunos métodos para administrar listas genéricas empleando listas doblemente encadenadas para analizar la mecánica de enlace de nodos.
Muchos de los métodos, para listas simple y doblemente encadenadas no varía, como por ejemplo: el constructor, destructor, vacia, cantidad, etc.*/
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
    int cantidad();
    void insertar(int pos, int x);
    int extraer(int pos);
    void borrar(int pos);
    void intercambiar(int pos1, int pos2);
    bool vacia();
    int mayor();
    void imprimir();
    int posMayor();
    bool ordenada();
    bool existe(int x);
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
int ListaGenericaDobleEncadenada::cantidad()
{
    Nodo *reco = raiz;
    int cant = 0;
    while (reco != NULL)
    {
        reco = reco->sig;
        cant++;
    }
    return cant;
}
void ListaGenericaDobleEncadenada::insertar(int pos, int x)
{ // verificamos que no haya error de index
    if (pos <= cantidad() + 1)
    {
        Nodo *nuevo = new Nodo();
        nuevo->info = x;
        if (pos == 1)
        {
            nuevo->sig = raiz;
            if (raiz != NULL)
            {
                raiz->ant = nuevo;
            }
            raiz = nuevo;
        }
        else if (pos == cantidad() + 1)
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
        else
        {
            Nodo *reco = raiz;
            for (int i = 1; i < pos - 2; i++)
            {
                reco = reco->sig;
            }
            Nodo *siguiente = reco->sig;
            reco->sig = nuevo;
            nuevo->ant = reco;
            nuevo->sig = siguiente;
            siguiente->ant = nuevo;
        }
    }
}
int ListaGenericaDobleEncadenada::extraer(int pos)
{
    if (pos <= cantidad())
    {
        int informacion;
        Nodo *bor;
        if (pos == 1)
        {
            informacion = raiz->info;
            bor = raiz;
            raiz = raiz->sig;
            if (raiz != NULL)
            {
                raiz->ant = NULL;
            }
        }
        else
        {
            Nodo *reco = raiz;
            for (int i = 1; i < pos - 2; i++)
            {
                reco = reco->sig;
            }
            Nodo *prox = reco->sig;
            bor = prox;
            reco->sig = prox->sig;
            Nodo *siguiente = prox->sig;
            if (siguiente != NULL)
            {
                siguiente->ant = reco;
            }
            informacion = prox->info;
        }
        delete bor;
        return informacion;
    }
    else
    {
        return -1;
    }
}
void ListaGenericaDobleEncadenada::borrar(int pos)
{
    if (pos <= cantidad())
    {
        Nodo *bor;
        if (pos == 1)
        {
            bor = raiz;
            raiz = raiz->sig;
            if (raiz != NULL)
            {
                raiz->ant = NULL;
            }
        }
        else
        {
            Nodo *reco;
            reco = raiz;
            for (int i = 1; i < pos - 2; i++)
            {
                reco = reco->sig;
            }
            Nodo *prox = reco->sig;
            bor = prox;
            reco->sig = prox->sig;
            Nodo *siguiente = prox->sig;
            if (siguiente != NULL)
            {
                siguiente->ant = reco;
            }
        }
        delete bor;
    }
}
void ListaGenericaDobleEncadenada::intercambiar(int pos1, int pos2)
{
    if (pos1 <= cantidad() && pos2 <= cantidad())
    {
        Nodo *reco1 = raiz;
        for (int i = 1; i < pos1; i++)
        {
            reco1 = reco1->sig;
        }
        Nodo *reco2 = raiz;
        for (int i = 1; i < pos2; i++)
        {
            reco2 = reco2->sig;
        }
        int aux = reco1->info;
        reco1->info = reco2->info;
        reco2->info = aux;
    }
}
bool ListaGenericaDobleEncadenada::vacia()
{
    if (raiz != NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int ListaGenericaDobleEncadenada::mayor()
{
    if (!vacia())
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
        return mayor;
    }
    else
    {
        return -1;
    }
}
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
int ListaGenericaDobleEncadenada::posMayor()
{
    if (!vacia())
    {
        int mayor = raiz->info;
        int x = 1;
        int pos = x;
        Nodo *reco = raiz;
        while (reco != NULL)
        {
            if (reco->info > mayor)
            {
                mayor = reco->info;
                pos = x;
            }
            reco = reco->sig;
            x++;
        }
        return pos;
    }
    else
    {
        return -1;
    }
}
bool ListaGenericaDobleEncadenada::ordenada()
{
    if (cantidad() > 1)
    {
        Nodo *reco1 = raiz;
        Nodo *reco2 = raiz->sig;
        while (reco2 != NULL)
        {
            if (reco2->info < reco1->info)
            {
                return false;
            }
            reco1 = reco1->sig;
            reco2 = reco2->sig;
        }
    }
    return true;
}
bool ListaGenericaDobleEncadenada::existe(int x)
{
    Nodo *reco = raiz;
    while (reco != NULL)
    {
        if (reco->info == x)
        {
            return true;
        }
        reco = reco->sig;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    ListaGenericaDobleEncadenada *lg = new ListaGenericaDobleEncadenada();
    lg->insertar(1, 10);
    lg->insertar(2, 20);
    lg->insertar(3, 30);
    lg->insertar(2, 15);
    lg->insertar(1, 115);
    lg->imprimir();
    cout << "Luego de Borrar el primero\n";
    lg->borrar(1);
    lg->imprimir();
    cout << "Luego de Extraer el segundo\n";
    lg->extraer(2);
    lg->imprimir();
    if (lg->existe(20))
        cout << "Se encuentra el 20 en la lista\n";
    else
        cout << "No se encuentra el 20 en la lista\n";
    cout << "La posición del mayor es:" << lg->posMayor() << "\n";
    if (lg->ordenada())
        cout << "La lista esta ordenada de menor a mayor\n";
    else
        cout << "La lista no esta ordenada de menor a mayor\n";
    cout << "Luego de Intercambiar el primero con el tercero\n";
    lg->intercambiar(1, 3);
    lg->imprimir();
    if (lg->ordenada())
        cout << "La lista esta ordenada de menor a mayor\n";
    else
        cout << "La lista no esta ordenada de menor a mayor\n";
    delete lg;
    return 0;
}
