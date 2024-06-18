#ifndef MUMIA_HPP
#define MUMIA_HPP

#include "Inimigo.hpp"  // Inclui o arquivo de cabeçalho da classe base "Inimigo"

// Classe Mumia herda da classe base Inimigo
class Mumia : public Inimigo {
public:
    // Construtor da classe Mumia
    Mumia(int x, int y);
    
    // Método print() para imprimir informações da Mumia
    void print() override;
};

#endif


