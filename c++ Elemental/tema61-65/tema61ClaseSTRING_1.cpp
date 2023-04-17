/*
El manejo de cadenas de caracteres con la clase string simplifica en gran medida la implementación de algoritmos y reduce la cantidad de errores que podemos cometer.

Para crear un objeto de la clase string podemos hacerlo de dos formas:

string cadena1("Hola mundo");
o la más cómoda y legible:

string cadena1="Hola mundo";

Para poder utilizar la clase string debemos incluir en nuestro programa:

#include<string>
*/

// Confeccionar un programa que defina dos objetos de la clase string, uno iniciar con la cadena “hola mundo” y el segundo cargarlo por teclado. Mostrarlos por la consola.

#include <iostream>
#include <string>
#define TERMINAR \
    cin.get();   \
    cin.get();
using namespace std;

int main(int argc, char const *argv[])
{
    string cadena1 = "Hola Mundo";
    string cadena2;
    cout << "Ingrese cadena sin espacios en blanco:";
    cin >> cadena2;
    // Es importante hacer notar que cuando ingresamos una cadena con el objeto cin no podemos ingresar el espacio en blanco, sino se corta el string en dicho caracter.
    
    // Para permitir ingresar espacios en blanco dentro del string por teclado debemos utilizar la función getline:
    cin.get();
    string cadena3;
    cout << "Ingrese cadena con espacios en blanco:";
    getline(cin,cadena3);
    cout << "Primer cadena :"<< cadena1 << endl;
    cout << "Segunda cadena :"<< cadena2 << endl;
    cout << "Tercer cadena :"<< cadena3 << endl;
    
    TERMINAR;
    return 0;
}
