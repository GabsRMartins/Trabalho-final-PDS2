#include "../../include/torre-hpp/TorreDeAgua.hpp" 
#include <string>

using std::string;
using std::cout;

// Construtor da classe TorreDeAgua que inicializa a torre com um nome, posição X e Y, alcance e dano
TorreDeAgua::TorreDeAgua(int x, int y)
    : Torre("Torre de Gelo", x,y, 3, 10) {}

// Implementação do método de ataque específico para a Torre de Água
void TorreDeAgua::atacar() const {
   cout <<  nome << " na posição: " << "["<< m_positionX << "]" << "["<< m_positionY << "]"  << " ataca com água!\n";

};

void TorreDeAgua::print(){
      cout << "♜💧";  // Imprime o símbolo da torre com um emoji de água
};

