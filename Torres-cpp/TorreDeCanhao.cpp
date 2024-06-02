#include "../Torres-hpp/TorreDeCanhao.hpp"

// Construtor da classe TorreDeCanhao
TorreDeCanhao::TorreDeCanhao(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalAmmo, double cannonPower)
:Torre(quantidade, posicao, power, noise, ataque,  range) {
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeCanhao::addAtack(int ataque) {
    this->ataque = ataque;
}

void TorreDeCanhao::addRange(int range) {
    this->range = range;
}

void TorreDeCanhao::addNoise(const std::string& noise) {
    this->noise = noise; // Armazene o ruído recebido
}

void TorreDeCanhao::addPower(const std::string& power) {
    this->power = power; // Armazene o poder recebido
}
