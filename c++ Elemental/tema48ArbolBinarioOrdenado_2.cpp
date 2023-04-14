/*Problema 2:
Confeccionar una clase que permita insertar un entero en un árbol binario ordenado verificando que no se encuentre previamente dicho número.
Desarrollar los siguientes métodos:
1 - Retornar la cantidad de nodos del árbol.
2 - Retornar la cantidad de nodos hoja del árbol.
3 - Imprimir en entre orden.
4 - Imprimir en entre orden junto al nivel donde se encuentra dicho nodo.
5 - Retornar la altura del árbol.
6 - Imprimir el mayor valor del árbol.
7 - Borrar el nodo menor del árbol.*/
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
    int cant;
    int altura;
    void borrar(Nodo *reco);
    void imprimirEntre(Nodo *reco);
    void cantidad(Nodo *reco);
    void cantidadNodosHoja(Nodo *reco);
    void imprimirEntreConNivel(Nodo *reco, int nivel);
    void retornarAltura(Nodo *reco, int nivel);

public:
    ArbolBinario();
    ~ArbolBinario();
    void insertar(int x);
    bool existe(int x);
    void imprimirEntre();
    int cantidad();
    int cantidadNodosHoja();
    void imprimirEntreConNivel();
    int retornarAltura();
    void mayorValor();
    void borrarMenor();
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
    if (!existe(x))
    {
        Nodo *nuevo = new Nodo();
        nuevo->info = x;
        nuevo->izq = NULL;
        nuevo->der = NULL;
        if (raiz == NULL)
        {
            raiz = nuevo;
        }
        else
        {
            Nodo *anterior, *reco;
            anterior = NULL;
            reco = raiz;
            while (reco != NULL)
            {
                anterior = reco;
                if (x < reco->info)
                {
                    reco = reco->izq;
                }
                else
                {
                    reco = reco->der;
                }
            }
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
}
bool ArbolBinario::existe(int x)
{
    /*Para verificar si ya existe el valor en algun nodo hacemos un recorrido del arbol.
    Comparamos el valor actual del recorrido contra el valor que queremos agregar. Si el valor a agregar es mayor al actual continuamos el recorrido por la derecha si no por la izquierda.
    */
    Nodo *reco = raiz;
    while (reco != NULL)
    {
        if (x == reco->info)
        {
            return true;
        }
        else
        {
            if (x > reco->info)
            {
                reco = reco->der;
            }
            else
            {
                reco = reco->izq;
            }
        }
    }
    return false;
}
int ArbolBinario::cantidad()
{ // Inicializamos la variable global cant=0 y con cada visita a un nodo incrementamos su valor
    cant = 0;
    cantidad(raiz);
    return cant;
}
void ArbolBinario::cantidad(Nodo *reco)
{
    if (reco != NULL)
    {
        cant++;
        // Hacemos un recorrido del arbol y con cada nodo distinto a nulo aumentamos la variable cant
        cantidad(reco->izq);
        cantidad(reco->der);
    }
}
int ArbolBinario::cantidadNodosHoja()
{
    cant = 0;
    cantidadNodosHoja(raiz);
    return cant;
}
void ArbolBinario::cantidadNodosHoja(Nodo *reco)
{
    if (reco != NULL)
    {
        // Para saber cuantos nodos hojas hay se debe verificar que el nodo cumpla con lo de ser hoja. Lo cual seria, no tener nodos descendientes es decir, ser un nodo terminal.
        if (reco->izq == NULL && reco->der == NULL)
        {
            cant++;
        }
        cantidadNodosHoja(reco->izq);
        cantidadNodosHoja(reco->der);
    }
}
void ArbolBinario::imprimirEntreConNivel()
{
    imprimirEntreConNivel(raiz, 1);
    cout << "\n";
}
void ArbolBinario::imprimirEntreConNivel(Nodo *reco, int nivel)
{
    if (reco != NULL)
    { //Cada vez que descendemos por algun arbol el nivel se incrementa respectivamente de que tan abajo estemos.
        imprimirEntreConNivel(reco->izq, nivel + 1);
        cout << reco->info << "(" << nivel << ")-";
        imprimirEntreConNivel(reco->der, nivel + 1);
    }
}
int ArbolBinario::retornarAltura()
{
    altura = 0;
    retornarAltura(raiz, 1);
    return altura;
}
void ArbolBinario::retornarAltura(Nodo *reco, int nivel)
{
    if (reco != NULL)
    {//Al ir visitando cada nodo, se compara si el nivel es mayor a la altura guardada y si es asi se modifica el valor de altura
        retornarAltura(reco->izq, nivel + 1);
        if (nivel > altura)
        {
            altura = nivel;
        }
        retornarAltura(reco->der, nivel + 1);
    }
}
void ArbolBinario::mayorValor()
{//Al conocer que el mayor valor se encuentra siempre a la derecha, se procede a ir al nodo que se encuentre mas a la derecha para obtener su valor
    if (raiz != NULL)
    {
        Nodo *reco = raiz;
        while (reco->der != NULL)
        {
            reco = reco->der;
        }
        cout << "Mayor valor del arbol: " << reco->info;
    }
}
void ArbolBinario::borrarMenor()
{//Al querer borrar el menor de todos nos dirigimos al nodo mas a la izquierda y verificamos que no tenga nodo a su derecha, si llega a tener debemos conectar este con el anterior en el recorrido para dejarlo como la nueva conexion.
    if (raiz != NULL)
    {
        Nodo *bor;
        //Si no hay nodos a la izquierda de raiz debemos borrar raiz y el primer nodo a la derecha pasa a ser la nueva raiz.
        if (raiz->izq == NULL)
        {
            bor = raiz;
            raiz = raiz->der;
            delete bor;
        }
        else
        {
            Nodo *atras = raiz;
            Nodo *reco = raiz->izq;
            while (reco->izq != NULL)
            {
                atras = reco;
                reco = reco->izq;
            }
            atras->izq = reco->der;
            delete reco;
        }
    }
}

void ArbolBinario::imprimirEntre()
{
    imprimirEntre(raiz);
    cout << "\n";
}
void ArbolBinario::imprimirEntre(Nodo *reco)
{
    if (reco != NULL)
    {
        imprimirEntre(reco->izq);
        cout << reco->info << "-";
        imprimirEntre(reco->der);
    }
}
int main(int argc, char const *argv[])
{
    ArbolBinario *arbol1 = new ArbolBinario();
    arbol1->insertar(100);
    arbol1->insertar(50);
    arbol1->insertar(25);
    arbol1->insertar(75);
    arbol1->insertar(150);
    arbol1->insertar(30);

    cout << "Impresion entreorden: ";
    arbol1->imprimirEntre();
    cout << "Cantidad de nodos del árbol:" << arbol1->cantidad() << "\n";
    cout << "Cantidad de nodos hoja:" << arbol1->cantidadNodosHoja() << "\n";
    cout << "Impresion en entre orden junto al nivel del nodo:";
    arbol1->imprimirEntreConNivel();
    cout << "Artura del arbol:";
    cout << arbol1->retornarAltura();
    cout << "\n";
    arbol1->mayorValor();
    cout << "\n";
    arbol1->borrarMenor();
    cout << "Luego de borrar el menor:";
    arbol1->imprimirEntre();
    delete arbol1;
    return 0;
}
