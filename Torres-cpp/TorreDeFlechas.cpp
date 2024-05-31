#include "../Torres-hpp/TorreDeFlechas.hpp"

// Construtor da classe TorreDeFlechas
TorreDeFlechas::TorreDeFlechas(int quantidade, int posicao)
    : Torre(quantidade, posicao), ataque(0), range(0), additionalArrows(0), arrowVelocity(0.0) {
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeFlechas::addAtack(int ataque) {
    this->ataque = ataque;
}

void TorreDeFlechas::addRange(int range) {
    this->range = range;
}

void TorreDeFlechas::addNoise(const std::string& noise) {
    this->noise = noise; // Armazene o ruído recebido
}

void TorreDeFlechas::addPower(const std::string& power) {
    this->power = power; // Armazene o poder recebido
}

