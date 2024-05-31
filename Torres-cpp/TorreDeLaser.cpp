#include "../Torres-hpp/TorreDeLaser.hpp"

// Construtor da classe TorreDeLaser
TorreDeLaser::TorreDeLaser(int quantidade, int posicao)
    : Torre(quantidade, posicao), ataque(0), range(0), additionalPower(0), laserIntensity(0.0) {
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeLaser::addAtack(int ataque) {
    this->ataque = ataque;
}

void TorreDeLaser::addRange(int range) {
    this->range = range;
}

void TorreDeLaser::addNoise(const std::string& noise) {
    this->noise = noise; // Armazene o ruído recebido
}

void TorreDeLaser::addPower(const std::string& power) {
    this->power = power; // Armazene o poder recebido
}

