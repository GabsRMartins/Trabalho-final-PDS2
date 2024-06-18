#ifndef ESQUELETO_HPP
#define ESQUELETO_HPP
#include <string>
using std::string;

#include "Inimigo.hpp"
// classe esqueleto herda da classe Inimigo
class Esqueleto : public Inimigo {
public:
    // Construtor da classe Esqueleto
    Esqueleto(int x, int y);
    void print() override;
   
};

#endif
