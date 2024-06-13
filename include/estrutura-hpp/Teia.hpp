#ifndef TEIA_HPP
#define TEIA_HPP

#include "Estrutura.hpp"
// classe Teia herda da classe Estrutura
class Teia : public Estrutura {
public:
    // Construtor da classe Teia
    Teia(int x, int y);
    void print() override;
};

#endif
