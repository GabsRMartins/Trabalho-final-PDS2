#include "../../inimigo-hpp/Inimigo.hpp"
#include <iostream>

using std::cout;
using std::string;



// Construtor da classe Inimigo
Inimigo::Inimigo(const string& nome, int m_positionX, int m_positionY, int vida, int defesa)
: nome(nome), m_positionX(m_positionX) , m_positionY(m_positionY), vida(vida), defesa(defesa) {}

;

