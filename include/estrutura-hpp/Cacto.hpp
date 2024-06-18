#ifndef CACTO_HPP
#define CACTO_HPP

#include "Estrutura.hpp"
// classe Cacto herda da classe Estrutura
class Cacto : public Estrutura {
public:
    // Construtor da classe Cacto
    Cacto(int x, int y);
    void print() override;
};

#endif
