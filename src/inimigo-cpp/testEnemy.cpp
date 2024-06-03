#include "../../lib/inimigo-hpp/testEnemy.hpp"

using std::string;


Inimigo::Inimigo(string noise, string power, int health, int ms)
:Inimigo(power, noise, health,  ms) {
    
}


void Inimigo::addHealth(int health) {
    Vida = health;
}

void Inimigo::addMovimentSpeed(int MS) {
    Velocidade = MS;
}

void Inimigo::addNoise(string noise) {
    noise = noise; 
}

void Inimigo::addPower(string power) {
    power = power; 
}