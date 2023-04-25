#include <iostream>
#include "Soldado.h"
#include "Revolver.h"
#include "Rifle.h"
#include "Escopeta.h"
using namespace std;
void menu1()
{
    cout<<"-== Bienvenido al campo de entrenamiento, Soldado ==-"<<endl;
    cout << "¿Que desea hacer?" << endl;
    cout << "(presione el número correspondiente a la opcion del menu)\n"
         << endl;
    cout << "1- Recoger arma" << endl;
    cout << "2- Dejar arma" << endl;
    cout << "3- Disparar" << endl;
    cout << "4- Ver arma en uso" << endl;
    cout << "X- Salir " << endl;
}

void menu2()
{
    cout << "Por favor, escoja el arma que desea utilizar:\n"
         << endl;
    cout << "1- Revolver" << endl;
    cout << "2- Rifle" << endl;
    cout << "3- Escopeta" << endl;
    cout << "X- Volver atras" << endl;
}
void continuar()
{
    cin.get();
    cout << "\x1B[2J\x1B[H"; // borra pantalla
}
int main(int argc, char const *argv[])
{
    Soldado *soldado = new Soldado();
    Revolver *revolver = new Revolver();
    Escopeta *escopeta = new Escopeta();
    Rifle *rifle = new Rifle();
    string eleccion, eleccion2;
    do
    {
        menu1();
        getline(cin, eleccion);
        if (eleccion != "x")
        {
            int parseInt = stoi(eleccion);
            switch (parseInt)
            {
            case 1: // Recoger arma
                cout << "\x1B[2J\x1B[H";
                do
                {
                    menu2();
                    getline(cin, eleccion2);
                    if (eleccion2 != "x")
                    {
                        parseInt = stoi(eleccion2);
                        switch (parseInt)
                        {
                        case 1: // Revolver
                            soldado->recogerArma(revolver);
                            continuar();
                            break;
                        case 2: // Rifle
                            soldado->recogerArma(rifle);
                            continuar();
                            break;
                        case 3: // Escopeta
                            soldado->recogerArma(escopeta);
                            continuar();
                            break;
                        default:
                            cout << "NO ES UNA OPCION VALIDA" << endl;
                            continuar();
                            break;
                        }
                    }

                } while (eleccion2 != "x");
                continuar();
                break;
            case 2: // Dejar arma
                soldado->dejarArma();
                continuar();
                break;
            case 3: // Disparar
                soldado->dispararArma();
                continuar();
                break;
            case 4: // Ver arma en uso
                soldado->verArma();
                continuar();
                break;
            default:
                cout << "NO ES UNA OPCION VALIDA" << endl;
                continuar();
                break;
            }
        }

    } while (eleccion != "x");

    delete soldado;
    delete revolver;
    delete escopeta;
    delete rifle;
    return 0;
}
