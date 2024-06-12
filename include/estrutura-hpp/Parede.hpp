#ifndef PAREDE_HPP
#define PAREDE_HPP

#include "Estrutura.hpp"
// classe parede herda da classe Estrutura
class Parede : public Estrutura {
public:
    // Construtor da classe Parede
    Parede(int x, int y);
    void print() override;
};

#endif
