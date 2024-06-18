#ifndef INIMIGO_HPP
#define INIMIGO_HPP

#include "../entidade-hpp/Entidade.hpp" // Inclui o cabeçalho da classe base Entidade
#include <string> // Inclui a biblioteca de strings

using std::string; // Usa a classe string do namespace std

// Declaração da classe Inimigo que herda da classe Entidade
class Inimigo : public Entidade {
private:
    string nome; // Nome do inimigo
    int m_positionX; // Posição do inimigo no mapa
    int m_positionY; // Posição do inimigo no mapa
    int vida; // Pontos de vida do inimigo

public:
    // Construtor da classe Inimigo
    Inimigo(const string& nome, int x, int y, int vida);

    // Destrutor virtual (pode ser sobrescrito pelas classes derivadas)
    virtual ~Inimigo() = default;

    // Método para mover o inimigo
    void moverX();
    void moverY();
    // Método para receber dano
    void receberDano(int dano);

    // Método para obter a posição do inimigo
    int getPosicaoX() override;
    int getPosicaoY() override;


    // Método para obter a vida do inimigo de acordo com o nível de dificuldade
    int getVida() const;
    int getVidaDificil() const;
    int getVidaFacil() const;
  
    // Método virtual puro que deve ser implementado pelas classes derivadas para imprimir informações do inimigo
    virtual void print() = 0; 
};

#endif

