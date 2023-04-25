#include "Rifle.h"

Rifle::Rifle(){
    this->nombre="Rifle";
}
string Rifle::disparar(){
    return "Pum pum pum!...";
}
string Rifle::getNombre(){
    return this->nombre;
}