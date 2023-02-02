#include<iostream>
using namespace std;
int main(){
    cout<<"Confeccionar un programa que pida por teclado tres notas de un alumno, calcule el promedio e imprima alguno de estos mensajes: \nSi el promedio es >=7 mostrar 'Promocionado'.\nSi el promedio es >=4 y <7 mostrar 'Regular'.\nSi el promedio es <4 mostrar 'Reprobado'."<<endl;
    double nota1,nota2,nota3;
    cout<<"Ingrese primer nota: ";
    cin>>nota1;
    cout<<"Ingrese segunda nota: ";
    cin>>nota2;
    cout<<"Ingrese tercer nota: ";
    cin>>nota3;
    double promedio=(nota1+nota2+nota3)/3;
    if (promedio>=7.0)
    { cout<<"Promocionado";
    }else if(promedio>=4.0){
        cout<<"Regular";
    }else{
        cout<<"Reprobado";
    }
    cin.get();
    cin.get();
return 0;
    



}