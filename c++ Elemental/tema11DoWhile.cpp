#include <iostream>
using namespace std;
int main()
{
    cout << "Escribir un programa que solicite la carga de un número entre 0 y 999, y nos muestre un mensaje de cuántos dígitos tiene el mismo. Finalizar el programa cuando se cargue el valor 0." << endl;
    int valor;
    do
    {
        cout << "Ingrese valor: ";
        cin >> valor;
        if (valor != 0)
        {
            if (valor >= 100 && valor <= 999)
            {
                cout << "El numero tiene 3 digitos" << endl;
            }
            else if (valor >= 10)
            {
                cout << "El numero tiene 2 digitos" << endl;
            }
            else
            {
                cout << "El numero tiene 1 digito" << endl;
            }
        }

    } while (valor != 0);
    cin.get();
    cin.get();

    cout << "Escribir un programa que solicite la carga de números por teclado, obtener su promedio. Finalizar la carga de valores cuando se cargue el valor 0." << endl;
    int count = 0, num, sum = 0;
    double promedio;
    do
    {
        cout << "Ingrese numero: ";
        cin >> num;
        if (num != 0)
        {
            sum += num;
            count++;
        }

    } while (num != 0);
    if (count != 0)
    {
        promedio = (double)sum / count;
        cout << "\nEl promedio de los numeros ingresados es: ";
        cout << promedio << endl;
    }
    else
    {
        cout << "\nNo se ingresaron valores" << endl;
    }
    cin.get();
    cin.get();

    cout << "Realizar un programa que permita ingresar el peso (en kilogramos) de piezas. El proceso termina cuando ingresamos el valor 0. Se debe informar:\na) Cuántas piezas tienen un peso entre 9.8 Kg. y 10.2 Kg.?, cuántas con más de 10.2 Kg.? y cuántas con menos de 9.8 Kg.?\nb) La cantidad total de piezas procesadas." << endl;
    int piezas = 0, pMedio = 0, pBajo = 0, pAlto = 0;
    double peso;
    do
    {
        cout << "Ingrese el peso de la pieza a procesar: (0 para terminar)";
        cin >> peso;
        if (peso!=0&&peso>0)
        {   piezas++;
            if (peso>10.2)
            {pAlto++;
            }else if (peso>=9.8)
            {
                pMedio++;
            }else{
                pBajo++;
            }
            
            
        }
        


    } while (peso != 0);
    cout << "Cantidad de piezas procesadas: ";
    cout << piezas << endl;
    cout << "Piezas con peso >10.2 kg: ";
    cout << pAlto << endl;
    cout << "Piezas con peso >=9.8kg y <=10.2 kg: ";
    cout << pMedio << endl;
    cout << "Piezas con peso <9.8 kg: ";
    cout << pBajo << endl;
    cin.get();
    cin.get();

    return 0;
}
