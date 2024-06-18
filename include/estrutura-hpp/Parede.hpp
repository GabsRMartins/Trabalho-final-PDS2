#ifndef PAREDE_HPP  
#define PAREDE_HPP  

#include "Estrutura.hpp"  // Inclui o cabeçalho da classe base Estrutura

// Declaração da classe Parede que herda da classe Estrutura
class Parede : public Estrutura {
public:
    // Construtor da classe Parede que inicializa a posição X e Y
    Parede(int x, int y);

    // Método sobrescrito da classe base para imprimir informações da parede
    void print() override;
};

#endif  

