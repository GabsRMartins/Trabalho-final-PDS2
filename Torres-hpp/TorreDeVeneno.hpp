#ifndef TORREDEVENENO_HPP
#define TORREDEVENENO_HPP

#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeVeneno : public Torre { // Classe "TorreDeVeneno" herda da classe base "Torre"
    private:
        int additionalToxins; // Quantidade adicional de toxinas
        double poisonIntensity; // Intensidade do veneno (em unidades tóxicas)
    public:
        TorreDeVeneno(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalToxins, double poisonIntensity); // Construtor
        void addAtack(int ataque) override; // Implementação da função para adicionar ataque
        void addRange(int range) override; // Implementação da função para adicionar alcance
        void addNoise(const std::string& noise) override; // Implementação da função para adicionar ruído
        void addPower(const std::string& power) override; // Implementação da função para adicionar poder
};
#endif
