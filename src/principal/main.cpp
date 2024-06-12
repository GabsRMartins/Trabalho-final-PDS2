#include "../../include/mapa-hpp/Mapa.hpp"
#include "../../include/torre-hpp/TorreDeFogo.hpp"
#include "../../include/inimigo-hpp/Esqueleto.hpp"
#include "../../include/estrutura-hpp/Arvore.hpp"
#include "../../include/estrutura-hpp/Parede.hpp"

#include <iostream>
#include <thread>
#include <chrono>
#include <memory> // Para std::make_unique
// Aqui temos duas bibliotecas importantes:
// - <thread>: Permite criar e gerenciar threads (processos paralelos).
// - <chrono>: Fornece funções para medir o tempo e criar pausas.

using std::make_unique;


int main() {
    Mapa mapa(10,10); // Definindo o tamanho do mapa como 10 posições
    
 
    mapa.adicionarTorre(make_unique<TorreDeFogo>(5,1));
    mapa.adicionarTorre(make_unique<TorreDeFogo>(6,1));
    mapa.adicionarTorre(make_unique<TorreDeFogo>(0,1));
    mapa.adicionarEstrutura(make_unique<Arvore>(1,1));
    mapa.adicionarEstrutura(make_unique<Arvore>(2,1));
    mapa.adicionarEstrutura(make_unique<Parede>(3,1));
    mapa.adicionarEstrutura(make_unique<Arvore>(4,1));
    mapa.adicionarEstrutura(make_unique<Parede>(7,1));
    mapa.adicionarEstrutura(make_unique<Parede>(8,1));
    mapa.adicionarEstrutura(make_unique<Parede>(9,1));
    mapa.adicionarEstrutura(make_unique<Arvore>(1,3));
    mapa.adicionarEstrutura(make_unique<Arvore>(1,5));


    // Adiciona inimigos no mapa
    mapa.adicionarInimigo(make_unique<Esqueleto>(0,0));
    mapa.adicionarInimigo(make_unique<Esqueleto>(2,0)); 
    mapa.adicionarInimigo(make_unique<Esqueleto>(4,2)); 
    mapa.adicionarInimigo(make_unique<Esqueleto>(2,2));  


    // Inicia a simulação
    mapa.simular();
    return 0;
}
