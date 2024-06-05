#include "../../include/inimigo-hpp/Inimigo.hpp"
#include <iostream>

using std::cout;
using std::string;



// Construtor da classe Inimigo
Inimigo::Inimigo(const string& nome, int posicao, int vida)
    : nome(nome), posicao(posicao), vida(vida) {}

// Método para mover o inimigo
void Inimigo::mover() {
    posicao += 1; // Movimenta o inimigo uma posição para a frente
}

// Método para receber dano
void Inimigo::receberDano(int dano) {
    vida -= dano;
    if (vida < 0) vida = 0;
    cout << nome << " recebeu " << dano << " de dano. Vida restante: " << vida << "\n";
}

// Método para obter a posição do inimigo
int Inimigo::getPosicao() const {
    return posicao;
}

// Método para obter a vida do inimigo
int Inimigo::getVida() const {
    return vida;
}
