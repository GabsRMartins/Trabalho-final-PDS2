#include "../../include/inimigo-hpp/Esqueleto.hpp"  // Inclui o cabeçalho da classe Esqueleto
#include <iostream>  // Biblioteca para entrada/saída padrão (ex.: std::cout)
#include <string>  // Biblioteca para usar strings

using std::string;

// Construtor da classe Esqueleto que inicializa a posição X e Y e define a vida do esqueleto, chamando o construtor da classe base Inimigo
Esqueleto::Esqueleto(int x, int y)
    : Inimigo("Esqueleto", x, y, 30) {}

// Método sobrescrito da classe base para imprimir o esqueleto
void Esqueleto::print() {
    std::cout << "💀";  // Imprime o emoji de uma caveira
}
