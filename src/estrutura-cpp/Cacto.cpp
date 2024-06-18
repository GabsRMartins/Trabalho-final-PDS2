#include "../../include/estrutura-hpp/Cacto.hpp"  // Inclui o cabeçalho da classe Cacto
#include <iostream>  // Biblioteca para entrada/saída padrão (ex.: std::cout)

// Construtor da classe Cacto que inicializa a posição X e Y, chamando o construtor da classe base Estrutura
Cacto::Cacto(int x, int y)
    : Estrutura("Cacto", x, y) {}

// Método sobrescrito da classe base para imprimir o cacto
void Cacto::print() {
    std::cout << "🌵";  // Imprime o emoji de um cacto
}
