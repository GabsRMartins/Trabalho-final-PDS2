#include "../Torres-hpp/TorreDeVeneno.hpp"

// Construtor da classe TorreDeVeneno
TorreDeVeneno::TorreDeVeneno(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalToxins, double poisonIntensity)
:Torre(quantidade, posicao, power, noise, ataque,  range){
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeVeneno::addAtack(int ataque) {
    this->ataque = ataque;
}

void TorreDeVeneno::addRange(int range) {
    this->range = range;
}

void TorreDeVeneno::addNoise(const std::string& noise) {
    this->noise = noise; // Armazene o ruído recebido
}

void TorreDeVeneno::addPower(const std::string& power) {
    this->power = power; // Armazene o poder recebido
}
