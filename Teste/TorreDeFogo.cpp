#include "TorreDeFogo.hpp"

// Construtor da classe TorreDeFogo
TorreDeFogo::TorreDeFogo(int posicao)
    : Torre("Torre de Fogo", posicao, 3, 10) {}

// Implementação do método de ataque específico para a Torre de Fogo
void TorreDeFogo::atacar() const {
    std::cout << nome << " ataca com fogo!\n";
}
