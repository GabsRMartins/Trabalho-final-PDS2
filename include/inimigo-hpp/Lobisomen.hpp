#ifndef LOBISOMEN_HPP
#define LOBISOMEN_HPP

#include "Inimigo.hpp"
// classe Lobisomen herda da classe Inimigo
class Lobisomen : public Inimigo {
public:
    // Construtor da classe Lobisomen
    Lobisomen(int x, int y);
    void print() override;

};

#endif


