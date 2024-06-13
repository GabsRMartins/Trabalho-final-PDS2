#ifndef LAPIDE_HPP
#define LAPIDE_HPP

#include "Estrutura.hpp"
// classe Lapide herda da classe Estrutura
class Lapide : public Estrutura {
public:
    // Construtor da classe Lapide
    Lapide(int x, int y);
    void print() override;
};

#endif
