#include "../Torres-hpp/TorreDeFlechas.hpp"

// Construtor da classe TorreDeFlechas
TorreDeFlechas::TorreDeFlechas(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalArrows,double arrowVelocity )
:Torre(quantidade, posicao, power, noise, ataque,  range){
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeFlechas::addAtack(int ataque) {
    ataque = ataque;
}

void TorreDeFlechas::addRange(int range) {
    range = range;
}

void TorreDeFlechas::addNoise(const std::string& noise) {
    this->noise = noise; // Armazene o ruído recebido
}

void TorreDeFlechas::addPower(const std::string& power) {
    this->power = power; // Armazene o poder recebido
}

