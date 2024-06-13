#include "/../../inimigo-hpp/Lobisomen.hpp"
#include <iostream>
#include <ctime>

Lobisomen::Lobisomen(const string& nome,int m_positionX, int m_positionY,int vida,int defesa,const string& forma, int defesaAumentada)
    : Inimigo(nome, m_positionX, m_positionY, vida, defesa){
      
        this->forma = "humano";
        this->defesaAumentada = 0
        this->vida = vida;
        this->defesa = defesa;
        this->m_positionX = m_positionx;
        this->m_positionY = m_positionY,
        this->nome =nome;
   };

    // Método para mover o inimigo
void Lobisomen::mover() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));// Define a semente baseada na hora atual
    m_positionX += (std::rand() % 2) == 0 ? 2 : 1; // quando par o inimigo move 2 posições a frente quando impar 1
}
// Método para receber dano
void Lobisomen::receberDano(int dano) {
    vida -= dano - (defesa + DefesaAumentada);
    if (vida < 0) vida = 0;
    cout << nome << " recebeu " << dano << " de dano. Vida restante: " << vida << "\n";
}

   void alternarForma() {
        forma = (forma == "Lobo") ? "Humano" : "Lobo";
        std::cout << nome << " alternou para a forma de " << forma << "\n";
    }

        void pelagemProtetora(int aumentoDefesa) {
        defesaAumentada = aumentoDefesa;
        std::cout << nome << " desenvolveu a Pelagem Protetora e aumentou a defesa em " << aumentoDefesa << " pontos.\n";
    }

// Método para obter a posição do inimigo
int Lobisomen::getPosicaoX() const {
    return m_positionX;
}

int Lobisomen::getPosicaoY() const {
    return m_positionY;
}
// Método para obter a vida do inimigo
int Lobisomen::getVida() const {
    return vida;
}


 void Lobisomen::print(){

    std::cout << "🐺";
 }