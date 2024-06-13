#include "/../../inimigo-hpp/Esqueleto.hpp"
#include <iostream>
#include <ctime>

Esqueleto::Esqueleto (const string& nome,int m_positionX, int m_positionY,int vida,int defesa)
    : Inimigo(nome, m_positionX, m_positionY, vida, defesa){
      
        this->vida = vida;
        this ->defesa = defesa;
   };
   
    // Método para mover o inimigo
void Esqueleto::mover() {
    m_positionX += 1; // Movimenta o inimigo uma posição para a frente
}

// Método para receber dano
void Esqueleto::receberDano(int dano) {
  
    vida -= dano - defesa;
    if (vida < 0) vida = 0;
    std::cout << nome << " recebeu " << dano << " de dano. Vida restante: " << vida << "\n";
}

// Método para obter a posição do inimigo
int Esqueleto::getPosicaoX() const {
    return m_positionX;
}

int Esqueleto::getPosicaoY() const {
    return m_positionY;
}
// Método para obter a vida do inimigo
int Esqueleto::getVida() const {
    return vida;
}


 void Esqueleto::print(){

    std::cout << "💀";
 }