#include "../../include/estrutura-hpp/Slot.hpp"  // Inclui o cabeçalho da classe Slot
#include <iostream>  // Biblioteca para entrada/saída padrão (ex.: std::cout)

// Construtor da classe Slot que inicializa a posição X e Y, chamando o construtor da classe base Estrutura
Slot::Slot(int x, int y)
    : Estrutura("Slot", x, y) {}

// Método sobrescrito da classe base para imprimir o slot
void Slot::print() {
    std::cout << "⭕";  // Imprime o emoji de um círculo vazio
}
