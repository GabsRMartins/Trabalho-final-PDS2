#ifndef TORREDECANHAO_HPP
#define TORREDECANHAO_HPP

#include <string>
#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeCanhao : public Torre { // Classe "TorreDeCanhao" herda da classe base "Torre"
private:
    int ataque; // Variável para armazenar o valor do ataque
    int range; // Variável para armazenar o valor do alcance
    int additionalAmmo; // Quantidade adicional de munição
    double cannonPower; // Potência do canhão (em unidades de força)
    std::string noise; // Variável para armazenar o ruído
    std::string power; // Variável para armazenar o poder

public:
    TorreDeCanhao(int quantidade, int posicao); // Construtor
    void addAtack(int ataque) override; // Implementação da função para adicionar ataque
    void addRange(int range) override; // Implementação da função para adicionar alcance
    void addNoise(const std::string& noise) override; // Implementação da função para adicionar ruído
    void addPower(const std::string& power) override; // Implementação da função para adicionar poder
};

#endif

