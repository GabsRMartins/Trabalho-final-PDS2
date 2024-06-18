#include "../../include/mapa-hpp/Mapa.hpp"
#include "../../include/entidade-hpp/Entidade.hpp"
#include "../../include/estrutura-hpp/Estrutura.hpp"
#include "../../include/inimigo-hpp/Inimigo.hpp"
#include "../../include/simulador-hpp/Simulador.hpp"
#include "../../include/interface-hpp/Interface.hpp"
#include "../../include/mapa-hpp/MapaPadrao.hpp" 
#include "../../include/mapa-hpp/Cemiterio.hpp" 
#include "../../include/mapa-hpp/DesertoMisterioso.hpp" 

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
        cout << "[1] Floresta do Crepúsculo|| [2] Cemitério Tenebroso || [3] Deserto Misterioso || [0] Sair" << endl;
        int opcao;
        cin >> opcao;

        switch (opcao) {
            case 1:
            {
                simulador.setLimites(12,12);
                MapaPadrao mapaPadrao(12,12);
                cout << "Você escolheu Floresta do Crepúsculo." << endl;
                mapaPadrao.MontaMapa(simulador);
                mapaPadrao.adicionarTorreMapa(simulador,1);
                simulador.simular(1);
            }
                break;
            case 2:
            {
                simulador.setLimites(12,12);
                Cemiterio cemiterio(12,12);
                cout << "Você escolheu Cemitério Tenebroso." << endl;
                cemiterio.MontaMapa(simulador);
                cemiterio.adicionarTorreMapa(simulador,1);
                simulador.simular(1);
            }
                break;
             case 3:
            {
                simulador.setLimites(12,12);
                DesertoMisterioso deserto(12,12);
                cout << "Você escolheu Deserto Misterioso." << endl;
                deserto.MontaMapa(simulador);
                deserto.adicionarTorreMapa(simulador,1);
                simulador.simular(1);
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
        cout << "[1] Floresta do Crepúsculo || [2] Cemitério Tenebroso || [3] Deserto Misterioso || [0] Sair" << endl;
        int opcao;
        cin >> opcao;

        switch (opcao) {
            case 1:
            {   
                simulador.setLimites(10,10);
                MapaPadrao mapaPadrao(10,10);
                cout << "Você escolheu Floresta do Crepúsculo." << endl;
                mapaPadrao.MontaMapa(simulador);
                mapaPadrao.adicionarTorreMapa(simulador,2);
                simulador.simular(2);
                break;
                }

            case 2:
             {  
                simulador.setLimites(10,10);
                Cemiterio cemiterio(10,10);
                cout << "Você escolheu Cemitério Tenebroso." << endl;
                cemiterio.MontaMapa(simulador);
                cemiterio.adicionarTorreMapa(simulador,2);
                simulador.simular(2);
                break;
                }
            case 3:
            {
                simulador.setLimites(10,10);
                DesertoMisterioso deserto(10,10);
                cout << "Você escolheu Deserto Misterioso." << endl;
                deserto.MontaMapa(simulador);
                deserto.adicionarTorreMapa(simulador,2);
                simulador.simular(2);
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

void Interface::dificil(Simulador& simulador){
    

    while (true) {
        cout << "Qual mapa você gostaria de jogar?" << endl;
        cout << "[1] Floresta do Crepúsculo || [2] Cemitério Tenebroso  || [3] Deserto Misterioso || [0] Sair" << endl;
        int opcao;
        cin >> opcao;

        switch (opcao) {
            case 1:
             {
                simulador.setLimites(8,8);
                MapaPadrao mapaPadrao(8,8);
                cout << "Você escolheu Floresta do Crepúsculo." << endl;
                mapaPadrao.MontaMapa(simulador);
                mapaPadrao.adicionarTorreMapa(simulador,3);
                simulador.simular(3);
                }
                break;
            case 2:
                {
                simulador.setLimites(8,8);
                Cemiterio cemiterio(8,8);
                cout << "Você escolheu Deserto Misterioso." << endl;
                cemiterio.MontaMapa(simulador);
                cemiterio.adicionarTorreMapa(simulador,3);
                simulador.simular(3);
                }
                break;
         case 3:
            {
                simulador.setLimites(8,8);
                DesertoMisterioso deserto(8,8);
                cout << "Você escolheu Cemitério Tenebroso." << endl;
                deserto.MontaMapa(simulador);
                deserto.adicionarTorreMapa(simulador,3);
                simulador.simular(3);
            }
                break;
            case 0:
                break;
            default:
                cout << "Opção inválida! Por favor, digite  um valor entre 0 e 3." << endl;
                continue; // Volta para o início do loop para pedir outra entrada válida
        }

        break; // Sai do loop while(true)
    }
}