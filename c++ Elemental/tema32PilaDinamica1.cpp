/*Definir un vector de 5 elementos y localizarlo en la pila dinámica.*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int *p;
    p = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese el elemento: ";
        cin >> p[i];
    }
    cout << "Contenido del vector:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << "\t";
    }
    delete[] p;

    return 0;
}
/*Para crear un vector en la pila dinámica debemos utilizar el operador new:

  int *p;
  p=new int[5];
  distinta la sintaxis a la creación de un vector estático: int p[5]


  otro punto nuevo a tener en cuenta cuando trabajamos con variables localizadas en la pila dinámica es devolver el espacio utilizado:

  delete []p;
  */
