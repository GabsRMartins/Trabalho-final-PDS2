#ifndef ZUMBI_HPP
#define ZUMBI_HPP

#include <string>       // Inclui <string> para usar string
using std::string;

#include "Inimigo.hpp"  // Inclui o arquivo de cabeçalho da classe base "Inimigo"

// Classe Zumbi herda da classe base Inimigo
class Zumbi : public Inimigo {
public:
    // Construtor da classe Zumbi
    Zumbi(int x, int y);
    
    // Método print() para imprimir informações do Zumbi
    void print() override;
};

#endif
