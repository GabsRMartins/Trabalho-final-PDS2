#ifndef TORRE_HPP
#define TORRE_HPP
#include <string>
class Torre {
    protected:
        int quantidade; // Variável para armazenar a quantidade
        int posicao; // Variável para armazenar a posição
        std::string noise;
        std::string power; 
        int ataque;
        int range;
        Torre(int quantidade, int posicao, std::string noise,std::string power,  int ataque, int range);// Construtor protegido para ser utilizado pelas classes derivadas
    public:
        virtual void addAtack(int ataque) = 0; // Função virtual pura para adicionar ataque
        virtual void addRange(int range) = 0; // Função virtual pura para adicionar alcance
        virtual void addNoise(std::string noise) = 0; // Função virtual pura para adicionar ruído
        virtual void addPower(std::string power) = 0; // Função virtual pura para adicionar poder
};

#endif
