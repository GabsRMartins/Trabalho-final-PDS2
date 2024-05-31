#ifndef TORRE_HPP
#define TORRE_HPP

#include <string>

class Torre {
protected:
    int Quantidade; // Variável para armazenar a quantidade
    int posicao; // Variável para armazenar a posição

   // Construtor protegido para ser utilizado pelas classes derivadas
    Torre(int quantidade, int posicao);
    
public:
    virtual void addAtack(int ataque) = 0; // Função virtual pura para adicionar ataque
    virtual void addRange(int range) = 0; // Função virtual pura para adicionar alcance
    virtual void addNoise(const std::string& noise) = 0; // Função virtual pura para adicionar ruído
    virtual void addPower(const std::string& power) = 0; // Função virtual pura para adicionar poder
};

#endif
