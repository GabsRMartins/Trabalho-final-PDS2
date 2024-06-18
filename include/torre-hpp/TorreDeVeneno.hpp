#ifndef TORREDEVENENO_HPP
#define TORREDEVENENO_HPP

#include "Torre.hpp"
#include <iostream>
#include <string>

using std::string;

//A classe TorreDeVeneno herda da classe base Torre.
class TorreDeVeneno : public Torre {
public:
    //O construtor TorreDeVeneno é responsável por inicializar a Torre de Fogo com os valores específicos (nome, posição, alcance e ataque).
    TorreDeVeneno(int x, int y);
    //O método atacar() é implementado para a Torre de Fogo e exibe uma mensagem indicando que ela ataca com fogo.
    void atacar() const override;
    void print() override;
};


#endif

