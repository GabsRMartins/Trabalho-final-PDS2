#ifndef TEIA_HPP  
#define TEIA_HPP  

#include "Estrutura.hpp"  // Inclui o cabeçalho da classe base Estrutura

// Declaração da classe Teia que herda da classe Estrutura
class Teia : public Estrutura {
public:
    // Construtor da classe Teia que inicializa a posição X e Y
    Teia(int x, int y);

    // Método sobrescrito da classe base para imprimir informações da teia
    void print() override;
};

#endif  
