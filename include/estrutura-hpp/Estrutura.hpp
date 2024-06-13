#ifndef ESTRUTURA_HPP
#define ESTRUTURA_HPP

#include "../entidade-hpp/Entidade.hpp"
#include <string>

using std::string;

class Estrutura : public Entidade {
    private:
        string tipo; // Tipo de estrutura
        int m_positionX; // Posição da estrutura no mapa
        int m_positionY; // Posição da estrutura no mapa
    
    public:
        Estrutura(const string& tipo, int x, int y);// Construtor da classe Estrutura
        int getPosicaoX() override;
        int getPosicaoY() override;
        virtual void print() = 0; 
};


#endif