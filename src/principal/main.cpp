#include "../../include/mapa-hpp/Mapa.hpp"
#include "../../include/torre-hpp/TorreDeFogo.hpp"
#include "../../include/inimigo-hpp/Esqueleto.hpp"
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
    
 
    mapa.adicionarTorre(make_unique<TorreDeFogo>(5,0));
    mapa.adicionarTorre(make_unique<TorreDeFogo>(6,0));
    // Adiciona inimigos no mapa
    mapa.adicionarInimigo(make_unique<Esqueleto>(0,0));
    mapa.adicionarInimigo(make_unique<Esqueleto>(1,0));
    mapa.adicionarInimigo(make_unique<Esqueleto>(2,0));

    // Inicia a simulação
    mapa.simular();
    return 0;
}
