#ifndef TORREDEELETRICIDADE_HPP
#define TORREDEELETRICIDADE_HPP

#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeEletricidade : public Torre { // Classe "TorreDeEletricidade" herda da classe base "Torre"
private:
    int voltage; // Tensão elétrica da torre
    double efficiency; // Eficiência da conversão de energi
public:
    TorreDeEletricidade(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int voltage, double efficiency); // Construtor
    void addAtack(int ataque) override; // Implementação da função para adicionar ataque
    void addRange(int range) override; // Implementação da função para adicionar alcance
    void addNoise(const std::string& noise) override; // Implementação da função para adicionar ruído
    void addPower(const std::string&  power) override; // Implementação da função para adicionar poder
};

#endif
