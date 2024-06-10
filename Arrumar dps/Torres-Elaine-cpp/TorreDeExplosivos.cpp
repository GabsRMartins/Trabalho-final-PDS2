#include "../Torres-hpp/TorreDeExplosivos.hpp"

// Construtor da classe TorreDeExplosivos
TorreDeExplosivos::TorreDeExplosivos(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int addExplosivos, double poderExplosivos )
:Torre(quantidade, posicao, poder, ruido, ataque,  alcance){
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeExplosivos::addAtaque(int ataque) {
    ataque = ataque;
}

void TorreDeExplosivos::addAlcance(int alcance) {
    alcance = alcance;
}

void TorreDeExplosivos::addRuido(const std::string& ruido) {
    this->ruido = ruido; // Armazene o ruído recebido
}

void TorreDeExplosivos::addPoder(const std::string& poder) {
    this->poder = poder; // Armazene o poder recebido
}
