#include "/../../inimigo-hpp/Dragao.hpp"
#include <iostream>
#include <string>
#include <ctime>

using std::string;

Dragao::Dragao(const string& nome,int m_positionX, int m_positionY,int vida,int defesa)
    : Inimigo(nome, m_positionX, m_positionY, vida, defesa){
      
        this->vida = vida;
        this->defesa = defesa;
        this->m_positionX = m_positionx;
        this->m_positionY = m_positionY,
        this->nome =nome;
   };
    // Método para mover o inimigo
    // Método para mover o inimigo
void Dragao::mover() {
      std::srand(static_cast<unsigned int>(std::time(nullptr)));// Define a semente baseada na hora atual
    m_positionX += (std::rand() % 2) == 0 ? 2: 1;// se par o inimigo não movimenta se impar move 3 posições
}
// Método para receber dano
void Dragao::receberDano(int dano) {
    if (dano >= vida* 0.15) vida -= 0;
    else vida -= dano - defesa;

    if (vida < 0) vida = 0;
    cout << nome << " recebeu " << dano << " de dano. Vida restante: " << vida << "\n";
}

// Método para obter a posição do inimigo
int Dragao::getPosicaoX() const {
    return m_positionX;
}

int Dragao::getPosicaoY() const {
    return m_positionY;
}
// Método para obter a vida do inimigo
int Dragao::getVida() const {
    return vida;
}


 void Dragao::print(){

    std::cout << "🐉";
 }