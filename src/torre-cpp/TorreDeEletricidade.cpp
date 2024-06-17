#include "../../include/torre-hpp/TorreDeEletricidade.hpp"
#include "iostream"

using std::cout;

// Construtor da classe TorreDeEletricidade
TorreDeEletricidade::TorreDeEletricidade(int x, int y) 
: Torre("Torre de Eletricidade", x,y, 5, 5) {}

// Implementação do método de ataque específico para a Torre de Fogo
void TorreDeEletricidade::atacar() const {
   cout <<  nome << " na posição: " << "["<< m_positionX << "]" << "["<< m_positionY << "]"  << " ataca com eletricidade!\n";

};

void TorreDeEletricidade::print(){
      cout << "♜⚡";
};