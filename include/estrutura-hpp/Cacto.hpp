#ifndef CACTO_HPP  
#define CACTO_HPP  

#include "Estrutura.hpp"  // Inclui o cabeçalho da classe base Estrutura

// Declaração da classe Cacto que herda da classe Estrutura
class Cacto : public Estrutura {
public:
    // Construtor da classe Cacto que inicializa a posição X e Y
    Cacto(int x, int y);

    // Método sobrescrito da classe base para imprimir informações do cacto
    void print() override;
};

#endif  
