#include "../Torres-hpp/TorreDeExplosivos.hpp"

// Construtor da classe TorreDeExplosivos
TorreDeExplosivos::TorreDeExplosivos(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalExplosives, double explosionPower )
:Torre(quantidade, posicao, power, noise, ataque,  range){
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeExplosivos::addAtack(int ataque) {
    ataque = ataque;
}

void TorreDeExplosivos::addRange(int range) {
    range = range;
}

void TorreDeExplosivos::addNoise(const std::string& noise) {
    this->noise = noise; // Armazene o ruído recebido
}

void TorreDeExplosivos::addPower(const std::string& power) {
    this->power = power; // Armazene o poder recebido
}
