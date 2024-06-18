#ifndef TORREDEFOGO_HPP
#define TORREDEFOGO_HPP

#include "Torre.hpp"
#include <iostream>
#include <string>

using std::string;

//A classe TorreDeFogo herda da classe base Torre.
class TorreDeFogo : public Torre {
public:
    //O construtor TorreDeFogo é responsável por inicializar a Torre de Fogo com os valores específicos (nome, posição, alcance e ataque).
    TorreDeFogo(int x, int y);
    //O método atacar() é implementado para a Torre de Fogo e exibe uma mensagem indicando que ela ataca com fogo.
    void atacar() const override;
    // Método print() para imprimir informações da Torre de Fogo.
    void print() override;

};


#endif

