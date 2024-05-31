#ifndef TORREDELASER_HPP
#define TORREDELASER_HPP

#include "Torre.hpp"

class TorreDeLaser : public Torre {
private:
    int ataque;
    int range;
    int additionalPower; // Quantidade adicional de energia
    double laserIntensity; // Intensidade do laser (em watts)
    std::string noise; // Variável para armazenar o ruído
    std::string power; // Variável para armazenar o poder
public:
    TorreDeLaser(int quantidade, int posicao); // Construtor
    void addAtack(int ataque) override;
    void addRange(int range) override;
    void addNoise(const std::string& noise) override;
    void addPower(const std::string& power) override;
};

#endif

