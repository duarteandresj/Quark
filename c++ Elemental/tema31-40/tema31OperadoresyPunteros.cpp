/*Los operadores de incremento y decremento ++ y -- pueden utilizarse con punteros.
Estos operadores aplicados a un puntero incrementan o decrementan la dirección que contiene el puntero según el tipo de dato a que apunta.*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char cad[5];
    strcpy_s(cad, 5, "Sol");
    char *pc;
    pc = cad;           // No se pone el &
    cout << pc << endl; // sol
    pc++;
    cout << pc << endl; // ol
    pc++;
    cout << pc << endl; // l
    pc--;
    cout << pc << endl; // ol
    pc--;
    cout << pc << endl; // sol
    int vector[5] = {10, 25, 30, 45, 50};
    int *pe;
    pe = &vector[0];
    pe++;
    cout <<*pe<<endl; // 25
    pe++;
    cout << *pe<<endl; // 30
    pe++;
    pe++;
    pe++;
    cout << *pe<<endl; // valor por defecto de un entero
    pe=&vector[3];
    cout << *pe<<endl; //45
    pe--;
    cout << *pe<<endl; // 30    


    return 0;
}
