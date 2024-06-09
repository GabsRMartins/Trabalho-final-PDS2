#ifndef TORREDECANHAO_HPP
#define TORREDECANHAO_HPP

#include <string>
#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeCanhao : public Torre { // Classe "TorreDeCanhao" herda da classe base "Torre"
    private:
        int additionalAmmo; // Quantidade adicional de munição
        double cannonPower; // Potência do canhão (em unidades de força)
    public:
        TorreDeCanhao(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalAmmo, double cannonPower ); // Construtor
        void addAtack(int ataque) override; // Implementação da função para adicionar ataque
        void addRange(int range) override; // Implementação da função para adicionar alcance
        void addNoise(const std::string& noise) override; // Implementação da função para adicionar ruído
        void addPower(const std::string& power) override; // Implementação da função para adicionar poder
    };

#endif

