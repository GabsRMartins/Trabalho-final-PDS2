#include "../Torres-hpp/TorreDeMagia.hpp"

// Construtor da classe TorreDeMagia
TorreDeMagia::TorreDeMagia(int quantidade, int posicao)
    : Torre(quantidade, posicao), ataque(0), range(0), additionalMana(0), spellPower(0.0) {
   
}

// Implementação das funções virtuais puras da classe base
void TorreDeMagia::addAtack(int ataque) {
    this->ataque = ataque;
}

void TorreDeMagia::addRange(int range) {
    this->range = range;
}

void TorreDeMagia::addNoise(const std::string& noise) {
    this->noise = noise; // Armazene o ruído recebido
}

void TorreDeMagia::addPower(const std::string& power) {
    this->power = power; // Armazene o poder recebido
}
