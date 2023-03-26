/*Crear una matriz de 2 filas y 5 columnas. Realizar la carga de componentes por columna (es decir primero ingresar toda la primer columna, luego la segunda columna y así sucesivamente) Imprimir luego la matriz.*/
#include <iostream>
using namespace std;

class Matriz
{
private:
    int mat[2][5];
public:
    void cargar();
    void imprimir();
};

void Matriz::cargar()
{
    for (int c = 0; c <5 ; c++)
        for (int f = 0; f < 2; f++)
        {
            cout << "Ingrese componente: " << f << "," << c << ": ";
            cin >> mat[f][c];
        }
    cin.get();
}

void Matriz::imprimir(){
      for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
    cin.get();
    cin.get();
}

int main(){
    cout<<"Crear una matriz de 2 filas y 5 columnas. Realizar la carga de componentes por columna (es decir primero ingresar toda la primer columna, luego la segunda columna y así sucesivamente)\nImprimir luego la matriz.\n"<<endl;
    Matriz matris;
    matris.cargar();
    cout<<"\nIMPRESION DE MATRIZ COMPLETA\n";
    matris.imprimir();
    
    return 0;
}