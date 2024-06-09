#include "../Torres-hpp/TorreDeFantasmas.hpp"

// Construtor da classe TorreDeFantasmas
TorreDeFantasmas::TorreDeFantasmas(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalSpecters, double ghostPower)
:Torre(quantidade, posicao, power, noise, ataque,  range){
 
}

// Implementação das funções virtuais puras da classe base
void TorreDeFantasmas::addAtack(int ataque) {
    ataque = ataque;
}

void TorreDeFantasmas::addRange(int range) {
    range = range;
}

void TorreDeFantasmas::addNoise(const std::string& noise) {
    this->noise = noise; // Armazene o ruído recebido
}

void TorreDeFantasmas::addPower(const std::string& power) {
    this->power = power; // Armazene o poder recebido
}
