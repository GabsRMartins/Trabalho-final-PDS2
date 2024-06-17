#ifndef SLOT_HPP
#define SLOT_HPP

#include "Estrutura.hpp"
// classe parede herda da classe Estrutura
class Slot : public Estrutura {
public:
    // Construtor da classe Slot
    Slot(int x, int y);
    void print() override;
};

#endif
