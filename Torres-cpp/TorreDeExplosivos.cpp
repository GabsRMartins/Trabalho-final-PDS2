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

void TorreDeExplosivos::addNoise(std::string noise) {
    noise = noise; // Armazene o ruído recebido
}

void TorreDeExplosivos::addPower(std::string power) {
    power = power; // Armazene o poder recebido
}
