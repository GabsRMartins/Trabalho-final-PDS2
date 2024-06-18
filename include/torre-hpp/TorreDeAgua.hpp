#ifndef TORREDEAGUA_HPP
#define TORREDEAGUA_HPP

#include "Torre.hpp"
#include <iostream>
#include <string>

using std::string;

//A classe TorreDeAgua herda da classe base Torre.
class TorreDeAgua : public Torre {
public:
    // Construtor TorreDeAgua inicializa a Torre de Água com os valores específicos (nome, posição, alcance e ataque).
    TorreDeAgua(int x, int y);
    // Método atacar() é implementado para a Torre de Água e exibe uma mensagem indicando que ela ataca com água.
    void atacar() const override;
     // Método print() para imprimir informações da Torre de Água.
    void print() override;
};


#endif

