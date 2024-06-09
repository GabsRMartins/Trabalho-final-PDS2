#ifndef TORREDEEXPLOSIVOS_HPP
#define TORREDEEXPLOSIVOS_HPP
#include <string>
#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"
using std::string;

class TorreDeExplosivos : public Torre { // Classe "TorreDeExplosivos" herda da classe base "Torre"
    private:
        int additionalExplosives; // Quantidade adicional de explosivos
        double explosionPower; // Potência da explosão (em unidades destrutivas)
    public:
        TorreDeExplosivos(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalExplosives, double explosionPower ); // Construtor
        void addAtack(int ataque) override; // Implementação da função para adicionar ataque
        void addRange(int range) override; // Implementação da função para adicionar alcance
        void addNoise(const std::string&  noise) override; // Implementação da função para adicionar ruído
        void addPower(const std::string&  power) override; // Implementação da função para adicionar poder
};

#endif

