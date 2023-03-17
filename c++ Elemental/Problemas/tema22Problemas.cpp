/*Confeccionar una clase que represente un empleado. Definir como atributos su nombre y su sueldo. En el constructor cargar los atributos y luego en otro método imprimir sus datos y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)*/
#include <iostream>
using namespace std;
class Empleado
{
private:
 char nombre[25];
 double sueldo;
public:
    Empleado();
    void imprimir();
    void pagaImpuesto();
};
Empleado::Empleado()
{ cout<<"Ingrese nombre del empleado"<<endl;
cin.getline(nombre,25);
cout<<"Ingrese sueldo del mismo"<<endl;
cin>>sueldo;
}

void Empleado::imprimir()
{
    cout<<"EMPLEADO\nNombre: "<<nombre<<"\nSueldo: "<<sueldo<<endl;
}
void Empleado::pagaImpuesto(){
    cout<<"El empleado "<<nombre;
    if (sueldo>3000)
    {
        cout<<" DEBE pagar impuestos";
    }else{
        cout<<" NO DEBE pagar impuestos";
    }
    cin.get();
}
/*Implementar la clase Operaciones. Al constructor llegan dos enteros que deben utilizarse en los métodos para calcular su suma, resta, multiplicación y división. imprimir dichos resultados.*/
class Operaciones{
    private:
    double num1,num2;
    public:
    Operaciones();
    void sumar();
    void restar();
    void multiplicacion();
    void division();
};
Operaciones::Operaciones(){
    cout<<"Ingrese el primer numero: ";cin>>num1;
    cout<<"Ingrese el segundo numero: ";cin>>num2;
}
void Operaciones::sumar(){

    cout<<"La suma de los numeros "<<num1<<" y "<<num2<<" es: "<<num1+num2<<endl;
}
void Operaciones::restar(){
    
    cout<<"La resta de los numeros "<<num1<<" y "<<num2<<" es: "<<num1-num2<<endl;
}
void Operaciones::multiplicacion(){
    
    cout<<"La multiplicacion de los numeros "<<num1<<" y "<<num2<<" es: "<<num1*num2<<endl;
}
void Operaciones::division(){
    if(num2!=0){
    cout<<"La suma de los numeros "<<num1<<" y "<<num2<<" es: "<<num1/num2<<endl;
    }else{cout<<"No se puede dividir por cero"<<endl;}
    }

int main() {
    cout<<"Confeccionar una clase que represente un empleado. Definir como atributos su nombre y su sueldo. En el constructor cargar los atributos y luego en otro método imprimir sus datos y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)"<<endl;
    Empleado jose;
    jose.imprimir();
    jose.pagaImpuesto();
    cin.get();
    cout<<"Implementar la clase Operaciones. Al constructor llegan dos enteros que deben utilizarse en los métodos para calcular su suma, resta, multiplicación y división. imprimir dichos resultados."<<endl;
    Operaciones op;
    op.sumar();
    op.restar();
    op.multiplicacion();
    op.division();
    cin.get();
    return 0;
}