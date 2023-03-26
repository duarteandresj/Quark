/*Hacer el gráfico de la memoria e indicar que se imprime en pantalla al ejecutar este programa:
*/#include<iostream>

using namespace std;

int main()
{
    int x1 = 50;
    int x2 = 100;
    int *pun1, *pun2;
    pun1 = &x1;
    pun2 = pun1;
    *pun1 = 2000;
    cout << x1; //valor de x1,luego que el puntero lo modificara=2000
    cout << "\n";
    cout << x2;//valor de x2 sin modificar =100
    cout << "\n";
    cout << *pun1;//valor del puntero1 que es igual a x1
    cout << "\n";
    cout << *pun2;//valor de puntero2 = puntero1 osea a la direccion de x1;
    cout << "\n";
    pun2 = &x2;
    x1 = 1;
    x2 = 2;
    cout << *pun1;//valor del puntero luego de modificar la variable
    cout << "\n";
    cout << *pun2;//valor del puntero luego de modificar donde apunta y modificar el valor de x
    cout << "\n";
    *pun1 = 500;
    *pun2 = 600;
    cout << x1;//modificacion del valor de la variable a traves del puntero
    cout << "\n";
    cout << x2;//modificacion del valor de la variable a traves del puntero
    return 0;
}