#ifndef ARVORE_HPP
#define ARVORE_HPP

#include "Estrutura.hpp"
// classe Arvore herda da classe Estrutura
class Arvore : public Estrutura {
public:
    // Construtor da classe Arvore
    Arvore(int x, int y);
    void print() override;
};

#endif
