/*
Cuando implementamos un método y sabemos que no modificará en ningún momento atributos de la clase lo más conveniente es hacerlo explícito agregando la palabra "const" luego del nombre del método.

La definición de métodos constantes nos evita introducir errores de modificación de atributos

Como vemos los parámetros constantes y los métodos constantes nos permiten dejar más claro y seguro el código en cuanto a que pueden modificar.

Es importante hacer notar que el constructor y el destructor no pueden ser constantes. Casi siempre en un constructor inicializamos atributos y en el destructor liberamos espacio.
*/
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
    void imprimir() const;
    bool iguales(const ListaGenerica *l2) const;
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
// Hay que especificar cuando un metodo es const
void ListaGenerica::imprimir() const
{
    Nodo *reco = raiz;
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << endl;
}
bool ListaGenerica::iguales(const ListaGenerica *l2) const
{
    bool iguales = true;
    Nodo *reco1 = raiz;
    Nodo *reco2 = l2->raiz;
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
    lg1->insertarPrimero(20);
    lg1->insertarPrimero(30);
    lg1->insertarPrimero(52);
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
