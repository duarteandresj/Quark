/*
Operadores relacionales aplicados a la clase string.

==
!=
>
>=
<
<=

Podemos hacer comparaciones entre dos strings, el mayor y menor se refieren a la posicion en el alfabeto y no a la cantidad de caracteres

OPERADOR +

La clase string redefine el operador + con el objeto de generar otro objeto de la clase string que resulte de concatenar los contenidos de los string respectivos.
*/
#include <iostream>
#include <string>
using namespace std;
// Realizar la carga de dos string por teclado luego mostrar el mayor alfabéticamente.
int main(int argc, char const *argv[])
{
    std::cout << "Realizar la carga de dos string por teclado luego mostrar el mayor alfabéticamente." << endl;
    string cadena1, cadena2;
    std::cout << "Ingrese cadena 1: ";
    getline(cin, cadena1);
    std::cout << "Ingrese cadena 2: ";
    getline(cin, cadena2);
    std::cout << "La cadena mayor es: " << endl;
    if (cadena1 > cadena2)
    {
        std::cout << cadena1 << endl;
    }
    else if (cadena2 > cadena1)
    {
        std::cout << cadena2 << endl;
    }
    else
    {
        std::cout << "Las dos cadenas son iguales: \n"
                  << cadena1 << endl;
    }

    std::cout << "Realizar la carga de dos string por teclado luego crear un tercer string concatenando los dos con el caracter -  entre medio.\n"
              << "Reutilizando las cadenas anteriores quedaria:" << endl;
    string s1;
    string s2;
    std::cout << "Primer cadena:";
    getline(cin, s1);
    std::cout << "Segundo cadena:";
    getline(cin, s2);
    string s3 = s1 + "-" + s2;
    std::cout << "string que resulta de la concatenacion de los dos anteriores:" << s3;

    /* "Podemos acceder a cualquier caracter del string indicando la posición del elemento que queremos acceder. Las posiciones comienzan a numerarse a partir de cero." */
    std::cout << "Inicializar un string con la cadena 'hola' luego extraer el primer y último caracter del string por medio de subíndices." << std::endl;
    string cadena1 = "Hola";
    cout << cadena1[0];
    cout << "\n";
    cout << cadena1[3];
    return 0;
    /*Hay que tener cuidado de acceder siempre a posiciones dentro del string que tengan caracteres, por ejemplo se generará un error en tiempo de ejecución si queremos acceder al caracter de la posición 12:*/
}
