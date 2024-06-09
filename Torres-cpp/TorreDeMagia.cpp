#include "../Torres-hpp/TorreDeMagia.hpp"

// Construtor da classe TorreDeMagia
TorreDeMagia::TorreDeMagia(int quantidade, int posicao, const std::string& noise, const std::string& power, int ataque, int alcance, int addMagia, double poderFeitico)
:Torre(quantidade, posicao, poder, ruido, ataque,  alcance){
   
}

// Implementação das funções virtuais puras da classe base
void TorreDeMagia::addAtaque(int ataque) {
    this->ataque = ataque;
}

void TorreDeMagia::addAlcance(int range) {
    this->alcance = alcance;
}

void TorreDeMagia::addRuido(const std::string& noise) {
    this->ruido = ruido; // Armazene o ruído recebido
}

void TorreDeMagia::addPoder(const std::string& power) {
    this->poder = poder; // Armazene o poder recebido
}
  