#include "../Torres-hpp/TorreDeEletricidade.hpp"

// Construtor da classe TorreDeEletricidade
TorreDeEletricidade::TorreDeEletricidade(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int voltage, double efficiency)
:Torre(quantidade, posicao, power, noise, ataque,  range){
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeEletricidade::addAtack(int ataque) {
    this->ataque = ataque;
}

void TorreDeEletricidade::addRange(int range) {
    this->range = range;
}

void TorreDeEletricidade::addNoise(const std::string& noise) {
    this->noise = noise; // Armazene o ruído recebido
}

void TorreDeEletricidade::addPower(const std::string& power) {
    this->power = power; // Armazene o poder recebido
}
