#ifndef INTERFACE_HPP  
#define INTERFACE_HPP  

#include "../simulador-hpp/Simulador.hpp"  // Inclui o cabeçalho da classe Simulador

// Declaração da classe Interface que herda da classe Simulador
class Interface : public Simulador {
protected:
    int m_altura;  // Altura do mapa
    int m_largura;  // Largura do mapa
    
public:
    // Construtor da classe Interface
    Interface();

    // Método para configurar a simulação em níveis de dificuldade
    void facil(Simulador& simulador);
    void medio(Simulador& simulador);
    void dificil(Simulador& simulador);
};

#endif  

