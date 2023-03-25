/*Crear una matriz de 3 filas por 3 columnas. Implementar un método que permita cargar todas sus componentes, otro que la imprima y otra método que retorne la fila y columna (retorna dos datos el método) donde se encuentra el mayor elemento del vector (si está repetido retorne la posición de cualquiera de ellos)*/
#include  <iostream>
using namespace std;
class Matriz
{
  int mat[3][3];
  public:
  void cargar();
  void imprimir();
  void filaColumnaMayor(int *pfila,int *pcol);  
};
void Matriz::cargar(){
    cout<<"Cargue la matriz"<<endl;
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cin>>mat[f][c];
        }
        cin.get();
    }
}
void Matriz::imprimir(){
    cout<<"Matriz:"<<endl;
    for (int f= 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout<<mat[f][c]<<"\t";
        }
        cout<<endl;
    }
}

void Matriz::filaColumnaMayor(int *pfil,int *pcol){
    *pfil=0;
    *pcol=0;
    int mayor=mat[0][0];
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (mayor<mat[f][c])
            {
                mayor=mat[f][c];
                *pfil=f+1;
                *pcol=c+1;
            }
        }   
    }
    cout<<"El valor que se tomo como mayor es: "<<mayor<<endl;
    cout<<"ubicado en :"<<*pfil<<" y "<<*pcol<<endl;
}
int main(int argc, char const *argv[])
{
    cout<<"Crear una matriz de 3 filas por 3 columnas. Implementar un método que permita cargar todas sus componentes, otro que la imprima y otra método que retorne la fila y columna (retorna dos datos el método) donde se encuentra el mayor elemento del vector (si está repetido retorne la posición de cualquiera de ellos)"<<endl;
    cout<<"\n"<<endl; 
    Matriz ma;
    ma.cargar();
    cout<<"\n"<<endl;
    ma.imprimir();
    cout<<"\n"<<endl;
    int fila,columna;
    ma.filaColumnaMayor(&fila,&columna);
    cout<<"La fila es: "<<fila<<endl;
    cout<<"La columna es: "<<columna<<endl;
    return 0;
}
