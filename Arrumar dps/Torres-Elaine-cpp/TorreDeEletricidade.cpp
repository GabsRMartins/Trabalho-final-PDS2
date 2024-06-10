#include "../Torres-hpp/TorreDeEletricidade.hpp"

// Construtor da classe TorreDeEletricidade
TorreDeEletricidade::TorreDeEletricidade(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int voltagem, double eficiencia)
:Torre(quantidade, posicao, poder, ruido, ataque,  alcance){
    
}

// Implementação das funções virtuais puras da classe base
void TorreDeEletricidade::addAtaque(int ataque) {
    ataque = ataque;
}

void TorreDeEletricidade::addAlcance(int alcance) {
    alcance = alcance;
}

void TorreDeEletricidade::addRuido(const std::string& ruido) {
    this->ruido = ruido; // Armazene o ruído recebido
}

void TorreDeEletricidade::addPoder( const std::string& poder) {
    this->poder = poder; // Armazene o poder recebido
}
