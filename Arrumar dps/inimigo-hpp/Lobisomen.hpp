#ifndef LOBISOMEN_HPP
#define LOBISOMEN_HPP

#include "Inimigo.hpp"
// classe Lobisomen herda da classe Inimigo
class Lobisomen : public Inimigo {
    private:

    std::string forma; // "Lobo" ou "Humano"
    int defesaAumentada; // Defesa aumentada temporariamente após usar a Pelagem Protetora
    

public:
    // Construtor da classe Inimigo
   Lobisomen(const string& nome, int x, int y, int vida, int defesa,string& forma, int defesaAumentada);

    // Destrutor virtual (pode ser sobrescrito pelas classes derivadas)
    ~Lobisomen() = default;

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


