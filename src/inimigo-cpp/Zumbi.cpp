#include "../../include/inimigo-hpp/Zumbi.hpp"  // Inclui o cabeçalho da classe Zumbi
#include <iostream>  // Biblioteca para entrada/saída padrão (ex.: std::cout)
#include <string>  // Biblioteca para usar strings

using std::string;

// Construtor da classe Zumbi que inicializa a posição X e Y e define a vida do zumbi, chamando o construtor da classe base Inimigo
Zumbi::Zumbi(int x, int y)
    : Inimigo("Zumbi", x, y, 80) {}

// Método sobrescrito da classe base para imprimir o zumbi
void Zumbi::print() {
    std::cout << "🧟";  // Imprime o emoji para representar um zumbi
}
