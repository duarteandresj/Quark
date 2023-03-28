/* Un supermercado tiene tres cajas para la atención de los clientes.
Las cajeras tardan entre 7 y 11 minutos para la atención de cada cliente.
Los clientes llegan a la zona de cajas cada 2 ó 3 minutos. (Cuando el cliente llega, si todas las cajas tienen 6 personas, el cliente se marcha del supermercado)
Cuando el cliente llega a la zona de cajas elige la caja con una cola menor.

Realizar una simulación durante 8 horas y obtener la siguiente información:
a - Cantidad de clientes atendidos por cada caja.
b - Cantidad de clientes que se marcharon sin hacer compras.
c - Tiempo promedio en cola.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
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
    int cantidad();
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
int Cola::cantidad()
{
    Nodo *reco = raiz;
    int cant = 0;
    while (reco != NULL)
    {
        cant++;
        reco = reco->sig;
    }
    return cant;
}

class Supermercado
{
public:
    void simulacion();
};
void Supermercado::simulacion()
{ // habilitamos aleatorio
    srand(time(NULL));
    // estado 0 es libre
    int estado1 = 0, estado2 = 0, estado3 = 0;
    // valores entre 2 y 3 de forma aleatoria llegada de cliente
    int llegada = rand() % 2 + 2;
    // Cuantos se van sin ser atendidos:
    int seFueron = 0;
    int salida1 = -1, salida2 = -1, salida3 = -1;
    int cantAtendidos1 = 0, cantAtendidos2 = 0, cantAtendidos3 = 0;
    // para hacer el promedio de tiempo en cola
    int tiempoEnCola = 0;
    int cantEnCola = 0;
    Cola *cola1 = new Cola();
    Cola *cola2 = new Cola();
    Cola *cola3 = new Cola();

    // i = minutos 8horas->480min
    for (int i = 0; i < 480; i++)
    {
        if (llegada == i)
        { // VERIFICO QUE CAJA ESTA LIBRE
            if (estado1 == 0)
            {
                estado1 = 1;
                // tarda entre 7 y 11 minutos en ser atendido + el minuto de entrada
                salida1 = i + 7 + rand() % 5;
            }
            else if (estado2 == 0)
            {
                estado2 = 1;
                salida2 = i + 7 + rand() % 5;
            }
            else if (estado3 == 0)
            {
                estado3 = 1;
                salida3 = i + 7 + rand() % 5;
            }
            // si estan todas ocupadas y todas tienen 6 personas me voy del super.Si no me tengo que ir a la cola con menor cantidad de personas
            else
            {
                if (cola1->cantidad() == 6 && cola1->cantidad() == 6 && cola1->cantidad() == 6)
                {
                    seFueron++;
                }
                else
                {
                    if (cola1->cantidad() <= cola2->cantidad() && cola1->cantidad() <= cola3->cantidad())
                    {
                        cola1->insertar(i);
                    }
                    else if (cola2->cantidad() <= cola3->cantidad())
                    {
                        cola2->insertar(i);
                    }
                    else
                    {
                        cola3->insertar(i);
                    }
                }
            }
            llegada = i + 2 + rand() % 2;
        }
        if (salida1 == i)
        { // cuando sale queda libre la caja para el siguiente;
            estado1 = 0;
            cantAtendidos1++;
            if (!cola1->vacia())
            {
                int tiempoAnt = cola1->extraer();
                estado1 = 1;
                salida1 = i + 7 + rand() % 5;
                tiempoEnCola = tiempoEnCola + (i - tiempoAnt);
                cantEnCola++;
            }
        }
        if (salida2 == i)
        { // cuando sale queda libre la caja para el siguiente;
            estado2 = 0;
            cantAtendidos2++;
            if (!cola2->vacia())
            {
                int tiempoAnt = cola2->extraer();
                estado2 = 1;
                salida2 = i + 7 + rand() % 5;
                tiempoEnCola = tiempoEnCola + (i - tiempoAnt);
                cantEnCola++;
            }
        }if (salida3 == i)
        { // cuando sale queda libre la caja para el siguiente;
            estado3 = 0;
            cantAtendidos3++;
            if (!cola3->vacia())
            {
                int tiempoAnt = cola3->extraer();
                estado3 = 1;
                salida3 = i + 7 + rand() % 5;
                tiempoEnCola = tiempoEnCola + (i - tiempoAnt);
                cantEnCola++;
            }
        }
    }
    cout << "Atendidos en:"<<endl;
    cout<<"caja 1: " << cantAtendidos1 << endl;
    cout<<"caja 2: " << cantAtendidos2 << endl;
    cout<<"caja 3: " << cantAtendidos3 << endl;
    cout<<endl;
    cout << "Se fueron: " << seFueron << endl;
    if (cantEnCola>0)
    {
        double promedio=(double)tiempoEnCola/cantEnCola;
    cout<<"Promedio de tiempo en cola: "<<promedio<<endl;

    }
    
}

int main(int argc, char const *argv[])
{
    Supermercado *sup = new Supermercado;
    sup->simulacion();
    delete sup;
    return 0;
}
