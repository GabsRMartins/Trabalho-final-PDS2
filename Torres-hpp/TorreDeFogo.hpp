#ifndef TORREDEFOGO_HPP
#define TORREDEFOGO_HPP

#include "Torre.hpp" //Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeFogo : public Torre { // Classe "TorreDeFogo" herda da classe base "Torre"
private:
    int ataque; // Variável para armazenar o valor do ataque
    int range; // Variável para armazenar o valor do alcance
    int additionalFuel; // Quantidade adicional de combustível
    double flameTemperature; // Temperatura das chamas (em graus Celsius)
    std::string noise; // Variável para armazenar o ruído
    std::string power; // Variável para armazenar o poder

public:
    TorreDeFogo(int quantidade, int posicao); // Construtor
    void addAtack(int ataque) override; // Implementação da função para adicionar ataque
    void addRange(int range) override; // Implementação da função para adicionar alcance
    void addNoise(const std::string& noise) override; // Implementação da função para adicionar ruído
    void addPower(const std::string& power) override; // Implementação da função para adicionar poder
};

#endif
