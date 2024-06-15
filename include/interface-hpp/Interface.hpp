#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#include "../simulador-hpp/Simulador.hpp"

class Interface :public Simulador{
protected:
    int m_altura;
    int m_largura;
    
public:
    Interface();
    void facil();
    void medio();
    void dificil();
};

#endif
