#include <iostream>
using namespace std;
class ArbolBinario
{
    class Nodo
    {
    public:
        int info;
        Nodo *izq;
        Nodo *der;
    };
    Nodo *raiz;
    void borrar(Nodo *reco);
    void imprimirPre(Nodo *reco);
    void imprimirEntre(Nodo *reco);
    void imprimirPost(Nodo *reco);

public:
    ArbolBinario();
    ~ArbolBinario();
    void insertar(int x);
    void imprimirPre();
    void imprimirEntre();
    void imprimirPost();
};
ArbolBinario::ArbolBinario()
{
    raiz = NULL;
}
ArbolBinario::~ArbolBinario()
{
    borrar(raiz);
}
void ArbolBinario::borrar(Nodo *reco)
{
    if (reco != NULL)
    {
        borrar(reco->izq);
        borrar(reco->der);
        delete reco;
    }
}
void ArbolBinario::insertar(int x)
{
    // Creamos el nodo a insertar con la informacion pertinente.
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    // Verificamos si el arbol esta vacio, en caso afirmativo el nodo sera la raiz
    if (raiz == NULL)
    {
        raiz = nuevo;
    }
    else
    {
        // Si no esta vacio creamos un nodo anterior y uno reco para ir moviendonos en el arbol
        Nodo *anterior, *reco;
        anterior = NULL;
        reco = raiz;
        // Nos movemos por las ramas hasta encontrar una nodo vacio.(Mientras no sea nulo)
        while (reco != NULL)
        {
            anterior = reco;
            // Comparamos si el valor a insertar es menor a la info del nodo que esta ocupado. Si es menor nos movemos por la rama izquierda si no nos movemos por la rama derecha
            if (x < reco->info)
            {
                reco = reco->izq;
            }
            else
            {
                reco = reco->der;
            }
        }
        // Una vez que encontramos un nodo vacio volvemos a comparar con el nodo anterior donde deberiamos insertar, si es menor a la izquierda sino a la derecha
        if (x < anterior->info)
        {
            anterior->izq = nuevo;
        }
        else
        {
            anterior->der = nuevo;
        }
    }
}
void ArbolBinario::imprimirPre()
{
    imprimirPre(raiz);
    cout << "\n";
}
void ArbolBinario::imprimirPre(Nodo *reco)
{ // Primero se visita el nodo Raiz luego el subarbol izquierdo y luego el derecho
    if (reco != NULL)
    {
        cout << reco->info << "-";
        imprimirPre(reco->izq);
        imprimirPre(reco->der);
    }
}
void ArbolBinario::imprimirEntre()
{
    imprimirEntre(raiz);
    cout << "\n";
}
void ArbolBinario::imprimirEntre(Nodo *reco)
{ // Primero se visita el subarbol izquierdo, luego la raiz y finalmente el subarbol derecho
    if (reco != NULL)
    {
        imprimirEntre(reco->izq);
        cout << reco->info << "-";
        imprimirEntre(reco->der);
    }
}
void ArbolBinario::imprimirPost()
{
    imprimirPost(raiz);
    cout << "\n";
}
void ArbolBinario::imprimirPost(Nodo *reco)
{ // Primero se visita el subarbol izquierdo, luego el subarbol derecho y por ultimo la raiz
    if (reco != NULL)
    {
        imprimirPost(reco->izq);
        imprimirPost(reco->der);
        cout << reco->info << "-";
    }
}
int main(int argc, char const *argv[])
{
    ArbolBinario *arbol = new ArbolBinario();
    arbol->insertar(100);
    arbol->insertar(50);
    arbol->insertar(150);
    arbol->insertar(75);
    arbol->insertar(25);
    cout << "Impresion preorden: ";
    arbol->imprimirPre();
    cout << "Impresion entreorden: ";
    arbol->imprimirEntre();
    cout << "Impresion postorden: ";
    arbol->imprimirPost();
    delete arbol;
    return 0;
}
