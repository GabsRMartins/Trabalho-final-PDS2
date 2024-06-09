#ifndef TORRE_HPP
#define TORRE_HPP
#include <string>
class Torre {
    protected:
        int quantidade; // Variável para armazenar a quantidade
        int posicao; // Variável para armazenar a posição
        std::string ruido;
        std::string poder; 
        int ataque;
        int alcance;
        Torre(int quantidade, int posicao, const std::string& ruido,const std::string& poder,  int ataque, int alcance);// Construtor protegido para ser utilizado pelas classes derivadas
    public:
        virtual void addAtaque(int ataque) = 0; // Função virtual pura para adicionar ataque
        virtual void addAlcance(int alcance) = 0; // Função virtual pura para adicionar alcance
        virtual void addRuido(const std::string& ruido) = 0; // Função virtual pura para adicionar ruído
        virtual void addPoder(const std::string& poder) = 0; // Função virtual pura para adicionar poder
};

#endif
