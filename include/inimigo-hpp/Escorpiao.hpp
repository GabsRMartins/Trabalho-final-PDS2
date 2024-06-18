#ifndef ESCORPIAO_HPP
#define ESCORPIAO_HPP
#include <string>
using std::string;

#include "Inimigo.hpp"
// classe esqueleto herda da classe Inimigo
class Escorpiao : public Inimigo {
public:
    // Construtor da classe Escorpiao
    Escorpiao(int x, int y);
    void print() override;
   
};

#endif
