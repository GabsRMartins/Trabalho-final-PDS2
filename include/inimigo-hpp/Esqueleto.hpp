#ifndef ESQUELETO_HPP  
#define ESQUELETO_HPP  

#include <string>  // Inclui a biblioteca de strings
using std::string;  // Usa a classe string do namespace std

#include "Inimigo.hpp"  // Inclui o cabeçalho da classe base Inimigo

// Declaração da classe Esqueleto que herda da classe Inimigo
class Esqueleto : public Inimigo {
public:
    // Construtor da classe Esqueleto que inicializa a posição X e Y
    Esqueleto(int x, int y);

    // Método sobrescrito da classe base para imprimir informações do esqueleto
    void print() override;
};

#endif 
