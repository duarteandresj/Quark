#include "Escopeta.h"

Escopeta::Escopeta(){
    this->nombre="Escopeta";
}
string Escopeta::disparar(){
    return "¡Paaa!...";
}
string Escopeta::getNombre(){
    return this->nombre;
}