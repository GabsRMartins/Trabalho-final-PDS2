#ifndef SLOT_HPP  
#define SLOT_HPP  

#include "Estrutura.hpp"  // Inclui o cabeçalho da classe base Estrutura

// Declaração da classe Slot que herda da classe Estrutura
class Slot : public Estrutura {
public:
    // Construtor da classe Slot que inicializa a posição X e Y
    Slot(int x, int y);

    // Método sobrescrito da classe base para imprimir informações do slot
    void print() override;
};

#endif  

