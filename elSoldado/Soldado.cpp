#include <iostream>
#include "Soldado.h"
#include "Arma.h"
using namespace std;

bool Soldado::estaArmado()
{
    if (this->arma != NULL)
    {
        return true;
    }
    return false;
}

void Soldado::recogerArma(Arma *arma)
{
    if (estaArmado())
    {
        cout << "Parece que el soldado ya esta equipado con otra arma" << endl;
    }
    else
    {
        this->arma = arma;
        cout << "El soldado se ha equipado un arma" << endl;
    }
}
void Soldado::dejarArma()
{
    if (estaArmado())
    {
        this->arma = NULL;
        cout << "El soldado se ha dejado un arma" << endl;
    }
    else
    {
        cout << "El soldado no tiene ningun arma" << endl;
    }
}
void Soldado::dispararArma()
{
    if (estaArmado())
    {
        cout << this->arma->disparar() << endl;
    }
    else
    {
        cout << "El soldado no tiene ningun arma" << endl;
    }
}
void Soldado::verArma()
{
    if (estaArmado())
    {
        cout << "El soldado esta armado con: " << this->arma->getNombre() << endl;
    }
    else
    {
        cout << "El soldado no tiene ningun arma" << endl;
    }
}