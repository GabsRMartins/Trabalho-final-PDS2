#include "../../include/estrutura-hpp/Arvore.hpp"  // Inclui o cabeçalho da classe Arvore
#include <iostream>  // Biblioteca para entrada/saída padrão (ex.: std::cout)

// Construtor da classe Arvore que inicializa a posição X e Y, chamando o construtor da classe base Estrutura
Arvore::Arvore(int x, int y)
    : Estrutura("Arvore", x, y) {}

// Método sobrescrito da classe base para imprimir a árvore
void Arvore::print() {
    std::cout << "🌳";  // Imprime o emoji de uma árvore
}
