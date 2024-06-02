#include "../Torres-hpp/TorreDeEletricidade.hpp"

// Construtor da classe TorreDeEletricidade
TorreDeEletricidade::TorreDeEletricidade(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int voltage, double efficiency)
:Torre(quantidade, posicao, power, noise, ataque,  range){
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeEletricidade::addAtack(int ataque) {
    ataque = ataque;
}

void TorreDeEletricidade::addRange(int range) {
    range = range;
}

void TorreDeEletricidade::addNoise(std::string noise) {
    noise = noise; // Armazene o ruído recebido
}

void TorreDeEletricidade::addPower( std::string power) {
    power = power; // Armazene o poder recebido
}
