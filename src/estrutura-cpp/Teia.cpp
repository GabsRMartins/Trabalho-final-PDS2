#include "../../include/estrutura-hpp/Teia.hpp"  // Inclui o cabeçalho da classe Teia
#include <iostream>  // Biblioteca para entrada/saída padrão (ex.: std::cout)

// Construtor da classe Teia que inicializa a posição X e Y, chamando o construtor da classe base Estrutura
Teia::Teia(int x, int y)
    : Estrutura("Teia", x, y) {}

// Método sobrescrito da classe base para imprimir a teia
void Teia::print() {
    std::cout << "🕸️ ";  // Imprime o emoji de uma teia de aranha
}
