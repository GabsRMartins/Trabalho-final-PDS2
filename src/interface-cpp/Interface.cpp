#include "../../include/mapa-hpp/Mapa.hpp"
#include "../../include/entidade-hpp/Entidade.hpp"
#include "../../include/estrutura-hpp/Estrutura.hpp"
#include "../../include/inimigo-hpp/Inimigo.hpp"
#include "../../include/simulador-hpp/Simulador.hpp"
#include "../../include/interface-hpp/Interface.hpp"
#include "../../include/mapa-hpp/MapaPadrao.hpp" 
#include "../../include/mapa-hpp/Cemiterio.hpp" 
#include <thread> // Biblioteca para trabalhar com threads
#include <chrono> // Biblioteca para trabalhar com tempo
#include <vector>
#include <iostream>
// Aqui temos duas bibliotecas importantes:
// - <thread>: Permite criar e gerenciar threads (processos paralelos).
// - <chrono>: Fornece funções para medir o tempo e criar pausas.
#include <cmath> // Para std::abs

using std::vector;
using std::cout;
using std::endl;
using std::cin;



void Interface::facil(){
    

    while (true) {
        cout << "Qual mapa você gostaria de jogar?" << endl;
        cout << "[1] Floresta Encantada || [2] Cemitério Tenebroso || [0] Sair" << endl;
        int opcao;
        cin >> opcao;

        switch (opcao) {
            case 1:
                MapaPadrao mapaPadrao(12,12);
                cout << "Você escolheu Floresta Encantada." << endl;
                mapaPadrao.adicionarMapa(simulador);
                break;
            case 2:
                Cemiterio cemiterio(12,12);
                cout << "Você escolheu Cemitério Tenebroso." << endl;
                cemiterio.adicionarMapa(simulador);
                break;
            case 0:
                break;
            default:
                cout << "Opção inválida! Por favor, digite  um valor entre 0 e 2." << endl;
                continue; // Volta para o início do loop para pedir outra entrada válida
        }

        break; // Sai do loop while(true)
    }
}

void Interface::medio(){
    

    while (true) {
        cout << "Qual mapa você gostaria de jogar?" << endl;
        cout << "[1] Floresta Encantada || [2] Cemitério Tenebroso || [0] Sair" << endl;
        int opcao;
        cin >> opcao;

        switch (opcao) {
            case 1:
                MapaPadrao mapaPadrao(10,10);
                cout << "Você escolheu Floresta Encantada." << endl;
                mapaPadrao.adicionarMapa(simulador);
                break;
            case 2:
                MapaPadrao mapaPadrao(10,10);
                cout << "Você escolheu Cemitério Tenebroso." << endl;
                cemiterio.adicionarMapa(simulador);
                break;
            case 0:
                break;
            default:
                cout << "Opção inválida! Por favor, digite  um valor entre 0 e 2." << endl;
                continue; // Volta para o início do loop para pedir outra entrada válida
        }

        break; // Sai do loop while(true)
    }
}

void Interface::dificil(){
    

    while (true) {
        cout << "Qual mapa você gostaria de jogar?" << endl;
        cout << "[1] Floresta Encantada || [2] Cemitério Tenebroso || [0] Sair" << endl;
        int opcao;
        cin >> opcao;

        switch (opcao) {
            case 1:
                MapaPadrao mapaPadrao(8,8);
                cout << "Você escolheu Floresta Encantada." << endl;
                mapaPadrao.adicionarMapa(simulador);
                break;
            case 2:
                MapaPadrao mapaPadrao(8,8);
                cout << "Você escolheu Cemitério Tenebroso." << endl;
                cemiterio.adicionarMapa(simulador);
                break;
            case 0:
                break;
            default:
                cout << "Opção inválida! Por favor, digite  um valor entre 0 e 2." << endl;
                continue; // Volta para o início do loop para pedir outra entrada válida
        }

        break; // Sai do loop while(true)
    }
}