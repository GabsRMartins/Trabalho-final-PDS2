#include "../../include/mapa-hpp/Mapa.hpp"
#include "../../include/torre-hpp/TorreDeFogo.hpp"
#include "../../include/inimigo-hpp/Esqueleto.hpp"
#include "../../include/estrutura-hpp/Arvore.hpp"
#include "../../include/estrutura-hpp/Parede.hpp"
#include "../../include/simulador-hpp/Simulador.hpp"
#include "../../include/mapa-hpp/MapaPadrao.hpp"
#include "../../include/mapa-hpp/Cemiterio.hpp"
#include "../../include/inimigo-hpp/Zumbi.hpp"


#include "iostream"
#include <thread>
#include <chrono>
#include <memory> 

using std::cout;
using std::make_unique;
using std::endl;




int main() {
    // Inicia a simulação
   
    Simulador simulacao;
    simulacao.startSimulacao(simulacao);
    simulacao.simular();
    return 0;
}



