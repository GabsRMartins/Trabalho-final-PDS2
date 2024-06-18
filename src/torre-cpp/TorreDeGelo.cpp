#include "../../include/torre-hpp/TorreDeGelo.hpp"
#include <string>

using std::string;
using std::cout;

// Construtor da classe TorreDeGelo
TorreDeGelo::TorreDeGelo(int x, int y)
    : Torre("Torre de Gelo", x,y, 5, 5) {}

// Implementação do método de ataque específico para a Torre de Fogo
void TorreDeGelo::atacar() const {
   cout <<  nome << " na posição: " << "["<< m_positionX << "]" << "["<< m_positionY << "]"  << " ataca com gelo!\n";

};

void TorreDeGelo::print(){
      cout << "♜❄️";
};

