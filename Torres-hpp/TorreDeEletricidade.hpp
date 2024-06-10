#ifndef TORREDEELETRICIDADE_HPP
#define TORREDEELETRICIDADE_HPP

#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeEletricidade : public Torre { // Classe "TorreDeEletricidade" herda da classe base "Torre"
private:
    int voltagem; // Tensão elétrica da torre
    double eficiencia; // Eficiência da conversão de energi
public:
    TorreDeEletricidade(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int voltagem, double eficiencia); // Construtor
    void addAtaque(int ataque) override; // Implementação da função para adicionar ataque
    void addAlcance(int alcance) override; // Implementação da função para adicionar alcance
    void addRuido(const std::string& ruido) override; // Implementação da função para adicionar ruído
    void addPoder(const std::string&  poder) override; // Implementação da função para adicionar poder
};

#endif
