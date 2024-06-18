#ifndef VAMPIRO_HPP
#define VAMPIRO_HPP

#include "Inimigo.hpp"  // Inclui o arquivo de cabeçalho da classe base "Inimigo"

// Classe Vampiro herda da classe base Inimigo
class Vampiro : public Inimigo {
public:
    // Construtor da classe Vampiro
    Vampiro(int x, int y);
    
    // Método print() para imprimir informações do Vampiro
    void print() override;
};

#endif



