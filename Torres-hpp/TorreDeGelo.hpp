#ifndef TORREDEGELO_HPP
#define TORREDEGELO_HPP

#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeGelo : public Torre { // Classe "TorreDeGelo" herda da classe base "Torre"
    private:
        int addGelo; // Quantidade adicional de gelo
        double temperaturaCongelamento; // Temperatura de congelamento (em graus Celsius)
    public:
        TorreDeGelo(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int addGelo, double temperaturaCongelamento); // Construtor
        void addAtaque(int ataque) override; // Implementação da função para adicionar ataque
        void addAlcance(int alcance) override; // Implementação da função para adicionar alcance
        void addRuido(const std::string&  ruido) override; // Implementação da função para adicionar ruído
        void addPoder(const std::string&  poder) override; // Implementação da função para adicionar poder
};

#endif
