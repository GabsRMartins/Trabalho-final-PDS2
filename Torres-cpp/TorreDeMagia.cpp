#include "../Torres-hpp/TorreDeMagia.hpp"

// Construtor da classe TorreDeMagia
TorreDeMagia::TorreDeMagia(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalMana, double spellPower)
:Torre(quantidade, posicao, power, noise, ataque,  range){
   
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
