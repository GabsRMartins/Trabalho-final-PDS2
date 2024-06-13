#include "/../../inimigo-hpp/Zumbi.hpp"
#include <iostream>
#include <ctime>

Zumbi::Zumbi(const string& nome,int m_positionX, int m_positionY,int vida,int defesa)
    : Inimigo(nome, m_positionX, m_positionY, vida, defesa){
      
        this->vida = vida;
        this->defesa = defesa;
        this->m_positionX = m_positionx;
        this->m_positionY = m_positionY,
        this->nome = nome;
   };
    // Método para mover o inimigo
    // Método para mover o inimigo
void Zumbi::mover() {
      std::srand(static_cast<unsigned int>(std::time(nullptr)));// Define a semente baseada na hora atual
    m_positionX += (std::rand() % 2) == 0 ? 1: 2;// se par o inimigo movimenta se impar 2
}
// Método para receber dano
void Zumbi::receberDano(int dano) {
    
    vida -= dano - defesa/2;

    if (vida < 0) vida = 0;
    cout << nome << " recebeu " << dano << " de dano. Vida restante: " << vida << "\n";
}

// Método para obter a posição do inimigo
int Zumbi::getPosicaoX() const {
    return m_positionX;
}

int Zumbi::getPosicaoY() const {
    return m_positionY;
}
// Método para obter a vida do inimigo
int Zumbi::getVida() const {
    return vida;
}


 void Zumbi::print(){

    std::cout << "🧟";
 }