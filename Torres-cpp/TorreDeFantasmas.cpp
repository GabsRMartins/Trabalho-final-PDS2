#include "../Torres-hpp/TorreDeFantasmas.hpp"

// Construtor da classe TorreDeFantasmas
TorreDeFantasmas::TorreDeFantasmas(int quantidade, int posicao)
    : Torre(quantidade, posicao), ataque(0), range(0), additionalSpecters(0), ghostPower(0.0) {
 
}

// Implementação das funções virtuais puras da classe base
void TorreDeFantasmas::addAtack(int ataque) {
    this->ataque = ataque;
}

void TorreDeFantasmas::addRange(int range) {
    this->range = range;
}

void TorreDeFantasmas::addNoise(const std::string& noise) {
    this->noise = noise; // Armazene o ruído recebido
}

void TorreDeFantasmas::addPower(const std::string& power) {
    this->power = power; // Armazene o poder recebido
}
