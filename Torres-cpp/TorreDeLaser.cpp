#include "../Torres-hpp/TorreDeLaser.hpp"

// Construtor da classe TorreDeLaser
TorreDeLaser::TorreDeLaser(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalPower, double laserIntensity)
:Torre(quantidade, posicao, power, noise, ataque,  range){
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeLaser::addAtack(int ataque) {
    ataque = ataque;
}

void TorreDeLaser::addRange(int range) {
    range = range;
}

void TorreDeLaser::addNoise(const std::string& noise) {
    this->noise = noise; // Armazene o ruído recebido
}

void TorreDeLaser::addPower(const std::string& power) {
    this->power = power; // Armazene o poder recebido
}

