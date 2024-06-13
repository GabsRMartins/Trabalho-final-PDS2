#ifndef MAPA_HPP
#define MAPA_HPP

#include "../torre-hpp/Torre.hpp"
#include "../inimigo-hpp/Inimigo.hpp"
#include "../estrutura-hpp/Estrutura.hpp"
#include "../simulador-hpp/Simulador.hpp"
#include <vector> // Biblioteca para trabalhar com vetores (arrays dinâmicos)
#include <memory> // Biblioteca para gerenciar alocação dinâmica de memória
#include <iostream> // Biblioteca para entrada/saída padrão (ex.: std::cout)

using std::vector;
using std::unique_ptr;

// Aqui temos três bibliotecas importantes:
// - <vector>: Permite criar vetores dinâmicos (arrays que podem crescer ou encolher).
// - <memory>: Fornece recursos para gerenciar alocação e liberação de memória.
// - <iostream>: Usada para exibir mensagens no console (por exemplo, std::cout).
class Mapa {
protected:
  
    int m_altura;
    int m_largura;
    
public:
    //Tamanho do mapa
    Mapa(int altura, int largura);
    // Adiciona uma torre ao mapa
  
   void virtual  MontaMapa(Simulador& simulador) = 0;


  

};

#endif
