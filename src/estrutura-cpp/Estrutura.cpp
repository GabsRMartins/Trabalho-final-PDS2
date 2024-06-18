#include "../../include/estrutura-hpp/Estrutura.hpp"  // Inclui o cabeçalho da classe Estrutura
#include <iostream>  // Biblioteca para entrada/saída padrão (ex.: std::cout)

using std::cout;
using std::string;

// Construtor da classe Estrutura que inicializa o tipo e a posição X e Y
Estrutura::Estrutura(const string& tipo, int x, int y)
    : tipo(tipo), m_positionX(x), m_positionY(y) {}

// Método para obter a posição X da Estrutura
int Estrutura::getPosicaoX() {
    return m_positionX;
}

// Método para obter a posição Y da Estrutura
int Estrutura::getPosicaoY() {
    return m_positionY;
}

