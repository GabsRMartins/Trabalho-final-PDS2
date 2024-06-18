#ifndef ESTRUTURA_HPP  
#define ESTRUTURA_HPP  

#include "../entidade-hpp/Entidade.hpp"  // Inclui o cabeçalho da classe base Entidade
#include <string>  // Inclui a biblioteca de string

using std::string;  // Usa o namespace std para a classe string

// Declaração da classe Estrutura que herda da classe Entidade
class Estrutura : public Entidade {
private:
    string tipo;  // Tipo de estrutura
    int m_positionX;  // Posição X da estrutura no mapa
    int m_positionY;  // Posição Y da estrutura no mapa

public:
    // Construtor da classe Estrutura que inicializa o tipo e a posição X e Y
    Estrutura(const string& tipo, int x, int y);

    // Método sobrescrito para retornar a posição da estrutura
    int getPosicaoX() override;
    int getPosicaoY() override;

    // Método virtual puro que deve ser implementado pelas classes derivadas para imprimir informações da estrutura
    virtual void print() = 0;
};

#endif  
