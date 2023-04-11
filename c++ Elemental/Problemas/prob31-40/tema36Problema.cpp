/*LIFO last in first out*/
/*Inicialmente la PILA está vacía y decimos que el puntero raiz apunta a NULL
 Recordemos que raiz es el puntero externo a la lista que almacena la dirección del primer nodo.
 pila quedará vacía y no se podrá extraer otros valores (avisar que la pila está vacía)*/
/*Confeccionar una clase que administre una lista tipo pila (se debe poder insertar, extraer e imprimir los datos de la pila)
Agregar a la clase Pila un método que retorne la cantidad de nodos y otro que indique si esta vacía.
Agregar un método a la clase Pila que retorne la información del primer nodo de la Pila sin borrarlo.
*/
#include <iostream>
using namespace std;
class Pila
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
    Pila();
    ~Pila();
    void insertar(int x);
    int extraer();
    void imprimir();
    int cantidad();
    bool vacia();
    int retornar();
};
Pila::Pila()
{
    raiz = NULL;
}
void Pila::insertar(int x)
{
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
    if (raiz == NULL)
    {
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else
    {
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

void Pila::imprimir()
{
    Nodo *reco = raiz;
    cout << "Lista de los elementos de la pila: " << endl;
    while (reco != NULL)
    {
        cout << reco->info << "\t";
        reco = reco->sig;
    }
    cout << endl;
}

int Pila::extraer()
{
    if (raiz != NULL)
    {int informacion=raiz->info;
    Nodo *bor=raiz;
    raiz=raiz->sig;
    delete bor;
    return informacion;
    }else{
        return -1;
    }
}
Pila::~Pila(){
    Nodo *reco=raiz;
    Nodo *bor;
    while (reco!=NULL)
    {bor=reco;
    reco=reco->sig;
    delete bor;
    }   
}
int Pila::cantidad(){
    Nodo *reco=raiz;
    int cant=0;
    while (reco!=NULL)
    {
        cant++;
        reco=reco->sig;
    }
    return cant;
}

bool Pila::vacia(){
    if (raiz==NULL)
    {
        return true;
    }else {
        return false;
    }
    
}
int Pila::retornar(){
    if (raiz!=NULL)
    {
        return raiz->info;
    }
    return -1;
}



int main(int argc, char const *argv[])
{
    Pila *pila1;
    pila1=new Pila();
    pila1->insertar(10);
    pila1->insertar(40);
    pila1->insertar(50);
    cout<<"IMPRIMIMOS\n"<<endl;
    pila1->imprimir();
    cout<<"La cantidad de elementos es: "<<pila1->cantidad()<<endl;
    cout<<"El primer elemento(Elemento mas arriba) de la pila es: "<<pila1->retornar()<<endl;
    while (!pila1->vacia())
    {
        cout<<"Extraemos el ultimo elemento de la pila(LIFO): "<<pila1->extraer()<<endl;
    }

    
    delete pila1;

    return 0;
}
