#ifndef MAPA_HPP
#define MAPA_HPP

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
class Mapa {
private:
    vector<Torre*> torres;  
    vector<Inimigo*> inimigos; 
    vector<Estrutura*> estruturas; 
    vector<vector<unique_ptr<Entidade>>> matrizMapa; 
    int m_altura;
    int m_largura;
    
public:
    //Tamanho do mapa
    Mapa(int altura, int largura);
    // Adiciona uma torre ao mapa
    void adicionarTorre(unique_ptr<Torre> torre);
  
    void printaMapa();
    // Adiciona um inimigo ao mapa
    void adicionarInimigo(unique_ptr<Inimigo> inimigo);
    void adicionarEstrutura(unique_ptr<Estrutura> Estrutura);
    void atualizaMatriz(Entidade* entidade, int posAnteriorX, int posAnteriorY);
  
 /*   bool verificaEstrutura(int posX, int posY); */

    // Simula o combate entre torres e inimigos
    bool simular();
};

#endif
