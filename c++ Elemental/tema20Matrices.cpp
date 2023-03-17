/*Crear una matriz de 3 filas por 5 columnas con elementos de tipo int, cargar sus componentes y luego imprimirlas.*/
#include <iostream>
using namespace std;
class Matriz
{
private:
    int mat[3][5];

public:
    void cargar();
    void imprimir();
};
void Matriz::cargar()
{
    for (int f = 0; f < 3; f++)
        for (int c = 0; c < 5; c++)
        {
            cout << "Ingrese componente: " << f << "," << c << ": ";
            cin >> mat[f][c];
        }
    cin.get();
}

void Matriz::imprimir()
{
    for (int i = 0; i < 3; i++)
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
/* Crear y cargar una matriz de 4 filas por 4 columnas. Imprimir la diagonal principal.*/
class Matriz1
{
private:
    int mat[4][4];

public:
    void cargar();
    void imprimirDiagonal();
};
void Matriz1::cargar()
{
    for (int f = 0; f < 4; f++)
        for (int c = 0; c < 4; c++)
        {
            cout << "Ingrese componente: " << f << "," << c << ": ";
            cin >> mat[f][c];
        }
    cin.get();
}

void Matriz1::imprimirDiagonal()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j == i)
            {
                cout << mat[i][j] << "\t";
            }
            else
            {
                cout << "-\t";
            }
        }
        cout << "\n";
    }
    cin.get();
    cin.get();
}
/*Crear y cargar una matriz de 3 filas por 4 columnas. Imprimir la primer fila. Imprimir la última fila e imprimir la primer columna.*/
class Matriz2
{
private:
    int mat[3][4];

public:
    void cargar();
    void imprimirPrimerFila();
    void imprimirUltimaFila();
    void imprimirPrimerColumna();
};

void Matriz2::cargar()
{
    for (int f = 0; f < 3; f++)
        for (int c = 0; c < 4; c++)
        {
            cout << "Ingrese componente: " << f << "," << c << ": ";
            cin >> mat[f][c];
        }
    cin.get();
}

void Matriz2::imprimirPrimerFila()
{
    cout << "La primer fila de la matriz es: \n"
         << endl;
    for (int j = 0; j < 4; j++)
    {
        cout << mat[0][j] << "\t";
    }
    cin.get();
    cin.get();
}
void Matriz2::imprimirUltimaFila()
{
    cout << "La ultima fila de la matriz es: \n"
         << endl;
    for (int j = 0; j < 4; j++)
    {
        cout << mat[2][j] << "\t";
    }
    cin.get();
    cin.get();
}
void Matriz2::imprimirPrimerColumna()
{
    cout << "La primer columna de la matriz es: \n"
         << endl;
    for (int j = 0; j < 3; j++)
    {
        cout << mat[j][0] << "\n";
    }
    cin.get();
    cin.get();
}

int main()
{
    cout << " Crear una matriz de 3 filas por 5 columnas con elementos de tipo int, cargar sus componentes y luego imprimirlas\n"
         << endl;
    Matriz matris;
    matris.cargar();
    cout << "\n";
    matris.imprimir();

    cout << " Crear y cargar una matriz de 4 filas por 4 columnas. Imprimir la diagonal principal.\n"
         << endl;
    Matriz1 matris1;
    matris1.cargar();
    cout << "\n"
         << "Impresion de solo diagonal principal: \n";
    matris1.imprimirDiagonal();
    cout << "Crear y cargar una matriz de 3 filas por 4 columnas. Imprimir la primer fila. Imprimir la última fila e imprimir la primer columna.\n"
         << endl;
    Matriz2 matris2;
    matris2.cargar();
    matris2.imprimirPrimerFila();
    matris2.imprimirUltimaFila();
    matris2.imprimirPrimerColumna();
    return 0;
}