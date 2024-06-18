#ifndef ZUMBI_HPP
#define ZUMBI_HPP
#include <string>
using std::string;

#include "Inimigo.hpp"
// classe Zumbi herda da classe Inimigo
class Zumbi : public Inimigo {
public:
    // Construtor da classe Zumbi
    Zumbi(int x, int y);
    void print() override;


};
#endif
