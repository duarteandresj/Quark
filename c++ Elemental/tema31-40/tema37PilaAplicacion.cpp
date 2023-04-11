/*LIFO last in first out*/
/*Este práctico tiene por objetivo mostrar la importancia de las pilas en las Ciencias de la Computación y más precisamente en la programación de software de bajo nivel.
Se debe desarrollar una clase que tenga las siguientes responsabilidades (clase Formula):
    - Ingresar una fórmula que contenga paréntesis, corchetes y llaves.
    - Validar que los ( ) [] y {} estén correctamente balanceados.
Para la solución de este problema la clase formula tendrá un atributo de la clase Pila.
    El algoritmo de validación es el siguiente:

    Analizamos caracter a caracter la presencia de los paréntesis, corchetes y llaves.
    Si vienen símbolos de apertura los almacenamos en la pila.
    Si vienen símbolos de cerrado extraemos de la pila y verificamos si está el mismo símbolo pero de apertura: en caso negativo podemos inferir que la fórmula no está correctamente balanceada.
    Si al finalizar el análisis del último caracter de la fórmula la pila está vacía podemos concluir que está correctamente balanceada.
*/
#include <iostream>
#include <string.h>
using namespace std;
class Pila
{
private:
    class Nodo
    {
    public:
        char simbolo;
        Nodo *sig;
    };
    Nodo *raiz;

public:
    Pila();
    ~Pila();
    void insertar(char s);
    char extraer();
    bool vacia();
};
Pila::Pila()
{
    raiz = NULL;
}
void Pila::insertar(char s)
{
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->simbolo = s;
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
char Pila::extraer()
{
    if (raiz != NULL)
    {
        char letra = raiz->simbolo;
        Nodo *bor = raiz;
        raiz = raiz->sig;
        delete bor;
        return letra;
    }
    else
    {
        return -1;
    }
}
bool Pila::vacia()
{
    bool isVacia = false;
    if (raiz == NULL)
    {
        isVacia = true;
    }
    return isVacia;
}

Pila::~Pila()
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
class Formula
{
    char cadena[100];

public:
    Formula();
    bool isBalanceada();
};
Formula::Formula()
{
    cout << "Ingrese formula con llaves,corchetes y parentesis: " << endl;
    cin.getline(cadena, 100);
}

bool Formula::isBalanceada()
{
    Pila *pila1;
    pila1 = new Pila();
    for (int i = 0; i < strlen(cadena); i++)
    {
        if (cadena[i] == '(' || cadena[i] == '[' || cadena[i] == '{')
        {
            pila1->insertar(cadena[i]);
        }
        else
        {
            if (cadena[i] == ')')
            {
                if (pila1->extraer() != '(')
                {
                    return false;
                }
            }
            else if (cadena[i] == ']')
            {
                if (pila1->extraer() != '[')
                {
                    return false;
                }
            }
            else if (cadena[i] == '}')
            {
                if (pila1->extraer() != '{')
                {
                    return false;
                }
            }
        }

    }
    if (pila1->vacia())
    {
        return true;
    }else{
        return false;
    }
    
}


int main(int argc, char const *argv[])
{
   Formula *formula1;
   formula1=new Formula;
   if (formula1->isBalanceada())
   {
    cout<<"La Formula esta correctamente formulada"<<endl;
   }else{
    cout<<"ESTA DESBALANCEADA";
   }
   delete formula1;
   cin.get();
   cin.get();
    return 0;
}
