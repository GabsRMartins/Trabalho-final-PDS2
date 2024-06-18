#ifndef SIMULADOR_HPP
#define SIMULADOR_HPP

#include "../torre-hpp/Torre.hpp"
#include "../inimigo-hpp/Inimigo.hpp"
#include "../estrutura-hpp/Estrutura.hpp"
#include <vector> // Biblioteca para trabalhar com vetores (arrays dinâmicos)
#include <memory> // Biblioteca para gerenciar alocação dinâmica de memória
#include <iostream> // Biblioteca para entrada/saída padrão (ex.: std::cout)

using std::vector;
using std::unique_ptr;

// Aqui temos três bibliotecas importantes:
// - <vector>: Permite criar vetores dinâmicos (arrays que podem crescer ou encolher).
// - <memory>: Fornece recursos para gerenciar alocação e liberação de memória.
// - <iostream>: Usada para exibir mensagens no console (por exemplo, std::cout).
class Simulador {
protected:
    vector<Torre*> torres;  // Vetor de ponteiros para objetos do tipo Torre
    vector<Inimigo*> inimigos; // Vetor de ponteiros para objetos do tipo Inimigo
    vector<Estrutura*> estruturas; // Vetor de ponteiros para objetos do tipo Estrutura
    vector<vector<unique_ptr<Entidade>>> matrizMapa; // Matriz de ponteiros exclusivos para objetos do tipo Entidade
    int m_altura;
    int m_largura;
    
public:
    // Construtor que inicializa o mapa com a altura e largura especificadas
    Simulador(int altura, int largura);
    Simulador();
    // Adiciona uma torre ao mapa
    void adicionarTorre(unique_ptr<Torre> torre);
  
    void printaMapa();
    // Adiciona um inimigo ao mapa
    void adicionarInimigo(unique_ptr<Inimigo> inimigo);
     // Adiciona uma estrutura ao mapa
    void adicionarEstrutura(unique_ptr<Estrutura> Estrutura);
     // Atualiza a posição de uma entidade na matriz do mapa
    void atualizaMatriz(Entidade* entidade, int posAnteriorX, int posAnteriorY, int Vida);
    // Define os limites do mapa
    void setLimites(int altura, int largura);
  
 /*bool verificaEstrutura(int posX, int posY); */

    // Simula o combate entre torres e inimigos
    bool simular(int dificuldade);
    void startSimulacao(Simulador& simulador);

};

#endif
