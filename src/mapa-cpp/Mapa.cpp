#include "../../include/mapa-hpp/Mapa.hpp"
#include "../../include/entidade-hpp/Entidade.hpp"
#include <thread> // Biblioteca para trabalhar com threads
#include <chrono> // Biblioteca para trabalhar com tempo
#include <vector>
// Aqui temos duas bibliotecas importantes:
// - <thread>: Permite criar e gerenciar threads (processos paralelos).
// - <chrono>: Fornece funções para medir o tempo e criar pausas.
#include <cmath> // Para std::abs

using std::vector;
using std::unique_ptr;
using std::move;
using std::cout;




Mapa::Mapa(int altura, int largura) : m_altura(altura), m_largura(largura) {
    matrizMapa.resize(m_altura); // Redimensiona o número de linhas da matriz

    // Inicializa cada linha da matriz com vetores vazios de unique_ptr<Entidade>
    for (auto& linha : matrizMapa) {
        linha.resize(m_largura); // Redimensiona o número de colunas da linha
    }
}
void Mapa::adicionarTorre(unique_ptr<Torre> torre) {
    int posX = torre->getPosicaoX();
    int posY = torre->getPosicaoY();

    torres.push_back(torre.get()); // Adiciona o ponteiro cru ao vetor torres

    if (posX >= 0 && posX < m_altura && posY >= 0 && posY < m_largura) {
        // Adiciona um ponteiro para a torre à matriz
        matrizMapa[posX][posY] = move(torre);
    }
}





void Mapa::adicionarInimigo(unique_ptr<Inimigo> inimigo) {
    int posX = inimigo->getPosicaoX();
    int posY = inimigo->getPosicaoY();

   inimigos.push_back(inimigo.get());

      if (posX>= 0 && posX < m_altura &&   posY >= 0 && posY < m_largura) {
        // Adiciona um ponteiro para a inimigo à matriz
        matrizMapa[posX][posY] = move(inimigo);
    }
}


void Mapa::printaMapa() {
    for (const auto& linha : matrizMapa) {
        for (const auto& entidade_ptr : linha) {
            if (entidade_ptr) {
                entidade_ptr->print();
            } else {
                cout << " - ";
            }
        }
        cout << std::endl;
    }
}

void Mapa::simular() {
     
    int endMap = m_altura;
    bool endGame = false;
    bool victory = false;
    bool defeat = false;

    while (true) {
        for (const auto& ptr_inimigo : inimigos) {
            auto& inimigo = *ptr_inimigo; // Desreferenciar o ponteiro para obter o objeto real
            if (inimigo.getVida() > 0) {
             
                inimigo.mover();
                std::cout << "Inimigo na posição " << inimigo.getPosicaoX() << " ";
                for (const auto& ptr_torre : torres) {
                    auto& torre = *ptr_torre; // Desreferenciar o ponteiro para obter o objeto real
                    if (std::abs(torre.getPosicaoX() - inimigo.getPosicaoX()) <= torre.getAlcance()) {
                        torre.atacar();
                        inimigo.receberDano(torre.getAtaque());
                    }
                }
                printaMapa();
            }
        }

        cout << "\nEstado dos inimigos:\n";
        for (const auto& ptr_inimigo : inimigos) {
            auto& inimigo = *ptr_inimigo; // Desreferenciar o ponteiro para obter o objeto real
            cout << "Posicao: " << inimigo.getPosicaoX() << " - Vida: " << inimigo.getVida() << "\n";
                    if(inimigo.getPosicaoX() == endMap){

                    endGame = true;
                    defeat  = true;
                    break;
        }
        }

        for (const auto& ptr_inimigo : inimigos) {
            auto& inimigo = *ptr_inimigo; // Desreferenciar o ponteiro para obter o objeto real
            if (inimigo.getVida() > 0) {
                endGame = false;
                break;
            }
            endGame = true;
            victory = true;
        }

        if (endGame && defeat) {
            cout << "Inimigos chegaram até o final!!!" << "\n";
            cout << "You Lose" << "\n";
            break;
        } else if (endGame && victory) {
            cout << "Inimigos Derrotados! Bom trabalho!" << "\n";
            cout << "You Win" << "\n";
            break;
        }

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

