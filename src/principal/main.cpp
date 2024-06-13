#include "../../include/mapa-hpp/Mapa.hpp"
#include "../../include/torre-hpp/TorreDeFogo.hpp"
#include "../../include/inimigo-hpp/Esqueleto.hpp"
#include "../../include/estrutura-hpp/Arvore.hpp"
#include "../../include/estrutura-hpp/Parede.hpp"
#include "../../include/simulador-hpp/Simulador.hpp"
#include "../../include/mapa-hpp/MapaPadrao.hpp"
#include "../../include/mapa-hpp/Cemiterio.hpp"
#include "../../include/inimigo-hpp/Zumbi.hpp"


#include <iostream>
#include <thread>
#include <chrono>
#include <memory> // Para std::make_unique
// Aqui temos duas bibliotecas importantes:
// - <thread>: Permite criar e gerenciar threads (processos paralelos).
// - <chrono>: Fornece funções para medir o tempo e criar pausas.

using std::make_unique;


int main() {
    Simulador simulador(10,10); // Definindo o tamanho do mapa como 10 posições
    Cemiterio mapa(10,10);
    mapa.MontaMapa(simulador);

    simulador.adicionarTorre(make_unique<TorreDeFogo>(5,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(6,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(0,1));


    // Adiciona inimigos no mapa
    simulador.adicionarInimigo(make_unique<Zumbi>(0,0));
    simulador.adicionarInimigo(make_unique<Zumbi>(2,0)); 
    simulador.adicionarInimigo(make_unique<Zumbi>(4,2)); 
    simulador.adicionarInimigo(make_unique<Zumbi>(2,2));  


    // Inicia a simulação
    simulador.simular();
    return 0;
}
