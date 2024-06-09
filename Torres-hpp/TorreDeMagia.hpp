#ifndef TORREDEMAGIA_HPP
#define TORREDEMAGIA_HPP

#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeMagia : public Torre { // Classe "TorreDeMagia" herda da classe base "Torre"
    private:
        int additionalMana; // Quantidade adicional de mana
        double spellPower; // Poder do feitiço (em unidades mágicas)
    public:
        TorreDeMagia(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalMana, double spellPower); // Construtor
        void addAtack(int ataque) override; // Implementação da função para adicionar ataque
        void addRange(int range) override; // Implementação da função para adicionar alcance
        void addNoise(const std::string&  noise) override; // Implementação da função para adicionar ruído
        void addPower(const std::string&  power) override; // Implementação da função para adicionar poder
};

#endif
