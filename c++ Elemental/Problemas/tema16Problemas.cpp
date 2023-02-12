#include <iostream>
using namespace std;
// Crear una clase que permita ingresar el nombre de 5 productos y sus respectivos precios. Definir dos vectores paralelos. Mostrar cuantos productos tienen un precio mayor al primer producto ingresado.
class Productos
{
private:
    char nombres[5][30];
    double precios[5];

public:
    void cargar();
    void precioMayorAlPrimero();
};
void Productos::cargar()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese nombre del producto: ";
        cin.getline(nombres[i], 30);
        cout << "Ingrese el precio del mismo: ";
        cin >> precios[i];
        cin.get();
    }
}
void Productos::precioMayorAlPrimero()
{
    int cuenta = 0;
    for (int i = 0; i < 5; i++)
    {
        if (precios[i] > precios[0])
        {
            cuenta++;
        }
    }
    cout << "Cantidad de productos con un precio mayor al primero: ";
    cout << cuenta;
}
/*En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:
a) Ingresar Nombre y Nota de cada alumno (almacenar los datos en dos vectores paralelos)
b) Realizar un listado que muestre los nombres, notas y condición del alumno. En la condición, colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.*/
class Curso
{
private:
    char alumnos[4][30];
    double notas[4];

public:
    void cargar();
    void estados();
    void muyBuenos();
};
void Curso::cargar()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Ingrese nombre del alumno: ";
        cin.getline(alumnos[i], 30);
        cout << "Ingrese nota correspondiente: ";
        cin >> notas[i];
        cin.get();
    }
}
void Curso::estados()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Nombre: ";
        cout << alumnos[i] << endl;
        ;
        cout << "Nota: ";
        cout << notas[i] << endl;
        cout << "Condicion: ";
        if (notas[i] >= 8)
        {
            cout << "Muy Bueno";
        }
        else if (notas[i] >= 4)
        {
            cout << "Bueno";
        }
        else
        {
            cout << "Insuficiente";
        }
       cout<<endl;
       cout<<"\n";
    }
}
void Curso::muyBuenos()
{
    int cuenta = 0;
    for (size_t i = 0; i < 4; i++)
    {
        if (notas[i] >= 8)
        {
            cuenta++;
        }
    }
    if (cuenta != 0)
    {
        cout << "La cantidad de personas con condicion 'Muy Bueno' es: ";
        cout << cuenta << endl;
    }
    else
    {
        cout << "No hay personas con la condicion 'Muy Bueno" << endl;
    }
}

int main()
{
    cout << "Crear una clase que permita ingresar el nombre de 5 productos y sus respectivos precios. Definir dos vectores paralelos. Mostrar cuantos productos tienen un precio mayor al primer producto ingresado." << endl;
    Productos productosPrecio;
    productosPrecio.cargar();
    productosPrecio.precioMayorAlPrimero();
    cin.get();
    cin.get();
    cout<<"En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:\na) Ingresar Nombre y Nota de cada alumno (almacenar los datos en dos vectores paralelos)\nb) Realizar un listado que muestre los nombres, notas y condición del alumno. En la condición, colocar 'Muy Bueno' si la nota es mayor o igual a 8, 'Bueno' si la nota está entre 4 y 7, y colocar 'Insuficiente' si la nota es inferior a 4.\nc) Imprimir cuantos alumnos tienen la leyenda 'Muy Bueno'."<<endl;
    Curso cursito;
    cursito.cargar();
    cout<<"\n";
    cursito.estados();
    cursito.muyBuenos();
    cin.get();
    cin.get();
    return 0;

}