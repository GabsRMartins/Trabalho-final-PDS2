#ifndef TORREDEMAGIA_HPP
#define TORREDEMAGIA_HPP

#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeMagia : public Torre { // Classe "TorreDeMagia" herda da classe base "Torre"
    private:
        int addMagia; // Quantidade adicional de magia
        double poderFeitico; // Poder do feitiço (em unidades mágicas)
    public:
        TorreDeMagia(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int addMagia, double poderFeitico); // Construtor
        void addAtaque(int ataque) override; // Implementação da função para adicionar ataque
        void addAlcance(int alcance) override; // Implementação da função para adicionar alcance
        void addRuido(const std::string&  ruido) override; // Implementação da função para adicionar ruído
        void addPoder(const std::string&  poder) override; // Implementação da função para adicionar poder
};

#endif
