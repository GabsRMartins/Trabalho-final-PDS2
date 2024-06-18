#ifndef TORREDEVENENO_HPP
#define TORREDEVENENO_HPP

#include "Torre.hpp"
#include <iostream>
#include <string>

using std::string;

//A classe TorreDeVeneno herda da classe base Torre.
class TorreDeVeneno : public Torre {
public:
    // Construtor TorreDeVeneno inicializa a Torre de Veneno com os valores específicos (nome, posição, alcance e ataque).
    TorreDeVeneno(int x, int y);
    // Método atacar() é implementado para a Torre de Veneno e exibe uma mensagem indicando que ela ataca com veneno.
    void atacar() const override;
    // Método print() para imprimir informações da Torre de Veneno.
    void print() override;
};


#endif

