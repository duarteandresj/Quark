/*
Veamos algunos métodos que nos provee la clase string para modificar el contenido de un string:

append: Para añadir al final otra cadena de caracteres.
insert: Para añadir otra cadena en cualquier parte de la cadena indicando la posición inicial.
erase: Borrar desde una determinada posición una determinada cantidad de caracteres del string.
*/
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Inicializar un string con una cadena de caracteres y aplicar los métodos: append, insert y erese. Mostrar el estado final del string después de llamar a cada método." << endl;
    string s1 = "uno tres";
    cout << "Cadena original: " << s1 << endl;
    s1.append(" cuatro");
    cout << "Cadena despues de append: " << s1 << endl;
    s1.insert(3, " dos");
    cout << "Cadena despues de insert: " << s1 << endl;
    s1.erase(0, 4);
    cout << "Cadena despues de erase: " << s1 << endl;
    return 0;
}
