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

void TorreDeFantasmas::addNoise(std::string noise) {
    noise = noise; // Armazene o ruído recebido
}

void TorreDeFantasmas::addPower(std::string power) {
    power = power; // Armazene o poder recebido
}
