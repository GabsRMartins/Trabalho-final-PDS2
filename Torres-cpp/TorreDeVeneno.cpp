#include "../Torres-hpp/TorreDeVeneno.hpp"


// Construtor da classe TorreDeVeneno
TorreDeVeneno::TorreDeVeneno(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalToxins, double poisonIntensity)
:Torre(quantidade, posicao, power, noise, ataque,  range){
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeVeneno::addAtack(int ataque) {
    ataque = ataque;
}

void TorreDeVeneno::addRange(int range) {
    range = range;
}

void TorreDeVeneno::addNoise(std::string noise) {
    noise = noise; // Armazene o ruído recebido
}

void TorreDeVeneno::addPower(std::string power) {
    power = power; // Armazene o poder recebido
}
