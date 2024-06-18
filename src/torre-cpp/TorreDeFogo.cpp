#include "../../include/torre-hpp/TorreDeFogo.hpp"
#include <string>

using std::string;
using std::cout;

// Construtor da classe TorreDeFogo
TorreDeFogo::TorreDeFogo(int x, int y)
    : Torre("Torre de Fogo", x,y, 3, 10) {}

// Implementação do método de ataque específico para a Torre de Fogo
void TorreDeFogo::atacar() const {
   cout <<  nome << " na posição: " << "["<< m_positionX << "]" << "["<< m_positionY << "]"  << " ataca com fogo!\n";

};

void TorreDeFogo::print(){
      cout << "♜🔥";
};

string TorreDeFogo::getTipo(){
    return "Torre De Fogo";
}