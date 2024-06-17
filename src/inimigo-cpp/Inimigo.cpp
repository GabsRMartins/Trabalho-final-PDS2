#include "../../include/inimigo-hpp/Inimigo.hpp"
#include <iostream>

using std::cout;
using std::string;



// Construtor da classe Inimigo
Inimigo::Inimigo(const string& nome, int x, int y, int vida)
    : nome(nome), m_positionX(x) , m_positionY(y), vida(vida) {}

// Método para mover o inimigo
void Inimigo::moverX() {
    m_positionX += 1; // Movimenta o inimigo uma posição para a frente
}

void Inimigo::moverY() {
    m_positionY += 1; // Movimenta o inimigo uma posição para a frente
}
// Método para receber dano
void Inimigo::receberDano(int dano) {
    vida -= dano;
    if (vida < 0){
    vida = 0;
    } 
    cout << nome << " recebeu " << dano << " de dano. Vida restante: " << vida << "\n";
}

// Método para obter a posição do inimigo
int Inimigo::getPosicaoX() {
    return m_positionX;
}

int Inimigo::getPosicaoY() {
    return m_positionY;
}
// Método para obter a vida do inimigo
int Inimigo::getVida() const {
    return vida;
}
