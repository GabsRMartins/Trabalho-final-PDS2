#ifndef LAPIDE_HPP  
#define LAPIDE_HPP  

#include "Estrutura.hpp"  // Inclui o cabeçalho da classe base Estrutura

// Declaração da classe Lapide que herda da classe Estrutura
class Lapide : public Estrutura {
public:
    // Construtor da classe Lapide que inicializa a posição X e Y
    Lapide(int x, int y);

    // Método sobrescrito da classe base para imprimir informações da lápide
    void print() override;
};

#endif  
