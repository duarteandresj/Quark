/*Cree una clase "Auto" que tenga dos atributos: "marca" y "modelo", ambos de tipo string.
En el constructor de la clase, inicialice los atributos con los valores pasados como parámetros.
Cree una función "mostrar_datos" que imprima los valores de los atributos "marca" y "modelo" en pantalla.
Cree un puntero inteligente de tipo "shared_ptr" para un objeto de la clase "Auto", y asígnelo a un objeto de la clase "Auto" con la marca "Ford" y el modelo "Mustang".
Llamar a la función "mostrar_datos" a través del puntero inteligente.*/
#include <iostream>
#include <memory>
using namespace std;

// Clase Auto con dos atributos: marca y modelo
class Auto
{
    string marca_;
    string modelo_;

public:
    // constructor que inicializa los atributos con los valores pasados como parámetros
    Auto(string marca, string modelo) : marca_(marca), modelo_(modelo) {}
    // función para mostrar los datos de la clase
    void mostrar_datos()
    {
        cout << "Marca: " << marca_ << endl;
        cout << "Modelo: " << modelo_ << endl;
    }
};

int main()
{
    // puntero inteligente de tipo shared_ptr para un objeto de la clase Auto
    shared_ptr<Auto> auto_ptr = make_shared<Auto>("Ford", "Mustang");
    // llamada a la función mostrar_datos a través del puntero inteligente
    auto_ptr->mostrar_datos();
    return 0;
}
