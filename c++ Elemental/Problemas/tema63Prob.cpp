#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "PROBLEMA 1" << endl;
    cout << "Realizar un programa que permita cargar una palabra por teclado. Modificar el string para agregar un guión entre cada letra de la palabra." << endl;
    string s1;
    cout << "Ingrese palabra: ";
    getline(cin, s1);
    int pos = 1;
    int cantidad = s1.length();
    for (int i = 1; i <=cantidad - 1; i++)
    {
        s1.insert(pos, "-");
        pos = pos + 2;
    }
    cout << "Estado final de la cadena: " << endl;
    cout << s1 << endl;

    cout << "PROBLEMA 2" << endl;
    cout << "Cargar una oración por teclado. Modificar el string de tal forma que se borren todos los espacios en blanco entre palabras" << endl;
    string s2;
    cout << "Ingrese la oracion: ";
    getline(cin, s2);
    int largo = s2.size();
    for (int i = 0; i < largo; i++)
    {
        if (s2.at(i) == ' ')
        {
            s2.erase(i, 1);
            largo--;
        }
    }
    cout << "Oracion sin espacios: " << endl;
    cout << s2 << endl;
    return 0;
}
