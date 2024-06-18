#ifndef TORREDEELETRICIDADE_HPP
#define TORREDEELETRICIDADE_HPP

#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeEletricidade : public Torre { // Classe "TorreDeEletricidade" herda da classe base "Torre"
private:
    int voltagem; // Tensão elétrica da torre
    double eficiencia; // Eficiência da conversão de energi
public:
    TorreDeEletricidade(int x, int y); // Construtor
    void atacar() const override;// Método para atacar, sobrescrito da classe base
    void print() override; // Método para impressão, sobrescrito da classe base
};

#endif
