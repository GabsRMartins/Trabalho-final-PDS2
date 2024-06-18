#include "../../include/inimigo-hpp/Lobisomen.hpp"  // Inclui o cabeçalho da classe Lobisomen
#include <iostream>  // Biblioteca para entrada/saída padrão (ex.: std::cout)
#include <ctime>  // Biblioteca para manipulação de tempo 

// Construtor da classe Lobisomen que inicializa a posição X e Y e define a vida do lobisomen, chamando o construtor da classe base Inimigo
Lobisomen::Lobisomen(int x, int y)
    : Inimigo("Lobisomen", x, y, 75) {}

// Método sobrescrito da classe base para imprimir o lobisomen
void Lobisomen::print() {
    std::cout << "🐺";  // Imprime o emoji de um lobo
}
