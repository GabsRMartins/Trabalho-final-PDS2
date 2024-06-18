#ifndef AREIA_HPP
#define AREIA_HPP

#include "Estrutura.hpp"
// classe Areia herda da classe Estrutura
class Areia : public Estrutura {
public:
    // Construtor da classe Areia
    Areia(int x, int y);
    void print() override;
};

#endif
