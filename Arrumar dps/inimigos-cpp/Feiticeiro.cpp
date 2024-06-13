#include "/../../inimigo-hpp/Feiticeiro.hpp"
#include <iostream>
#include <ctime>

Feiticeiro::Feiticeiro(const string& nome,int m_positionX, int m_positionY,int vida,int defesa)
    : Inimigo(nome, m_positionX, m_positionY, vida, defesa){
      
        this->vida = vida;
        this->defesa = defesa;
        this->m_positionX = m_positionx;
        this->m_positionY = m_positionY,
        this->nome =nome;
   };
    // Método para mover o inimigo
    // Método para mover o inimigo
void Feiticeiro::mover() {
      
    m_positionX += 1;
// Método para receber dano
void Feiticeiro::receberDano(int dano) {
    if (dano >= vida* 0.7) vida -= dano;
    else vida -= dano - defesa;

    if (vida < 0) vida = 0;
    cout << nome << " recebeu " << dano << " de dano. Vida restante: " << vida << "\n";
}
}
// Método para obter a posição do inimigo
int Feiticeiro::getPosicaoX() const {
    return m_positionX;
}

int Feiticeiro::getPosicaoY() const {
    return m_positionY;
}
// Método para obter a vida do inimigo
int Feiticeiro::getVida() const {
    return vida;
}


 void Feiticeiro::print(){

    std::cout << "🧙🏻‍♂️";
 }