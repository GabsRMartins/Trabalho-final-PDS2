#include "../../include/torre-hpp/TorreDeAgua.hpp"
#include <string>

using std::string;
using std::cout;

// Construtor da classe TorreDeAgua
TorreDeAgua::TorreDeAgua(int x, int y)
    : Torre("Torre de Gelo", x,y, 3, 10) {}

// Implementação do método de ataque específico para a Torre de Fogo
void TorreDeAgua::atacar() const {
   cout <<  nome << " na posição: " << "["<< m_positionX << "]" << "["<< m_positionY << "]"  << " ataca com água!\n";

};

void TorreDeAgua::print(){
      cout << "♜💧";
};

