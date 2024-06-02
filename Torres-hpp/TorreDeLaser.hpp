#ifndef TORREDELASER_HPP
#define TORREDELASER_HPP

#include "Torre.hpp"

class TorreDeLaser : public Torre {
private:
    int additionalPower; // Quantidade adicional de energia
    double laserIntensity; // Intensidade do laser (em watts)
public:
    TorreDeLaser(int quantidade, int posicao, std::string noise, std::string power, int ataque, int range, int additionalPower, double laserIntensity); // Construtor
    void addAtack(int ataque) override;
    void addRange(int range) override;
    void addNoise(std::string noise) override;
    void addPower(std::string power) override;
};

#endif

