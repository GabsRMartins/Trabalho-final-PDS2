#include "../Torres-hpp/TorreDeGelo.hpp"

// Construtor da classe TorreDeGelo
TorreDeGelo::TorreDeGelo (int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int addGelo, double temperaturaCongelamento)
:Torre(quantidade, posicao, poder, ruido, ataque,  alcance){
 
}

// Implementação das funções virtuais puras da classe base
void TorreDeGelo::addAtaque(int ataque) {
    ataque = ataque;
}

void TorreDeGelo::addAlcance(int range) {
    alcance = alcance;
}

void TorreDeGelo::addRuido(const std::string& noise) {
    this->ruido = ruido; // Armazene o ruído recebido
}

void TorreDeGelo::addPoder(const std::string& power) {
    this->poder = poder; // Armazene o poder recebido
}


