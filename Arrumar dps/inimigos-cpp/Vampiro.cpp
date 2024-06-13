#include "/../../inimigo-hpp/Vampiro.hpp"
#include <iostream>
#include <ctime>

ZVampiro::Vampiro(const string& nome,int m_positionX, int m_positionY,int vida,int defesa)
    : Inimigo(nome, m_positionX, m_positionY, vida, defesa){
      
        this->vida = vida;
        this->defesa = defesa;
        this->m_positionX = m_positionx;
        this->m_positionY = m_positionY,
        this->nome = nome;
   };
    // Método para mover o inimigo
    // Método para mover o inimigo
void Vampiro::mover() {
      std::srand(static_cast<unsigned int>(std::time(nullptr)));// Define a semente baseada na hora atual
    m_positionX += (std::rand() % 2) == 0 ? 1: std::rand() % 10; //  Movimenta o inimigo de modo aleatorio quando impar se par fica parado;
}
// Método para receber dano
void Vampiro::receberDano(int dano) {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    vida -= (std::rand() % 2) == 0 ? dano : dano - defesa; // se par recebe o dano total se impar dano - defesa


    if (vida < 0) vida = 0;
    cout << nome << " recebeu " << dano << " de dano. Vida restante: " << vida << "\n";
}

// Método para obter a posição do inimigo
int Vampiro::getPosicaoX() const {
    return m_positionX;
}

int Vampiro::getPosicaoY() const {
    return m_positionY;
}
// Método para obter a vida do inimigo
int Zumbi::getVida() const {
    return vida;
}


 void Vampiro::print(){

    std::cout << "🧛";
 }