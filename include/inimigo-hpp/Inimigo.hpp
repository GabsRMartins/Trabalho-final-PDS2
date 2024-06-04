#ifndef INIMIGO_HPP
#define INIMIGO_HPP

#include <string>

using std::string;


class Inimigo {
private:
    string nome; // Nome do inimigo
    int posicao; // Posição do inimigo no jogo
    int vida; // Pontos de vida do inimigo

public:
    // Construtor da classe Inimigo
    Inimigo(const string& nome, int posicao, int vida);

    // Destrutor virtual (pode ser sobrescrito pelas classes derivadas)
    virtual ~Inimigo() = default;

    // Método para mover o inimigo
    void mover();

    // Método para receber dano
    void receberDano(int dano);

    // Método para obter a posição do inimigo
    int getPosicao() const;

    // Método para obter a vida do inimigo
    int getVida() const;
};

#endif

