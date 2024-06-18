#include "../../include/estrutura-hpp/Parede.hpp"  // Inclui o cabeçalho da classe Parede
#include <iostream>  // Biblioteca para entrada/saída padrão (ex.: std::cout)

// Construtor da classe Parede que inicializa a posição X e Y, chamando o construtor da classe base Estrutura
Parede::Parede(int x, int y)
    : Estrutura("Parede", x, y) {}

// Método sobrescrito da classe base para imprimir a parede
void Parede::print() {
    std::cout << "🧱";  // Imprime o emoji de um tijolo
}
