#include "../../include/mapa-hpp/Mapa.hpp"
#include <thread> // Biblioteca para trabalhar com threads
#include <chrono> // Biblioteca para trabalhar com tempo

// Aqui temos duas bibliotecas importantes:
// - <thread>: Permite criar e gerenciar threads (processos paralelos).
// - <chrono>: Fornece funções para medir o tempo e criar pausas.
#include <cmath> // Para std::abs

using std::unique_ptr;
using std::move;
using std::cout;



Mapa::Mapa(int tamanho) : tamanho(tamanho) {}

void Mapa::adicionarTorre(unique_ptr<Torre> torre) {
    torres.push_back(move(torre));
}

void Mapa::adicionarInimigo(unique_ptr<Inimigo> inimigo) {
    inimigos.push_back(move(inimigo));
}

void Mapa::simular() {
    int endMap = tamanho;
    bool endGame = false;
    while (true) {
        // Movimenta os inimigos e verifica se estão dentro do alcance das torres
        for (const auto& inimigo : inimigos) {
           if (inimigo->getVida() > 0) {
                inimigo->mover();
                std::cout << "Inimigo na posição " << inimigo->getPosicao() << " ";
                for (const auto& torre : torres) {
                    if (std::abs(torre->getPosicao() - inimigo->getPosicao()) <= torre->getAlcance()) {
                        torre->atacar();
                        inimigo->receberDano(torre->getAtaque());
                    }
                }
           }  

        }

        // Exibe o estado dos inimigos (posição e vida)
       cout << "\nEstado dos inimigos:\n";
        for (const auto& inimigo : inimigos) {
           cout << "Posicao: " << inimigo->getPosicao() << " - Vida: " << inimigo->getVida() << "\n";
             if(inimigo->getPosicao() == endMap){
                    cout << "Inimigos chegaram até o final!!!" << "\n";
                    cout << "You Lose" << "\n";
                    endGame = true;
                    break;
        }
        }

       
     


        for (const auto& inimigo : inimigos) {
            if (inimigo->getVida() > 0) {
                break;

            }
            endGame = true;
            cout << "Inimigos Derrotados! Bom trabalho!" << "\n";
                    cout << "You Win" << "\n";
        }
        if (endGame) 
            break;

        // Adiciona um pequeno delay para simulação (1 segundo)
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
