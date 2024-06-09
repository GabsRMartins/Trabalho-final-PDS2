#ifndef TORREDEFLECHAS_HPP
#define TORREDEFLECHAS_HPP

#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeFlechas : public Torre { // Classe "TorreDeFlechas" herda da classe base "Torre"
private:
    int addFlexas; // Quantidade adicional de flechas
    double velocidadeFlexas; // Velocidade das flechas (em metros por segundo)
public:
    TorreDeFlechas(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int addFlexas,double velocidadeFlexas ); // Construtor
    void addAtaque(int ataque) override; // Implementação da função para adicionar ataque
    void addAlcance(int alcance) override; // Implementação da função para adicionar alcance
    void addRuido(const std::string&  ruido) override; // Implementação da função para adicionar ruído
    void addPoder(const std::string&  poder) override; // Implementação da função para adicionar poder
};

#endif
