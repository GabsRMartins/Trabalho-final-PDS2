#include "../Torres-hpp/TorreDeCanhao.hpp"

// Construtor da classe TorreDeCanhao
TorreDeCanhao::TorreDeCanhao(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalAmmo, double cannonPower)
:Torre(quantidade, posicao, power, noise, ataque,  range) {
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeCanhao::addAtack(int ataque) {
    ataque = ataque;
}

void TorreDeCanhao::addRange(int range) {
    range = range;
}

void TorreDeCanhao::addNoise(std::string noise) {
    noise = noise; // Armazene o ruído recebido
}

void TorreDeCanhao::addPower(std::string power) {
    power = power; // Armazene o poder recebido
}
