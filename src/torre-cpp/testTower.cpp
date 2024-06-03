#include "../../lib/torre-hpp/testTower.hpp"

using std::string;

// Construtor da classe TorreDeCanhao
Torre::Torre(int quantidade, int posicao, string noise, string power, int attack, int range)
:Torre(quantidade, posicao, power, noise, attack,  range) {
    
}


void Torre::addAtack(int attack) {
    ataque = attack;
}

void Torre::addRange(int range) {
    alcance = range;
}

void Torre::addNoise(string noise) {
    noise = noise; 
}

void Torre::addPower(string power) {
    power = power; 
}