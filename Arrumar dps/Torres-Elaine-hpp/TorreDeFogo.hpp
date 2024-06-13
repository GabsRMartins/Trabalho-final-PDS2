#ifndef TORREDEFOGO_HPP
#define TORREDEFOGO_HPP

#include "Torre.hpp" //Inclui o arquivo de cabeçalho da classe base "Torre"

class TorreDeFogo : public Torre { // Classe "TorreDeFogo" herda da classe base "Torre"
    private:
        int addCombustivel; // Quantidade adicional de combustível
        double temperaturaChamas; // Temperatura das chamas (em graus Celsius)
    public:
        TorreDeFogo(int quantidade, int posicao, const std::string& noise, const std::string& poder, int ataque, int alcance, int addCombustivel, double temperaturaChamas); // Construtor
        void addAtaque(int ataque) override; // Implementação da função para adicionar ataque
        void addAlcance(int alcance) override; // Implementação da função para adicionar alcance
        void addRuido(const std::string&  ruido) override; // Implementação da função para adicionar ruído
        void addPoder(const std::string&  poder) override; // Implementação da função para adicionar poder
};

#endif
