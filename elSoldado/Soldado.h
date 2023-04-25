#ifndef SOLDADO_H
#define SOLDADO_H

class Arma;

class Soldado
{
public:
    bool estaArmado();
    void recogerArma(Arma *arma);
    void dejarArma();
    void dispararArma();
    void verArma();

private:
    Arma *arma;
};

#endif // !SOLDADO_H