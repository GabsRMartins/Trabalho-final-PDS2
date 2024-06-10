#include "../Torres-hpp/TorreDeFlechas.hpp"

// Construtor da classe TorreDeFlechas
TorreDeFlechas::TorreDeFlechas(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int addFlexas,double velocidadeFlexas )
:Torre(quantidade, posicao, poder, ruido, ataque,  alcance){
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeFlechas::addAtaque(int ataque) {
    ataque = ataque;
}

void TorreDeFlechas::addAlcance(int range) {
    alcance = alcance;
}

void TorreDeFlechas::addRuido(const std::string& noise) {
    this->ruido = ruido; // Armazene o ruído recebido
}

void TorreDeFlechas::addPoder(const std::string& power) {
    this->poder = poder; // Armazene o poder recebido
}

