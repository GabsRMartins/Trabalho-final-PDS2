#ifndef TORREDEGELO_HPP
#define TORREDEGELO_HPP

#include "Torre.hpp"
#include <iostream>
#include <string>

using std::string;

//A classe TorreDeGelo herda da classe base Torre.
class TorreDeGelo : public Torre {
public:
    // Construtor TorreDeGelo inicializa a Torre de Gelo com os valores específicos (nome, posição, alcance e ataque).
    TorreDeGelo(int x, int y);
    // Método atacar() é implementado para a Torre de Gelo e exibe uma mensagem indicando que ela ataca com Gelo.
    void atacar() const override;
    // Método print() para imprimir informações da Torre de Gelo.
    void print() override;
};


#endif

