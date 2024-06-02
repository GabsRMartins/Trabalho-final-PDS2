#ifndef TORREDEFLECHAS_HPP
#define TORREDEFLECHAS_HPP

#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeFlechas : public Torre { // Classe "TorreDeFlechas" herda da classe base "Torre"
private:
    int additionalArrows; // Quantidade adicional de flechas
    double arrowVelocity; // Velocidade das flechas (em metros por segundo)
public:
    TorreDeFlechas(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalArrows,double arrowVelocity ); // Construtor
    void addAtack(int ataque) override; // Implementação da função para adicionar ataque
    void addRange(int range) override; // Implementação da função para adicionar alcance
    void addNoise(std::string noise) override; // Implementação da função para adicionar ruído
    void addPower(std::string power) override; // Implementação da função para adicionar poder
};

#endif
