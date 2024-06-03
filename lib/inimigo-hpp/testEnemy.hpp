#ifndef INIMIGO_HPP
#define INIMIGO_HPP
#include <string>
using std::string;

class Inimigo {
    protected:
        int Vida; 
        int Velocidade; 
        string noise;
        string power; 
    public:
        Inimigo(string noise, string power,  int health, int ms);
        void addHealth(int health);  
        void addMovimentSpeed(int ms);  
        void addNoise(string noise);  
        void addPower(string power) ; 
};

#endif