/*
Como se trata de una clase dispone de un conjunto de métodos que permite acceder a su contenido para manipularla.

LENGTH SIZE
Estos métodos retornan la cantidad de caracteres que contiene el string. Podemos utilizar indistintamente uno u otro

EMPTY
El método empty retorna true si el string tiene una cadena vacía.

AT
El método at me permite recuperar un caracter de una determinada posición dentro del string, por ejemplo para recuperar el tercer caracter almacenado en el string :

  char letra=str.at(2);
El resultado es idéntico a acceder por medio de subíndices:

  char letra=str[2];
*/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    /*  cout << "Mostrar la cantidad de caracteres que tiene un string empleando los métodos: Length y size" << endl;
      string s1 = "HOLA";
      cout << "Cadena: " << s1 << endl;
      cout << "Cadena.size(): " << s1.size() << endl;
      cout << "Cadena.length(): " << s1.length() << endl;

    cout << "Cargar un string por teclado y luego mostrar un mensaje que no se ingresó caracteres por teclado o la cantidad de caracteres que se ingresaron. Emplear el método empty" << endl;
    string s2;
    cout<<"Ingrese palabra: ";
    getline(cin, s2);
    if (s2.empty())
    {
        cout << "Cadena vacia.\nNo se ingresaron caracteres." << endl;
    }
    else
    {
        cout << "La cadena que se ingreso es: " << s2 << endl;
        cout << "Tiene " << s2.size() << " caracteres" << endl;
    }
*/
    cout << "Cargar un string por teclado y luego mostrar cada caracter separado por un guión:" << endl;
    string s3;
    cout << "Ingrese string: ";
    getline(cin, s3);
    if (!s3.empty())
    {
        for (int i = 0; i < s3.size(); i++)
        {
            cout << s3.at(i) << "-";
            // cout<<s3[i]<<"-"; tambien se podria realizar asi
        }
        cout << endl;
    }
    else
    {
        cout << "String vacio" << endl;
    }
    return 0;
}
