#include "Torre.hpp"

// Construtor da classe Torre
Torre::Torre(const std::string& nome, int posicao, int alcance, int ataque)
    : nome(nome), posicao(posicao), alcance(alcance), ataque(ataque) {}

// Método para obter a posição da torre
int Torre::getPosicao() const {
    return posicao;
}

// Método para obter o alcance da torre
int Torre::getAlcance() const {
    return alcance;
}
// Método para atacar
int Torre::getAtaque() const {
    return ataque;
}
