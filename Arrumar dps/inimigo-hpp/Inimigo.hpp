#ifndef INIMIGO_HPP
#define INIMIGO_HPP

//#include "../entidade-hpp/Entidade.hpp"
#include <string>

using std::string;


class Inimigo  {
protected:
    string nome; // Nome do inimigo
    int m_positionX; // Posição da torre no mapa
    int m_positionY; // Posição da torre no mapa
    int vida; // Pontos de vida do inimigo
    int defesa; // redução de dano
    
public:
    // Construtor da classe Inimigo
    Inimigo(const string& nome,int m_positionX, int m_positionY, int vida, int defesa);

    // Destrutor virtual (pode ser sobrescrito pelas classes derivadas)
    virtual ~Inimigo() = default;

    // Método para mover o inimigo
    virtual void mover()= 0;

    // Método para receber dano
    virtual void receberDano(int dano) = 0;

    // Método para obter a posição do inimigo
   virtual int getPosicaoX() const= 0;
   virtual int getPosicaoY() const =0;


    // Método para obter a vida do inimigo
    virtual int getVida() const = 0;

    virtual void print() = 0; 
};

#endif

