#ifndef TORREDEGELO_HPP
#define TORREDEGELO_HPP

#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeGelo : public Torre { // Classe "TorreDeGelo" herda da classe base "Torre"
    private:
        int additionalIce; // Quantidade adicional de gelo
        double freezingTemperature; // Temperatura de congelamento (em graus Celsius)
    public:
        TorreDeGelo(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalIce, double freezingTemperature); // Construtor
        void addAtack(int ataque) override; // Implementação da função para adicionar ataque
        void addRange(int range) override; // Implementação da função para adicionar alcance
        void addNoise(const std::string&  noise) override; // Implementação da função para adicionar ruído
        void addPower(const std::string&  power) override; // Implementação da função para adicionar poder
};

#endif
