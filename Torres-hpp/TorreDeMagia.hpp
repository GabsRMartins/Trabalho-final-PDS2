#ifndef TORREDEMAGIA_HPP
#define TORREDEMAGIA_HPP

#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeMagia : public Torre { // Classe "TorreDeMagia" herda da classe base "Torre"
private:
    int ataque; // Variável para armazenar o valor do ataque
    int range; // Variável para armazenar o valor do alcance
    int additionalMana; // Quantidade adicional de mana
    double spellPower; // Poder do feitiço (em unidades mágicas)
    std::string noise; // Variável para armazenar o ruído
    std::string power; // Variável para armazenar o poder
public:
    TorreDeMagia(int quantidade, int posicao); // Construtor
    void addAtack(int ataque) override; // Implementação da função para adicionar ataque
    void addRange(int range) override; // Implementação da função para adicionar alcance
    void addNoise(const std::string& noise) override; // Implementação da função para adicionar ruído
    void addPower(const std::string& power) override; // Implementação da função para adicionar poder
};

#endif
