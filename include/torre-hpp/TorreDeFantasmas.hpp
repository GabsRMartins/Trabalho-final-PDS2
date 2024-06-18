#ifndef TORREDEFANTASMAS_HPP
#define TORREDEFANTASMAS_HPP

#include "Torre.hpp"
#include <iostream>
#include <string>

using std::string;

//A classe TorreDeFantasmas herda da classe base Torre.
class TorreDeFantasmas : public Torre {
public:
    //O construtor TorreDeFantasmas é responsável por inicializar a Torre de Fogo com os valores específicos (nome, posição, alcance e ataque).
    TorreDeFantasmas(int x, int y);
    //O método atacar() é implementado para a Torre de Fogo e exibe uma mensagem indicando que ela ataca com fogo.
    void atacar() const override;
    void print() override;
};


#endif

