#include <iostream>
using namespace std;
/*  PUNTEROS 
<tipo de dato al que apunta> * <nombre del puntero>;*/
/*Confeccionar un programa que defina dos punteros a tipos de datos int y float. Acceder mediante estos punteros a otras variables de tipo int y float.*/
int main(int argc, char const *argv[])
{
    int x=20;
    int *pe;
    pe=&x;
    cout<<x<<endl;
    cout<<*pe<<endl;
    *pe=5;
    cout<<x<<endl;
    float valor=10.9;
    float *pf;
    pf=&valor;
    cout<<"Direccion de memoria: "<<pf<<endl;
    cout<<"Valor de memoria: "<<*pf<<endl;


    return 0;
}