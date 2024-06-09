#ifndef TORREDEFANTASMAS_HPP
#define TORREDEFANTASMAS_HPP

#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeFantasmas : public Torre { // Classe "TorreDeFantasmas" herda da classe base "Torre"
    private:
        int addFantasmas; // Quantidade adicional de fantasmas
        double poderFantasma; // Poder dos fantasmas (em unidades assombradas)
    public:
        TorreDeFantasmas(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int addFantasmas, double poderFantasma); // Construtor
        void addAtaque(int ataque) override; // Implementação da função para adicionar ataque
        void addAlcance(int alcance) override; // Implementação da função para adicionar alcance
        void addRuido(const std::string&  ruido) override; // Implementação da função para adicionar ruído
        void addPoder(const std::string&  poder) override; // Implementação da função para adicionar poder
};

#endif
