#ifndef MUMIA_HPP
#define MUMIA_HPP

#include "Inimigo.hpp"
// classe Mumia herda da classe Inimigo
class Mumia : public Inimigo {
public:
    // Construtor da classe Mumia
    Mumia(int x, int y);
    void print() override;

};

#endif


