#include "../Torres-hpp/TorreDeGelo.hpp"

// Construtor da classe TorreDeGelo
TorreDeGelo::TorreDeGelo (int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalIce, double freezingTemperature)
:Torre(quantidade, posicao, power, noise, ataque,  range){
 
}

// Implementação das funções virtuais puras da classe base
void TorreDeGelo::addAtack(int ataque) {
    ataque = ataque;
}

void TorreDeGelo::addRange(int range) {
    range = range;
}

void TorreDeGelo::addNoise(std::string noise) {
    noise = noise; // Armazene o ruído recebido
}

void TorreDeGelo::addPower(std::string power) {
    power = power; // Armazene o poder recebido
}


