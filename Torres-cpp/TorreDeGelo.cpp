#include "../Torres-hpp/TorreDeGelo.hpp"

// Construtor da classe TorreDeGelo
TorreDeGelo::TorreDeGelo(int quantidade, int posicao)
    : Torre(quantidade, posicao), ataque(0), range(0), additionalIce(0), freezingTemperature(0.0) {
 
}

// Implementação das funções virtuais puras da classe base
void TorreDeGelo::addAtack(int ataque) {
    this->ataque = ataque;
}

void TorreDeGelo::addRange(int range) {
    this->range = range;
}

void TorreDeGelo::addNoise(const std::string& noise) {
    this->noise = noise; // Armazene o ruído recebido
}

void TorreDeGelo::addPower(const std::string& power) {
    this->power = power; // Armazene o poder recebido
}

// Variáveis específicas da TorreDeGelo
int additionalIce; // Quantidade adicional de gelo
double freezingTemperature; // Temperatura de congelamento (em graus Celsius)
