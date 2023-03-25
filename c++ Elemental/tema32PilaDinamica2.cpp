/*Plantear una clase que permita administrar un vector de enteros. En el constructor solicitar al operador que ingrese la cantidad de componentes que tendrá el vector y lo cree y localice en la pila dinámica. Hacer un método que lo imprima y finalmente en el destructor eliminar el espacio ocupado por el vector creado previamente.*/
#include <iostream>
using namespace std;
class Vector
{
    int *p;
    int tamanio;
    public:
    Vector();
    void cargar();
    void imprimir();
    ~Vector();
};
Vector::Vector(){
    cout<<"Ingrese el tamaño del vector: ";
    cin>>tamanio;
    p=new int[tamanio];//creacion en pila dinamica
}
void Vector::cargar(){
    for (int i = 0; i < tamanio; i++)
    {
        cout<<"Ingrese componente: ";
        cin>>p[i];
    }
}
void Vector::imprimir(){
    for (int i = 0; i < tamanio; i++)
    {
        cout<<p[i]<<"\t";
    }
    cout<<endl;
}
Vector::~Vector(){
    cout<<"Gracias por utilizar el programa.";
    delete []p;//libera el espacio de la pila dinamica
}


int main(int argc, char const *argv[])
{
    cout<<"Plantear una clase que permita administrar un vector de enteros. En el constructor solicitar al operador que ingrese la cantidad de componentes que tendrá el vector y lo cree y localice en la pila dinámica. Hacer un método que lo imprima y finalmente en el destructor eliminar el espacio ocupado por el vector creado previamente.\n"<<endl;
    Vector ve;
    ve.cargar();
    ve.imprimir();
    return 0;
}
