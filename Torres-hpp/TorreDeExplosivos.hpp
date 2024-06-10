#ifndef TORREDEEXPLOSIVOS_HPP
#define TORREDEEXPLOSIVOS_HPP
#include <string>
#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"
using std::string;

class TorreDeExplosivos : public Torre { // Classe "TorreDeExplosivos" herda da classe base "Torre"
    private:
        int addExplosivos; // Quantidade adicional de explosivos
        double poderExplosivos; // Potência da explosão (em unidades destrutivas)
    public:
        TorreDeExplosivos(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int addExplosivos, double poderExplosivos ); // Construtor
        void addAtaque(int ataque) override; // Implementação da função para adicionar ataque
        void addAlcance(int alcance) override; // Implementação da função para adicionar alcance
        void addRuido(const std::string&  ruido) override; // Implementação da função para adicionar ruído
        void addPoder(const std::string&  poder) override; // Implementação da função para adicionar poder
};

#endif

