#include <iostream>
using namespace std;
int main()
{
    cout << "Confeccionar un programa que lea por teclado tres números distintos y nos muestre el mayor." << endl;
    int num1, num2, num3, mayor;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    if (num1 > num2 && num1 > num3)
    {
        mayor = num1;
    }
    else if (num2 > num3)
    {
        mayor = num2;
    }
    else
    {
        mayor = num3;
    }
    cout << "El numero mayor es: ";
    cout << mayor;
    cin.get();
    cin.get();
    cout << "Se carga una fecha (día, mes y año) por teclado. Mostrar un mensaje si corresponde al primer trimestre del año"<<endl;
    int dia,mes,anio;
    cout<<"Ingrese el dia: ";cin>>dia;
    cout<<"Ingrese el mes: ";cin>>mes;
    cout<<"Ingrese el año: ";cin>>anio;
    if(mes>0&&mes<=3){
        cout<<"La fecha: ";cout<<dia;cout<<"/";cout<<mes;cout<<"/";cout<<anio;
        cout<<"\nCorresponde al primer trimestre";
    }else{
        cout<<"La fecha no corresponde al primer trimestre";
    }
    cin.get();
    cin.get();
return 0;
}