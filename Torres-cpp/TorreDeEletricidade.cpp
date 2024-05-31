#include "../Torres-hpp/TorreDeEletricidade.hpp"

// Construtor da classe TorreDeEletricidade
TorreDeEletricidade::TorreDeEletricidade(int quantidade, int posicao)
    : Torre(quantidade, posicao), ataque(0), range(0), voltage(0), efficiency(0.0) {
    
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
