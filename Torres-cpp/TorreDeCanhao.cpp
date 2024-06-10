#include "../Torres-hpp/TorreDeCanhao.hpp"

// Construtor da classe TorreDeCanhao
TorreDeCanhao::TorreDeCanhao(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int additionalAmmo, double cannonPower)
:Torre(quantidade, posicao, poder, ruido, ataque,  alcance) {
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeCanhao::addAtaque(int ataque) {
    ataque = ataque;
}

void TorreDeCanhao::addAlcance(int alcance) {
    alcance = alcance;
}

void TorreDeCanhao::addRuido(const std::string&  ruido) {
    this->ruido = ruido; // Armazene o ruído recebido
}

void TorreDeCanhao::addPoder(const std::string&  poder) {
    this->poder= poder; // Armazene o poder recebido
}
