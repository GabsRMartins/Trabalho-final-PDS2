#ifndef VAMPIRO_HPP
#define VAMPIRO_HPP

#include "Inimigo.hpp"
// classe Mumia herda da classe Inimigo
class Vampriro: public Inimigo {
    private:
    string nome; // Nome do inimigo
    int m_positionX; // Posição horizontal do inimigo no mapa
    int m_positionY; // Posição vertical do inimigo no mapa no mapa
    int vida; // Pontos de vida do inimigo
    int defesa; // redução de dano no inmigo
   

public:
    // Construtor da classe Inimigo
  Vampriro(const string& nome, int x, int y, int vida, int defesa);

    // Destrutor virtual (pode ser sobrescrito pelas classes derivadas)
    ~Vampriro() = default;

    // Método para mover o inimigo
    void mover() override;

    // Método para receber dano
     void receberDano(int dano) override;

    // Método para obter a posição do inimigo
    int getPosicaoX() const;
    int getPosicaoY() const;


    // Método para obter a vida do inimigo
    int getVida() const;

    void print() override;
};

#endif


