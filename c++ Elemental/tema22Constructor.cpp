/*
Se desea guardar los sueldos de 5 operarios en un vector. Realizar la carga del vector en el constructor.*/
#include <iostream>
using namespace std;
class Operarios{
    private:
    double sueldos[5];
    public:
    Operarios();
    void imprimir();
};
Operarios::Operarios(){
    cout<<"Carga de sueldos"<<endl;
    for(int i=0;i<5;i++){
        cout<<"Ingrese el sueldo: ";
        cin>>sueldos[i];
    }
    cin.get();
}
void Operarios::imprimir(){
    for(int i=0;i<5;i++) {
        cout<<sueldos[i]<<endl;
    }
    cin.get();
}
/*Plantear una clase llamada Alumno y definir como atributos su nombre y su edad. En el constructor realizar la carga de datos. Definir otros dos métodos para imprimir los datos ingresados y un mensaje si es mayor o no de edad (edad >=18)*/
class Alumno{
    private:
    char nombre[25];
    int edad;
    public:
    Alumno();
    void imprimir();
    void esMayor();
};
Alumno::Alumno(){
    cout<<"Ingrese el nombre del alumno: ";cin.getline(nombre,25);
    cout<<"Ingrese edad del mismo: ";cin>>edad;
    cin.get();
}
void Alumno::imprimir(){
    cout<<"Alumno:\n"<<"Nombre: "<<nombre<<"\t\tEdad: "<<edad<<endl;
}
void Alumno::esMayor(){
    if(edad>=18){
        cout<<"Es mayor de edad.";
    }else{
        cout<<"Aun no es mayor de edad.";
    }
    cin.get();
}
/*Plantear una clase llamada Moneda. Al constructor llega como parámetro el valor de la moneda (1,5,50 o 100) Definir luego dos objetos de esta clase con valores de moneda 5 y 50.*/
class Moneda{
    private:
    int valor;
    public:
    Moneda(int val);
    void imprimir();
};
Moneda::Moneda(int v){
this->valor=v;
}
void Moneda::imprimir(){
    cout<<"El valor de la moneda es: "<<this->valor<<endl;
}

int main(){
   cout<<"Se desea guardar los sueldos de 5 operarios en un vector. Realizar la carga del vector en el constructor."<<endl;
    Operarios op;
    op.imprimir();
    cout<<"Plantear una clase llamada Alumno y definir como atributos su nombre y su edad. En el constructor realizar la carga de datos. Definir otros dos métodos para imprimir los datos ingresados y un mensaje si es mayor o no de edad (edad >=18)"<<endl;
    Alumno al;
    al.imprimir();
    al.esMayor();
    Moneda mon1(5);
    Moneda mon2(50);
    mon1.imprimir();
    mon2.imprimir();   
    return 0;
}