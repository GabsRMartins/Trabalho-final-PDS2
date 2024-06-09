#include "../Torres-hpp/TorreDeFogo.hpp"

// Construtor da classe TorreDeFogo
TorreDeFogo::TorreDeFogo(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int addFogo, double temperaturaChamas)
:Torre(quantidade, posicao, poder, ruido, ataque, alcance){
   
}

// Implementação das funções virtuais puras da classe base
void TorreDeFogo::addAtaque(int ataque) {
    ataque = ataque;
}

void TorreDeFogo::addAlcance(int range) {
    alcance = alcance;
}

void TorreDeFogo::addRuido(const std::string& noise) {
    this->ruido = ruido; // Armazene o ruído recebido
}

void TorreDeFogo::addPoder(const std::string& power) {
    this->poder = poder; // Armazene o poder recebido
}


