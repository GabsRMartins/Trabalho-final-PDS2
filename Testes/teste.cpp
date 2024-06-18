#define CATCH_CONFIG_MAIN // Define para que o Catch2 forneça a função main()
#include "Catch2.hpp" // Inclui o arquivo de cabeçalho principal do Catch2

// Inclusões dos arquivos de cabeçalho necessários para os testes
#include "../include/mapa-hpp/Mapa.hpp"
#include "../include/torre-hpp/TorreDeFogo.hpp"
#include "../include/inimigo-hpp/Esqueleto.hpp"
#include "../include/estrutura-hpp/Arvore.hpp"
#include "../include/estrutura-hpp/Parede.hpp"
#include "../include/simulador-hpp/Simulador.hpp"
#include "../include/mapa-hpp/MapaPadrao.hpp"
#include "../include/mapa-hpp/Cemiterio.hpp"
#include "../include/inimigo-hpp/Zumbi.hpp"

#include <iostream>1

#include <thread>
#include <chrono>
#include <memory>

using std::cout;
using std::make_unique;
using std::endl;

// Testes usando Catch2
TEST_CASE("Adicionar torres no simulador") {
    Simulador simulador(10, 10);
    simulador.adicionarTorre(make_unique<TorreDeFogo>(5, 1)); // Adiciona uma torre de fogo na posição (5, 1)
    simulador.adicionarTorre(make_unique<TorreDeFogo>(6, 1)); // Adiciona outra torre de fogo na posição (6, 1)
    simulador.printaMapa(); // Imprime o mapa após adicionar as torres
}

TEST_CASE("Adicionar inimigos no simulador") {
    Simulador simulador(10, 10);
    simulador.adicionarInimigo(make_unique<Esqueleto>(0, 0)); // Adiciona um esqueleto na posição (0, 0)
    simulador.adicionarInimigo(make_unique<Zumbi>(2, 0)); // Adiciona um zumbi na posição (2, 0)
    simulador.printaMapa(); // Imprime o mapa após adicionar os inimigos
}

TEST_CASE("Testar Mapa") {
    Simulador simulador(10, 10);
    MapaPadrao mapa(10, 10); // Cria um mapa padrão com dimensões 10x10
    mapa.MontaMapa(simulador); // Monta o mapa no simulador
    simulador.printaMapa(); // Imprime o mapa após montá-lo
}

TEST_CASE("Adicionar Estrutura") {
    Simulador simulador(10, 10);
    simulador.adicionarEstrutura(make_unique<Estrutura>(5, 5)); // Adiciona uma estrutura na posição (5, 5)
    simulador.printaMapa(); // Imprime o mapa após adicionar a estrutura
}

TEST_CASE("Testar Cemitério no simulador") {
    Simulador simulador(10, 10);
    Cemiterio mapa(10, 10); // Cria um cemitério com dimensões 10x10
    mapa.MontaMapa(simulador); // Monta o cemitério no simulador
    simulador.printaMapa(); // Imprime o mapa após montar o cemitério
}

TEST_CASE("Atualizar Matriz") {
    Simulador simulador(10, 10);
    auto inimigo = make_unique<Zumbi>(1, 2, 0); // Cria um zumbi na posição inicial (1, 2)
    simulador.adicionarInimigo(move(inimigo)); // Adiciona o zumbi ao simulador
    auto inimigoPtr = inimigo.get(); // Obtém o ponteiro para o zumbi
    simulador.atualizaMatriz(inimigoPtr, 1, 1); // Atualiza a matriz do simulador

    // Testes de asserção para verificar as mudanças na matriz
    REQUIRE(simulador.matrizMapa[1][1] == nullptr); // Deve garantir que a posição anterior do zumbi está vazia
    REQUIRE(simulador.matrizMapa[2][2] != nullptr); // Deve garantir que a nova posição do zumbi está ocupada
}

