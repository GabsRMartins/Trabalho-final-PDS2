#include "../../include/torre-hpp/Torre.hpp"
#include <vector>
#include "iostream"

using std::vector;

// Construtor da classe Torre
Torre::Torre(const std::string& nome, int x, int y, int alcance, int ataque)
    : nome(nome), m_positionX(x) , m_positionY(y), alcance(alcance), ataque(ataque) {}

// Método para obter a posição da torre
int Torre::getPosicaoX() const {
 
    return m_positionX;
}


int Torre::getPosicaoY() const {
 
    return m_positionY;
}


// Método para obter o alcance da torre
int Torre::getAlcance() const {
    return alcance;
}
// Método para atacar
int Torre::getAtaque() const {
    return ataque;
}

void Torre::print() {
    std::cout<< "Torre";
}