#include "../../include/torre-hpp/TorreDeEletricidade.hpp"
#include "iostream"

using std::cout;

// Construtor da classe TorreDeEletricidade que inicializa a torre com um nome, posição X e Y, alcance e dano
TorreDeEletricidade::TorreDeEletricidade(int x, int y) 
: Torre("Torre de Eletricidade", x,y, 5, 5) {}

// Implementação do método de ataque específico para a Torre de Eletricidade
void TorreDeEletricidade::atacar() const {
   cout <<  nome << " na posição: " << "["<< m_positionX << "]" << "["<< m_positionY << "]"  << " ataca com eletricidade!\n";

};

void TorreDeEletricidade::print(){
      cout << "♜⚡"; // Imprime o símbolo da torre com um emoji de eletricidade
};