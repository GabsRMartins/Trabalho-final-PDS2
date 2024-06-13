#include "/../../inimigo-hpp/Morcego.hpp"
#include <iostream>
#include <ctime>

Morcego::Morcego(const string& nome,int m_positionX, int m_positionY,int vida,int defesa)
    : Inimigo(nome, m_positionX, m_positionY, vida, defesa){
      
        this->vida = vida;
        this->defesa = defesa;
        this->m_positionX = m_positionx;
        this->m_positionY = m_positionY,
        this->nome = nome;
   };
    // Método para mover o inimigo
void Morcego::mover() {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // Inicializa a semente aleatoria
        m_positionX += std::rand() % 9; // Suponha que o mapa tem 10 posições horizontais  Movimenta o inimigo de modo aleatorio
}
// Método para receber dano
void Morcego::receberDano(int dano) {
    vida -= dano ;
    if (vida < 0) vida = 0;
    std::cout << nome << " recebeu " << dano << " de dano. Vida restante: " << vida << "\n";
}

// Método para obter a posição do inimigo
int Morcego::getPosicaoX() const {
    return m_positionX;
}

int Morcego::getPosicaoY() const {
    return m_positionY;
}
// Método para obter a vida do inimigo
int Morcego::getVida() const {
    return vida;
}


 void Morcego::print(){

    std::cout << "🦇";
 }