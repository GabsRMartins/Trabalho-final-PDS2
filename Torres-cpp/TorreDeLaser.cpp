#include "../Torres-hpp/TorreDeLaser.hpp"

// Construtor da classe TorreDeLaser
TorreDeLaser::TorreDeLaser(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int addEnergia, double intensidadeEnergia)
:Torre(quantidade, posicao, poder, ruido, ataque,  alcance){
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeLaser::addAtaque(int ataque) {
    ataque = ataque;
}

void TorreDeLaser::addAlcance(int range) {
    alcance = alcance;
}

void TorreDeLaser::addRuido(const std::string& noise) {
    this->ruido = ruido; // Armazene o ruído recebido
}

void TorreDeLaser::addPoder(const std::string& power) {
    this->poder = poder; // Armazene o poder recebido
}

