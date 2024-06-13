#ifndef TORREDEVENENO_HPP
#define TORREDEVENENO_HPP

#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeVeneno : public Torre { // Classe "TorreDeVeneno" herda da classe base "Torre"
    private:
        int addToxinas; // Quantidade adicional de toxinas
        double poderVeneno; // Intensidade do veneno (em unidades tóxicas)
    public:
        TorreDeVeneno(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int addToxinas, double poderVeneno); // Construtor
        void addAtaque(int ataque) override; // Implementação da função para adicionar ataque
        void addAlcance(int alcance) override; // Implementação da função para adicionar alcance
        void addRuido(const std::string&  ruido) override; // Implementação da função para adicionar ruído
        void addPoder(const std::string&  poder) override; // Implementação da função para adicionar poder
};
#endif
