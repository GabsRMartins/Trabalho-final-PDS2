#include "../../include/inimigo-hpp/Escorpiao.hpp"  // Inclui o cabeçalho da classe Escorpiao
#include <iostream>  // Biblioteca para entrada/saída padrão (ex.: std::cout)
#include <string>  // Biblioteca para usar strings

using std::string;

// Construtor da classe Escorpiao que inicializa a posição X e Y e define a vida do escorpião, chamando o construtor da classe base Inimigo
Escorpiao::Escorpiao(int x, int y)
    : Inimigo("Escorpiao", x, y, 35) {}

// Método sobrescrito da classe base para imprimir o escorpião
void Escorpiao::print() {
    std::cout << "🦂";  // Imprime o emoji de um escorpião
}
