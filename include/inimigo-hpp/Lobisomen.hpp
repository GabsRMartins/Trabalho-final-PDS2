#ifndef LOBISOMEN_HPP
#define LOBISOMEN_HPP

#include "Inimigo.hpp" // Inclui o cabeçalho da classe base Inimigo

// classe Lobisomen que herda da classe Inimigo
class Lobisomen : public Inimigo {
public:
    // Construtor da classe Lobisomen
    Lobisomen(int x, int y);
    // Método sobrescrito da classe base para imprimir informações do lobisomen
    void print() override;

};

#endif


