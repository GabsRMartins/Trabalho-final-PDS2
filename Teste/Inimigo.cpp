#include "Inimigo.hpp"
#include <iostream>

// Construtor da classe Inimigo
Inimigo::Inimigo(const std::string& nome, int posicao, int vida)
    : nome(nome), posicao(posicao), vida(vida) {}

// Método para mover o inimigo
void Inimigo::mover() {
    posicao += 1; // Movimenta o inimigo uma posição para a frente
}

// Método para receber dano
void Inimigo::receberDano(int dano) {
    vida -= dano;
    if (vida < 0) vida = 0;
    std::cout << nome << " recebeu " << dano << " de dano. Vida restante: " << vida << "\n";
}

// Método para obter a posição do inimigo
int Inimigo::getPosicao() const {
    return posicao;
}

// Método para obter a vida do inimigo
int Inimigo::getVida() const {
    return vida;
}
