#include "../../include/torre-hpp/TorreDeVeneno.hpp"
#include <string>

using std::string;
using std::cout;

// Construtor da classe TorreDeVeneno
TorreDeVeneno::TorreDeVeneno(int x, int y)
    : Torre("Torre de Veneno", x,y, 3, 15) {}

// Implementação do método de ataque específico para a Torre de Fogo
void TorreDeVeneno::atacar() const {
   cout <<  nome << " na posição: " << "["<< m_positionX << "]" << "["<< m_positionY << "]"  << " ataca com veneno!\n";

};

void TorreDeVeneno::print(){
      cout << "♜☣";
};

