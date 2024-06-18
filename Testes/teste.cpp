#define CATCH_CONFIG_MAIN
#include "Catch2.hpp"
#include "../include/mapa-hpp/Mapa.hpp"
#include "../include/torre-hpp/TorreDeFogo.hpp"
#include "../include/inimigo-hpp/Esqueleto.hpp"
#include "../include/estrutura-hpp/Arvore.hpp"
#include "../include/estrutura-hpp/Parede.hpp"
#include "../include/simulador-hpp/Simulador.hpp"
#include "../include/mapa-hpp/MapaPadrao.hpp"
#include "../include/mapa-hpp/Cemiterio.hpp"
#include "../include/inimigo-hpp/Zumbi.hpp"

#include "iostream"
#include <thread>
#include <chrono>
#include <memory> 

using std::cout;
using std::make_unique;
using std::endl;

TEST_CASE("Adicionar torres no simulador") {
    Simulador simulador(10, 10);
    simulador.adicionarTorre(make_unique<TorreDeFogo>(5, 1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(6, 1));
    simulador.printaMapa();
}

TEST_CASE("Adicionar inimigos no simulador") {
    Simulador simulador(10, 10);
    simulador.adicionarInimigo(make_unique<Esqueleto>(0, 0));
    simulador.adicionarInimigo(make_unique<Zumbi>(2, 0));
    simulador.printaMapa();
}
TEST_CASE("Testar Mapa") {
    Simulador simulador(10, 10);
    MapaPadrao mapa(10, 10);
    mapa.MontaMapa(simulador);
    simulador.printaMapa();
}
TEST_CASE("Adicionar Estrutura") {
    Simulador simulador(10, 10);
    simulador.adicionarEstrutura(make_unique<Estrutura>(5, 5));
    simulador.printaMapa();
}
TEST_CASE("Testar Cemiterio no simulador") {
    Simulador simulador(10, 10);
    Cemiterio mapa(10, 10);
    mapa.MontaMapa(simulador);
    simulador.printaMapa();
}
TEST_CASE("Atualizar Matriz") {
    Simulador simulador(10, 10);
    auto inimigo = make_unique<Zumbi>(1, 2, 0);
    simulador.adicionarInimigo(move(inimigo));
    auto inimigoPtr = inimigo.get();
    simulador.atualizaMatriz(inimigoPtr, 1, 1);

    REQUIRE(sim.matrizMapa[1][1] == nullptr);
    REQUIRE(sim.matrizMapa[2][2] != nullptr);
}
