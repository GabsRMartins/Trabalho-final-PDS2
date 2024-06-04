#include "../../include/torre-hpp/TorreDeFogo.hpp"

using std::cout;

// Construtor da classe TorreDeFogo
TorreDeFogo::TorreDeFogo(int posicao)
    : Torre("Torre de Fogo", posicao, 3, 5) {}

// Implementação do método de ataque específico para a Torre de Fogo
void TorreDeFogo::atacar() const {
   cout <<  nome << " na posição: " << posicao << " ataca com fogo!\n";

}
