#ifndef ORC_HPP
#define ORC_HPP

#include "Inimigo.hpp"
// classe Orc herda da classe Inimigo
class Orc : public Inimigo {
    private:
    string nome; // Nome do inimigo
    int m_positionX; // Posição horizontal do inimigo no mapa
    int m_positionY; // Posição vertical do inimigo no mapa no mapa
    int vida; // Pontos de vida do inimigo
    int defesa; // redução de dano no inmigo
   
public:
    // Construtor da classe Inimigo
   Orc(const string& nome, int x, int y, int vida, int defesa);

    // Destrutor virtual (pode ser sobrescrito pelas classes derivadas)
    ~Orc() = default;

     // Método para mover o inimigo
    void mover() override;

    // Método para receber dano
     void receberDano(int dano) override;

    // Método para obter a posição do inimigo
    int getPosicaoX() const override;
    int getPosicaoY() const override;


    // Método para obter a vida do inimigo
    int getVida() const override;

    void print() override;
};


#endif


