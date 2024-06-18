#ifndef TEMPLO_HPP
#define TEMPLO_HPP

#include "Estrutura.hpp"
// classe Templo herda da classe Estrutura
class Templo : public Estrutura {
public:
    // Construtor da classe Templo
    Templo(int x, int y);
    void print() override;
};

#endif
