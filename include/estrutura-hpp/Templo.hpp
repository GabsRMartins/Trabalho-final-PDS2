#ifndef TEMPLO_HPP  
#define TEMPLO_HPP  

#include "Estrutura.hpp"  // Inclui o cabeçalho da classe base Estrutura

// Declaração da classe Templo que herda da classe Estrutura
class Templo : public Estrutura {
public:
    // Construtor da classe Templo que inicializa a posição X e Y
    Templo(int x, int y);

    // Método sobrescrito da classe base para imprimir informações do templo
    void print() override;
};

#endif  

