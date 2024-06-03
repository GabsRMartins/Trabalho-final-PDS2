#ifndef MAPA_HPP
#define MAPA_HPP
#include <string>
#include <vector>
using std::string;


class Mapa {
    protected:
        int amountOfTowers; 
        std::vector<int> width; 
        int slot;
    public:
        Mapa(int quantidade, int posicao, string noise,string power,  int ataque, int range);
        void addAtack(int ataque);  
        void addRange(int range);  
        void addNoise(string noise);  
        void addPower(string power) ; 
};

#endif