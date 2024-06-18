#ifndef ESCORPIAO_HPP 
#define ESCORPIAO_HPP  

#include <string>  // Inclui a biblioteca de strings
using std::string;  // Usa a classe string do namespace std

#include "Inimigo.hpp"  // Inclui o cabeçalho da classe base Inimigo

// Declaração da classe Escorpiao que herda da classe Inimigo
class Escorpiao : public Inimigo {
public:
    // Construtor da classe Escorpiao que inicializa a posição X e Y
    Escorpiao(int x, int y);

    // Método sobrescrito da classe base para imprimir informações do escorpião
    void print() override;
};

#endif  

