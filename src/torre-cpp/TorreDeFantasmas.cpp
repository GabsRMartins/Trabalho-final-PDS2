#include "../../include/torre-hpp/TorreDeFantasmas.hpp"
#include <string>

using std::string;
using std::cout;

// Construtor da classe TorreDeFantasmas que inicializa a torre com um nome, posição X e Y, alcance e dano
TorreDeFantasmas::TorreDeFantasmas(int x, int y)
    : Torre("Torre de Fantasmas", x,y, 2, 15) {}

// Implementação do método de ataque específico para a Torre de Fantasma
void TorreDeFantasmas::atacar() const {
   cout <<  nome << " na posição: " << "["<< m_positionX << "]" << "["<< m_positionY << "]"  << " ataca com fantasmas!\n";

};

void TorreDeFantasmas::print(){
      cout << "♜👻"; // Imprime o símbolo da torre com um emoji de fantasma
};

