/* Una lista se comporta como genérica cuando las inserciones y extracciones se realizan en cualquier parte de la lista.*/
/*Problemas propuestos
Plantear una clase para administrar una lista genérica implementando los siguientes métodos:
a) Insertar un nodo al principio de la lista.**
b) Insertar un nodo al final de la lista.**
c) Insertar un nodo en la segunda posición. Si la lista está vacía no se inserta el nodo.**
d) Insertar un nodo en la ante última posición.**
e) Borrar el primer nodo.
f) Borrar el segundo nodo.
g) Borrar el último nodo.
h) Borrar el nodo con información mayor.
*/
#include <iostream>
using namespace std;
class ListaGenerica
{
private:
    class Nodo
    {
    public:
        int info;
        Nodo *sig;
    };
    Nodo *raiz;

public:
    ListaGenerica();
    ~ListaGenerica();
    // insertar
    void insertarAlPrincipio(int x);
    void insertarAlFinal(int x);
    void insertarSegundo(int x);
    void insertarAnteUltimo(int x);
    // borrar
    void borrarPrimero();
    void borrarSegundo();
    void borrarUltimo();
    void borrarMayor();
    void imprimir();
};
ListaGenerica::ListaGenerica()
{
    raiz = NULL;
}
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
// INSERTAR
void ListaGenerica::insertarAlPrincipio(int x)
{
    Nodo *nuevo = new Nodo;
    nuevo->info = x;
    nuevo->sig = raiz;
    raiz = nuevo;
}
void ListaGenerica::insertarAlFinal(int x)
{
    Nodo *nuevo = new Nodo;
    nuevo->info = x;
    Nodo *reco = raiz;
    while (reco->sig != NULL)
    {
        reco = reco->sig;
    }
    reco->sig = nuevo;
    nuevo->sig = NULL;
}
void ListaGenerica::insertarSegundo(int x)
{
    Nodo *nuevo = new Nodo;
    nuevo->info = x;
    if (raiz != NULL)
    {
        Nodo *siguiente = raiz->sig;
        raiz->sig = nuevo;
        nuevo->sig = siguiente;
    }
}
void ListaGenerica::insertarAnteUltimo(int x)
{
    if (raiz != NULL)
    {
        Nodo *nuevo = new Nodo();
        nuevo->info = x;
        if (raiz->sig == NULL)
        {
            // Hay un solo nodo.
            nuevo->sig = raiz;
            raiz = nuevo;
        }
        else
        {
            Nodo *atras = raiz;
            Nodo *reco = raiz->sig;
            while (reco->sig != NULL)
            {
                atras = reco;
                reco = reco->sig;
            }
            nuevo->sig = atras->sig;
            atras->sig = nuevo;
        }
    }
}
// BORRAR
void ListaGenerica::borrarPrimero()
{
    if (raiz != NULL)
    {
        Nodo *bor = raiz;
        raiz = raiz->sig;
        delete bor;
    }
}
void ListaGenerica::borrarSegundo()
{
    if (raiz != NULL && raiz->sig != NULL)
    {
        Nodo *bor = raiz->sig;
        Nodo *tercero = (raiz->sig)->sig;
        raiz->sig = tercero;
        delete bor;
    }
}
void ListaGenerica::borrarUltimo()
{
    if (raiz != NULL)
    {
        if (raiz->sig == NULL)
        {
            delete raiz;
            raiz = NULL;
        }
        else
        {
            Nodo *reco = raiz->sig;
            Nodo *atras = reco;
            while (reco->sig != NULL)
            {
                atras = reco;
                reco = reco->sig;
            }
            atras->sig = NULL;
            delete reco;
        }
    }
}
void ListaGenerica::borrarMayor()
{
    if (raiz != NULL)
    { // Primero encontramos donde se encuentra el mayor
        Nodo *reco = raiz;
        int may = raiz->info;
        while (reco != NULL)
        {
            if (reco->info > may)
            {
                may = reco->info;
            }
            reco = reco->sig;
        }
        // Luego comparamos en el recorrido cual es el primer valor que tiene esta informacion para borrarlo
        reco = raiz;
        Nodo *atras = raiz;
        Nodo *bor;
        while (reco != NULL)
        {
            if (reco->info == may)
            {
                if (reco == raiz)
                {
                    bor = raiz;
                    raiz = raiz->sig;
                    atras = raiz;
                    reco = raiz;
                    delete bor;
                }
                else
                {
                    atras->sig = reco->sig;
                    bor = reco;
                    reco = reco->sig;
                    delete bor;
                }
            }
            else
            {
                atras = reco;
                reco = reco->sig;
            }
        }
    }
}
void ListaGenerica::imprimir()
{
    Nodo *reco = raiz;
    cout << "Listado de componentes" << endl;
    while (reco != NULL)
    {
        cout << reco->info << "\t";
        reco = reco->sig;
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    ListaGenerica *lg = new ListaGenerica();
    lg->insertarAlPrincipio(10);
    lg->insertarAlPrincipio(45);
    lg->insertarAlPrincipio(23);
    lg->insertarAlPrincipio(89);
    lg->imprimir();
    cout << "Insertamos un nodo al final:\n";
    lg->insertarAlFinal(160);
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