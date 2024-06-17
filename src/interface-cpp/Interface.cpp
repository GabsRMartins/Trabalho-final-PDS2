#include "../../include/mapa-hpp/Mapa.hpp"
#include "../../include/entidade-hpp/Entidade.hpp"
#include "../../include/estrutura-hpp/Estrutura.hpp"
#include "../../include/inimigo-hpp/Inimigo.hpp"
#include "../../include/simulador-hpp/Simulador.hpp"
#include "../../include/interface-hpp/Interface.hpp"
#include "../../include/mapa-hpp/MapaPadrao.hpp" 
#include "../../include/mapa-hpp/Cemiterio.hpp" 

#include <vector>
#include "iostream"
#include <cmath> // Para std::abs

using std::vector;
using std::cout;
using std::endl;
using std::cin;

Interface::Interface() {
    
}

void Interface::facil(Simulador& simulador){
    

    while (true) {
        cout << "Qual mapa você gostaria de jogar?" << endl;
        cout << "[1] Floresta Encantada || [2] Cemitério Tenebroso || [0] Sair" << endl;
        int opcao;
        cin >> opcao;

        switch (opcao) {
            case 1:
            {
                simulador.setLimites(12,12);
                MapaPadrao mapaPadrao(12,12);
                cout << "Você escolheu Floresta Encantada." << endl;
                mapaPadrao.MontaMapa(simulador);
            }
                break;
            case 2:
            {
                simulador.setLimites(12,12);
                Cemiterio cemiterio(12,12);
                cout << "Você escolheu Cemitério Tenebroso." << endl;
                cemiterio.MontaMapa(simulador);
            }
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

void Interface::medio(Simulador& simulador){
    

    while (true) {
        cout << "Qual mapa você gostaria de jogar?" << endl;
        cout << "[1] Floresta Encantada || [2] Cemitério Tenebroso || [0] Sair" << endl;
        int opcao;
        cin >> opcao;

        switch (opcao) {
            case 1:
            {   
                simulador.setLimites(10,10);
                MapaPadrao mapaPadrao(10,10);
                cout << "Você escolheu Floresta Encantada." << endl;
                mapaPadrao.MontaMapa(simulador);
                break;
                }

            case 2:
             {  
                simulador.setLimites(10,10);
                Cemiterio cemiterio(10,10);
                cout << "Você escolheu Cemitério Tenebroso." << endl;
                cemiterio.MontaMapa(simulador);
                break;
                }
            case 0:
                break;
            default:
                cout << "Opção inválida! Por favor, digite  um valor entre 0 e 2." << endl;
                continue; // Volta para o início do loop para pedir outra entrada válida
        }

        break; // Sai do loop while(true)
    }
}

void Interface::dificil(Simulador& simulador){
    

    while (true) {
        cout << "Qual mapa você gostaria de jogar?" << endl;
        cout << "[1] Floresta Encantada || [2] Cemitério Tenebroso || [0] Sair" << endl;
        int opcao;
        cin >> opcao;

        switch (opcao) {
            case 1:
             {
                simulador.setLimites(8,8);
                MapaPadrao mapaPadrao(8,8);
                cout << "Você escolheu Floresta Encantada." << endl;
                mapaPadrao.MontaMapa(simulador);
                }
                break;
            case 2:
                {
                simulador.setLimites(8,8);
                Cemiterio cemiterio(8,8);
                cout << "Você escolheu Cemitério Tenebroso." << endl;
                cemiterio.MontaMapa(simulador);
                }
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