/*Plantear una clase que administre un vector de 5 enteros. Cargar los elementos por teclado, imprimirlos y retornar la suma de la primera y última componente (este último método implementarlo inline)
 */
#include <iostream>
using namespace std;
class Vector
{
private:
    int vector[5];

public:
    Vector();
    void imprimir();
    int sumaPrimeroUltimo() { return vector[0] + vector[4]; }
};
Vector::Vector()
{

    cout << "Ingrese los componentes del vector: " << endl;
    for (int i = 0; i < 5; i++)
        cin >> vector[i];
    cin.get();
}
void Vector::imprimir(){
    for (int i = 0; i < 5; i++)
    {
        cout<<vector[i]<<"-";
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    Vector ve;
    ve.imprimir();
    cout<<"Suma primero y ultimo: "<<ve.sumaPrimeroUltimo()<<endl;
    return 0;
}
