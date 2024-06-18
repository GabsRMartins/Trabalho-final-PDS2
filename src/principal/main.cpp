#include "../../include/mapa-hpp/Mapa.hpp"  // Inclui o cabeçalho da classe Mapa
#include "../../include/torre-hpp/TorreDeFogo.hpp"  // Inclui o cabeçalho da classe TorreDeFogo
#include "../../include/inimigo-hpp/Esqueleto.hpp"  // Inclui o cabeçalho da classe Esqueleto
#include "../../include/estrutura-hpp/Arvore.hpp"  // Inclui o cabeçalho da classe Arvore
#include "../../include/estrutura-hpp/Parede.hpp"  // Inclui o cabeçalho da classe Parede
#include "../../include/simulador-hpp/Simulador.hpp"  // Inclui o cabeçalho da classe Simulador
#include "../../include/mapa-hpp/MapaPadrao.hpp"  // Inclui o cabeçalho da classe MapaPadrao
#include "../../include/mapa-hpp/Cemiterio.hpp"  // Inclui o cabeçalho da classe Cemiterio
#include "../../include/inimigo-hpp/Zumbi.hpp"  // Inclui o cabeçalho da classe Zumbi

#include <iostream>  // Biblioteca para entrada/saída padrão (ex.: std::cout)
#include <thread>  // Biblioteca para trabalhar com threads
#include <chrono>  // Biblioteca para trabalhar com tempo
#include <memory>  // Biblioteca para gerenciar alocação dinâmica de memória

using std::cout;
using std::make_unique;
using std::endl;

int main() {
    // Inicia a simulação
    Simulador simulacao;  // Cria uma instância do simulador
    simulacao.startSimulacao(simulacao);  // Inicia a simulação chamando o método startSimulacao
    return 0;  // Retorna 0 indicando que o programa terminou com sucesso
}



