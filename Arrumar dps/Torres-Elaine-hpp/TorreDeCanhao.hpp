#ifndef TORREDECANHAO_HPP
#define TORREDECANHAO_HPP

#include <string>
#include "Torre.hpp" // Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeCanhao : public Torre { // Classe "TorreDeCanhao" herda da classe base "Torre"
    private:
        int addMunicao; // Quantidade adicional de munição
        double potenciaCanhao; // Potência do canhão (em unidades de força)
    public:
        TorreDeCanhao(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int addMunicao, double potenciaCanhao ); // Construtor
        void addAtaque(int ataque) override; // Implementação da função para adicionar ataque
        void addAlcance(int alcance) override; // Implementação da função para adicionar alcance
        void addRuido(const std::string& ruido) override; // Implementação da função para adicionar ruído
        void addPoder(const std::string& poder) override; // Implementação da função para adicionar poder
    };

#endif

