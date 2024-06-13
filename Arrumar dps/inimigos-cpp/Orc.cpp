#include "/../../inimigo-hpp/Orc.hpp"
#include <iostream>
#include <ctime>

Orc::Orc(const string& nome,int m_positionX, int m_positionY,int vida,int defesa)
    : Inimigo(nome, m_positionX, m_positionY, vida, defesa){
      
        this->vida = vida;
        this->defesa = defesa;
        this->m_positionX = m_positionx;
        this->m_positionY = m_positionY,
        this->nome = nome;
   };
   
    // Método para mover o inimigo
void Orc::mover() {
      std::srand(static_cast<unsigned int>(std::time(nullptr)));// Define a semente baseada na hora atual
    m_positionX += (std::rand() % 2) == 0 ? 0 : 1;// se par o inimigo não movimenta se impar move 1 posições
}
// Método para receber dano
void Orc::receberDano(int dano) {
   // if (dano > vida* 0.5) {
        vida -= dano - defesa; //- 1.5* defesa;
   // }
   // else vida -= dano - defesa/2;

   if (vida < 0) vida = 0;
    std::cout << nome << " recebeu " << dano << " de dano. Vida restante: " << vida << "\n";
}

// Método para obter a posição do inimigo
int Orc::getPosicaoX() const {
    return m_positionX;
}

int Orc::getPosicaoY() const {
    return m_positionY;
}
// Método para obter a vida do inimigo
int Orc::getVida() const {
    return vida;
}


 void Orc::print(){

    std::cout << "orc🐗";
 }