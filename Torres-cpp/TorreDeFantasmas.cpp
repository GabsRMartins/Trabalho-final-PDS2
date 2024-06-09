#include "../Torres-hpp/TorreDeFantasmas.hpp"

// Construtor da classe TorreDeFantasmas
TorreDeFantasmas::TorreDeFantasmas(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int addFantasmas, double poderFantasma)
:Torre(quantidade, posicao, poder,  ruido, ataque,  alcance){
 
}

// Implementação das funções virtuais puras da classe base
void TorreDeFantasmas::addAtaque(int ataque) {
    ataque = ataque;
}

void TorreDeFantasmas::addAlcance(int range) {
    alcance = alcance;
}

void TorreDeFantasmas::addRuido(const std::string& noise) {
    this->ruido = ruido; // Armazene o ruído recebido
}

void TorreDeFantasmas::addPoder(const std::string& power) {
    this->poder = poder; // Armazene o poder recebido
}
