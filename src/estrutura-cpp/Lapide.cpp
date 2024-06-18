#include "../../include/estrutura-hpp/Lapide.hpp"  // Inclui o cabeçalho da classe Lapide
#include <iostream>  // Biblioteca para entrada/saída padrão (ex.: std::cout)

// Construtor da classe Lapide que inicializa a posição X e Y, chamando o construtor da classe base Estrutura
Lapide::Lapide(int x, int y)
    : Estrutura("Lapide", x, y) {}

// Método sobrescrito da classe base para imprimir a lápide
void Lapide::print() {
    std::cout << "🪦 ";  // Imprime o emoji de uma lápide
}
