#include "../../include/inimigo-hpp/Inimigo.hpp"
#include <iostream>

using std::cout;
using std::string;



// Construtor da classe Inimigo que inicializa o nome, a posição X e Y e a vida do inimigo
Inimigo::Inimigo(const string& nome, int x, int y, int vida)
    : nome(nome), m_positionX(x) , m_positionY(y), vida(vida) {}

// Método para mover o inimigo
void Inimigo::moverX() {
    m_positionX += 1; // Movimenta o inimigo uma posição para a frente
}

void Inimigo::moverY() {
    m_positionY += 1; // Movimenta o inimigo uma posição para a frente
}
// Método para o inimigo receber dano
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
// Método para obter a vida do inimigo de acordo com a dificuldade
int Inimigo::getVida() const {
    return vida;
}

int Inimigo::getVidaDificil() const {
    return vida+20;
}

int Inimigo::getVidaFacil() const {
    return vida-20;
}
