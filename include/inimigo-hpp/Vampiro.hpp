#ifndef VAMPIRO_HPP
#define VAMPIRO_HPP

#include "Inimigo.hpp"
// classe Vampiro herda da classe Inimigo
class Vampiro : public Inimigo {
public:
    // Construtor da classe Vampiro
    Vampiro(int x, int y);
    void print() override;

};

#endif


