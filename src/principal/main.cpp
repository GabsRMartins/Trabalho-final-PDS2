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

int main() {
    Mapa mapa(20); // Definindo o tamanho do mapa como 10 posições

    // Adiciona torres no mapa
    mapa.adicionarTorre(std::make_unique<TorreDeFogo>(5));
    mapa.adicionarTorre(std::make_unique<TorreDeFogo>(15));
    // Adiciona inimigos no mapa
    mapa.adicionarInimigo(std::make_unique<Esqueleto>(0));

    // Inicia a simulação
    mapa.simular();

    return 0;
}
