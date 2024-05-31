#include "../Torres-hpp/TorreDeFogo.hpp"

// Construtor da classe TorreDeFogo
TorreDeFogo::TorreDeFogo(int quantidade, int posicao)
    : Torre(quantidade, posicao), ataque(0), range(0), additionalFuel(0), flameTemperature(0.0) {
   
}

// Implementação das funções virtuais puras da classe base
void TorreDeFogo::addAtack(int ataque) {
    this->ataque = ataque;
}

void TorreDeFogo::addRange(int range) {
    this->range = range;
}

void TorreDeFogo::addNoise(const std::string& noise) {
    this->noise = noise; // Armazene o ruído recebido
}

void TorreDeFogo::addPower(const std::string& power) {
    this->power = power; // Armazene o poder recebido
}


