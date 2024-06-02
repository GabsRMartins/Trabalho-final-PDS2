#ifndef TORRE_HPP
#define TORRE_HPP
using std::string;

class Torre {
    protected:
        int quantidade; // Variável para armazenar a quantidade
        int posicao; // Variável para armazenar a posição

    // Construtor protegido para ser utilizado pelas classes derivadas
        Torre(int quantidade, int posicao);
        ~Torre();
    public:
        virtual void addAtack(int ataque) = 0; // Função virtual pura para adicionar ataque
        virtual void addRange(int range) = 0; // Função virtual pura para adicionar alcance
        virtual void addNoise(const string& noise) = 0; // Função virtual pura para adicionar ruído
        virtual void addPower(const string& power) = 0; // Função virtual pura para adicionar poder
};

#endif
