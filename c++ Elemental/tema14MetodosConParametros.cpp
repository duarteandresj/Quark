#include <iostream>
using namespace std;
// Confeccionar una clase que permita ingresar valores enteros por teclado y nos muestre la tabla de multiplicar de dicho valor. Finalizar el programa al ingresar el -1.
class TablaMultiplicar
{
private:
    void calcular(int v);

public:
    void cargarValor();
};
void TablaMultiplicar::calcular(int v)
{
    for (int i = 1; i <= 10; i++)
    {
    
            cout<<v;
            cout<<"*";
            cout<<i;
            cout<<"=";
            cout << i * v<<endl;
    
    }
    cout << "\n";
}
void TablaMultiplicar::cargarValor()
{
    int valor;
    do
    {
        cout << "Ingrese un valor (-1 para terminar): ";
        cin >> valor;
        if (valor != -1)
        {
            calcular(valor);
        }
        else
        {
            cout << "Ha decidido terminar la ejecucion" << endl;
        }

    } while (valor != -1);
}
//Confeccionar una clase que permita ingresar tres valores por teclado. Luego mostrar el mayor y el menor. Retornar dichos valores mediante el return.
class MayorMenor{
private:
int getMayor(int v1,int v2,int v3);
int getMenor(int v1,int v2,int v3);
public:
void cargarValores();
};
int MayorMenor::getMayor(int v1,int v2,int v3){
    int aux;
    if (v1>v2&&v1>v3)
    {aux=v1;
    }else if(v2>v3){
        aux=v2;
    }else{
        aux=v3;
    }
    return aux; 
}
int MayorMenor::getMenor(int v1,int v2, int v3){
    int aux;
    if (v1<v2&&v1<v3)
    {aux=v1;
    }else if(v2<v3){
        aux=v2;
    }else{
        aux=v3;
    }
    return aux; 
}
void MayorMenor::cargarValores(){
int n1,n2,n3;
cout<<"Ingrese los tres valores a evaluar: \n";
cin>>n1;cin>>n2;cin>>n3;
cout<<"De los valores ingresados el: \n";
cout<<"El mayor es: ";cout<<getMayor(n1,n2,n3)<<endl;
cout<<"El menor es: ";cout<<getMenor(n1,n2,n3)<<endl;
}

int main()
{
    cout << "Confeccionar una clase que permita ingresar valores enteros por teclado y nos muestre la tabla de multiplicar de dicho valor. Finalizar el programa al ingresar el -1." << endl;
    TablaMultiplicar tablita;
    tablita.cargarValor();
    cin.get();
    cin.get();
    cout<<"Confeccionar una clase que permita ingresar tres valores por teclado. Luego mostrar el mayor y el menor. Retornar dichos valores mediante el return."<<endl;
    MayorMenor maxYMin;
    maxYMin.cargarValores();
    cin.get();
    cin.get();
    return 0;
}