#include "../../include/torre-hpp/TorreDeFantasmas.hpp"
#include <string>

using std::string;
using std::cout;

// Construtor da classe TorreDeFantasmas
TorreDeFantasmas::TorreDeFantasmas(int x, int y)
    : Torre("Torre de Fantasmas", x,y, 2, 15) {}

// Implementação do método de ataque específico para a Torre de Fogo
void TorreDeFantasmas::atacar() const {
   cout <<  nome << " na posição: " << "["<< m_positionX << "]" << "["<< m_positionY << "]"  << " ataca com fogo!\n";

};

void TorreDeFantasmas::print(){
      cout << "♜👻";
};

