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
    // Método atacar() é implementado para a Torre de Fantasmas e exibe uma mensagem indicando que ela ataca com fantasmas.
    void atacar() const override;
    // Método print() para imprimir informações da Torre de Fantasmas.
    void print() override;
};


#endif

