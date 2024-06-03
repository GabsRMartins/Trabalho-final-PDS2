#ifndef TORRE_HPP
#define TORRE_HPP
#include <string>
using std::string;

class Torre {
    protected:
        int quantidade; 
        int posicao; 
        string noise;
        string power; 
        int ataque;
        int alcance;
    public:
        Torre(int quantidade, int posicao, string noise,string power,  int attack, int range);
        void addAtack(int attack);  
        void addRange(int range);  
        void addNoise(string noise);  
        void addPower(string power) ; 
};

#endif