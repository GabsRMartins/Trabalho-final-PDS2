#ifndef MAPA_HPP
#define MAPA_HPP

#include "../torre-hpp/Torre.hpp"
#include "../inimigo-hpp/Inimigo.hpp"
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
    vector<unique_ptr<Torre>> torres; // Vetor de torres no mapa
    vector<unique_ptr<Inimigo>> inimigos; // Vetor de inimigos no mapa
    int tamanho; // Tamanho do mapa

public:
    //Tamanho do mapa
    Mapa(int tamanho);
    // Adiciona uma torre ao mapa
    void adicionarTorre(unique_ptr<Torre> torre);

    // Adiciona um inimigo ao mapa
    void adicionarInimigo(unique_ptr<Inimigo> inimigo);

    // Simula o combate entre torres e inimigos
    void simular();
};

#endif
