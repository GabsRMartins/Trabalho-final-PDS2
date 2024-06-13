#include "../../include/estrutura-hpp/Estrutura.hpp"
#include <iostream>

using std::cout;
using std::string;


// Construtor da classe Estrutura
Estrutura::Estrutura(const string& tipo, int x, int y)
    : tipo(tipo), m_positionX(x) , m_positionY(y){}

// Método para obter a posição do Estrutura
int Estrutura::getPosicaoX() {
    return m_positionX;
}

int Estrutura::getPosicaoY() {
    return m_positionY;
}

