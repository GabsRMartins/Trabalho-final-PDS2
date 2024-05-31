#include "../Torres-hpp/TorreDeExplosivos.hpp"

// Construtor da classe TorreDeExplosivos
TorreDeExplosivos::TorreDeExplosivos(int quantidade, int posicao)
    : Torre(quantidade, posicao), ataque(0), range(0), additionalExplosives(0), explosionPower(0.0) {
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeExplosivos::addAtack(int ataque) {
    this->ataque = ataque;
}

void TorreDeExplosivos::addRange(int range) {
    this->range = range;
}

void TorreDeExplosivos::addNoise(const std::string& noise) {
    this->noise = noise; // Armazene o ruído recebido
}

void TorreDeExplosivos::addPower(const std::string& power) {
    this->power = power; // Armazene o poder recebido
}
