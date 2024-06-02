#include "../Torres-hpp/TorreDeFogo.hpp"

// Construtor da classe TorreDeFogo
TorreDeFogo::TorreDeFogo(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalFuel, double flameTemperature)
:Torre(quantidade, posicao, power, noise, ataque,  range){
   
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


