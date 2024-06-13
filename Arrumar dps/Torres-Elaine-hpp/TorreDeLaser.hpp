#ifndef TORREDELASER_HPP
#define TORREDELASER_HPP

#include "Torre.hpp"

class TorreDeLaser : public Torre {
private:
    int addEnergia; // Quantidade adicional de energia
    double intensidadeEnergia; // Intensidade do laser (em watts)
public:
    TorreDeLaser(int quantidade, int posicao, const std::string& ruido, const std::string& poder, int ataque, int alcance, int addEnergia, double intensidadeEnergia); // Construtor
    void addAtaque(int ataque) override;
    void addAlcance(int alcance) override;
    void addRuido(const std::string&  ruido) override;
    void addPoder(const std::string&  poder) override;
};

#endif

