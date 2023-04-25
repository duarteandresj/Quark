#include "Revolver.h"

Revolver::Revolver(){
    this->nombre="Revolver";
}
string Revolver::disparar(){
    return "Pum";
}
string Revolver::getNombre(){
    return this->nombre;
}