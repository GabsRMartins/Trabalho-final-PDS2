#include "../../include/estrutura-hpp/Templo.hpp"  // Inclui o cabeçalho da classe Templo
#include <iostream>  // Biblioteca para entrada/saída padrão (ex.: std::cout)

// Construtor da classe Templo que inicializa a posição X e Y, chamando o construtor da classe base Estrutura
Templo::Templo(int x, int y)
    : Estrutura("Templo", x, y) {}

// Método sobrescrito da classe base para imprimir o templo
void Templo::print() {
    std::cout << "🛕";  // Imprime o emoji de um templo
}
