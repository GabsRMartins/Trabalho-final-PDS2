#include "/../../inimigo-hpp/Mumia.hpp"
#include <iostream>
#include <ctime>

Mumia::Mumia(const string& nome,int m_positionX, int m_positionY,int vida,int defesa)
    : Inimigo(nome, m_positionX, m_positionY, vida, defesa){
      
        this->vida = vida;
        this->defesa = defesa;
        this->m_positionX = m_positionx;
        this->m_positionY = m_positionY,
        this->nome =nome;
   };
    // Método para mover o inimigo
    // Método para mover o inimigo
void Mumia::mover() {
      
    m_positionX += 2;
}
// Método para receber dano
void Mumia::receberDano(int dano) {
    
    vida -= dano - defesa/2;

    if (vida < 0) vida = 0;
    cout << nome << " recebeu " << dano << " de dano. Vida restante: " << vida << "\n";
}

// Método para obter a posição do inimigo
int Mumia::getPosicaoX() const {
    return m_positionX;
}

int Mumia::getPosicaoY() const {
    return m_positionY;
}
// Método para obter a vida do inimigo
int Mumia::getVida() const {
    return vida;
}


 void Mumia::print(){

    std::cout << "🤕🧻";
 }