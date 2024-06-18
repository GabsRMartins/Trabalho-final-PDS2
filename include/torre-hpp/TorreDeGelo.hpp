#ifndef TORREDEGELO_HPP
#define TORREDEGELO_HPP

#include "Torre.hpp"
#include <iostream>
#include <string>

using std::string;

//A classe TorreDeGelo herda da classe base Torre.
class TorreDeGelo : public Torre {
public:
    //O construtor TorreDeGelo é responsável por inicializar a Torre de Fogo com os valores específicos (nome, posição, alcance e ataque).
    TorreDeGelo(int x, int y);
    //O método atacar() é implementado para a Torre de Fogo e exibe uma mensagem indicando que ela ataca com fogo.
    void atacar() const override;
    void print() override;
};


#endif

