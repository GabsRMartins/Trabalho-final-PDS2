#ifndef ARVORE_HPP  
#define ARVORE_HPP  

#include "Estrutura.hpp"  // Inclui o cabeçalho da classe base Estrutura

// Declaração da classe Arvore que herda da classe Estrutura
class Arvore : public Estrutura {
public:
    // Construtor da classe Arvore que inicializa a posição X e Y
    Arvore(int x, int y);

    // Método sobrescrito da classe base para imprimir informações da árvore
    void print() override;
};

#endif  
