#include "../../include/inimigo-hpp/Vampiro.hpp"  // Inclui o cabeçalho da classe Vampiro
#include <iostream>  // Biblioteca para entrada/saída padrão (ex.: std::cout)
#include <string>  // Biblioteca para usar strings

using std::string;

// Construtor da classe Vampiro que inicializa a posição X e Y e define a vida do vampiro, chamando o construtor da classe base Inimigo
Vampiro::Vampiro(int x, int y)
    : Inimigo("Vampiro", x, y, 100) {}

// Método sobrescrito da classe base para imprimir o vampiro
void Vampiro::print() {
    std::cout << "🧛";  // Imprime o emoji de um vampiro
}
