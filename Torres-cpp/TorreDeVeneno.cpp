#include "../Torres-hpp/TorreDeVeneno.hpp"


// Construtor da classe TorreDeVeneno
TorreDeVeneno::TorreDeVeneno(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int addTOxinas, double poderVeneno)
:Torre(quantidade, posicao, poder, ruido, ataque,  alcance){
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeVeneno::addAtaque(int ataque) {
    ataque = ataque;
}

void TorreDeVeneno::addAlcance(int range) {
    alcance = alcance;
}

void TorreDeVeneno::addRuido(const std::string& noise) {
    this->ruido = ruido; // Armazene o ruído recebido
}

void TorreDeVeneno::addPoder(const std::string& power) {
    this->poder = poder; // Armazene o poder recebido
}
