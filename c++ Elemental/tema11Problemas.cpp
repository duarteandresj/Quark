#include <iostream>
using namespace std;
int main()
{
    cout << "Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el 9999 (no sumar dicho valor, indica que ha finalizado la carga). Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero." << endl;
    double acum = 0, num;
    do
    {
        cout << "Ingrese valor a sumar (9999 termina el programa): ";
        cin >> num;
        if (num != 9999)
        {
            acum += num;
        }
        else
        {
            cout << "Finaliza la carga de numeros" << endl;
        }
    } while (num != 9999);
    if (acum == 0)
    {
        cout << "El acumulado es nulo: ";
        cout << acum << endl;
    }
    else if (acum > 0)
    {
        cout << "El acumulado es mayor a cero: ";
        cout << acum << endl;
    }
    else
    {
        cout << "El acumulado es menor a cero: ";
        cout << acum << endl;
    }
    cin.get();
    cin.get();

    cout << "En un banco se procesan datos de las cuentas corrientes de sus clientes. De cada cuenta corriente se conoce: número de cuenta y saldo actual. El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.\nSe pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:\na)De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que:\nEstado de la cuenta	\n'Acreedor' si el saldo es >0.\n'Deudor' si el saldo es <0.\n'Nulo' si el saldo es =0.\n\nb) La suma total de los saldos acreedores." << endl;
    double nCuenta, saldoAct, sumaAcreedores = 0;

    do
    {
        cout << "Ingrese nro de cuenta (un numero negativo termina la ejecucion): ";
        cin >> nCuenta;

        if (nCuenta >= 0)
        {
            cout << "Ingrese saldo de la cuenta: ";
            cin >> saldoAct;

            cout << "\nNro de cuenta: ";
            cout << nCuenta << endl;
            cout << "Estado de la cuenta: ";
            if (saldoAct > 0)
            {
                cout << "Acreedor, saldo: ";
                sumaAcreedores += saldoAct;
            }
            else if (saldoAct < 0)
            {
                cout << "Deudor, saldo: ";
            }
            else
            {
                cout << "Nulo, saldo: ";
            }
            cout << saldoAct << endl;
        }
        else
        {
            cout << "PROGRAMA FINALIZADO" << endl;
        }

    } while (nCuenta >= 0);
    cout << "La suma de los saldos de Acreedores es: ";
    cout << sumaAcreedores << endl;
    cin.get();
    cin.get();

    return 0;
}