#include "../../include/mapa-hpp/Mapa.hpp"
#include "../../include/entidade-hpp/Entidade.hpp"
#include "../../include/estrutura-hpp/Estrutura.hpp"
#include "../../include/inimigo-hpp/Inimigo.hpp"
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

    torres.push_back(torre.get()); // Adiciona o ponteiro cru ao vetor torres
    int posX = torre->getPosicaoX();
    int posY = torre->getPosicaoY();

    if (posX >= 0 && posX < m_altura && posY >= 0 && posY < m_largura) {
        // Adiciona um ponteiro para a torre à matriz
        matrizMapa[posX][posY] = move(torre);
    }
}



void Mapa::adicionarInimigo(unique_ptr<Inimigo> inimigo) {

   inimigos.push_back(inimigo.get());

    int posX = inimigo->getPosicaoX();
    int posY = inimigo->getPosicaoY();
      if (posX>= 0 && posX < m_altura &&   posY >= 0 && posY < m_largura) {
        // Adiciona um ponteiro para a inimigo à matriz
        matrizMapa[posX][posY] = move(inimigo);
    }
}


void Mapa::adicionarEstrutura(unique_ptr<Estrutura> estrutura) {

    estruturas.push_back(estrutura.get());

    int posX = estrutura->getPosicaoX();
    int posY = estrutura->getPosicaoY();

    if (posX >= 0 && posX < m_altura && posY >= 0 && posY < m_largura) {
        // Adiciona um ponteiro para a estrutura à matriz
        matrizMapa[posX][posY] = move(estrutura);
    }
}



void Mapa::atualizaMatriz(Entidade* entidade, int posAnteriorX, int posAnteriorY) {
    // Verificar se a entidade é válida
    if (!entidade) {
        std::cerr << "Entidade inválida.\n";
        return;
    }

    // Obter a posição da entidade
    int posX = entidade->getPosicaoX();
    int posY = entidade->getPosicaoY();

/*     std::cout << "Atualizando matriz para entidade na posição (" << posX << ", " << posY << ")"
              << " movida da posição (" << posAnteriorX << ", " << posAnteriorY << ").\n"; */

    // Verificar se a nova posição está dentro dos limites da matriz
    if (posX >= 0 && posX < m_altura && posY >= 0 && posY < m_largura) {
        // Verificar se a posição anterior está dentro dos limites da matriz
        if (posAnteriorX >= 0 && posAnteriorX < m_altura && posAnteriorY >= 0 && posAnteriorY < m_largura) {
  
                
        /*     cout << "Removendo entidade da posição anterior (" << posAnteriorX << ", " << posAnteriorY << ").\n"; */
            // Liberar o ponteiro da posição anterior
            matrizMapa[posAnteriorX][posAnteriorY].release();
            // Definir a posição anterior como nullptr
            matrizMapa[posAnteriorX][posAnteriorY] = nullptr;
            
        } else {
            cout << "Posição anterior (" << posAnteriorX << ", " << posAnteriorY << ") fora dos limites.\n";
        }

        // Atualizar a matriz com a nova posição da entidade
  /*      cout << "Atualizando matriz na nova posição (" << posX << ", " << posY << ").\n"; */
        matrizMapa[posX][posY].reset(entidade);
    } else {
        std::cerr << "Nova posição (" << posX << ", " << posY << ") fora dos limites.\n";
    }
}

/* bool Mapa::verificaEstrutura(int posX, int posY) {
    if (posX >= 0 && posX < m_altura && posY >= 0 && posY < m_largura) {
            if(matrizMapa[posX][posY] != nullptr){
                return 1;
            }
            return 0;
    }
} */


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

bool Mapa::simular() {
     
    int endMap = m_altura;
    bool endGame = false;
    bool victory = false;
    bool defeat = false;

    while (true) {
        for (const auto& ptr_inimigo : inimigos) {
            auto& inimigo = *ptr_inimigo; // Desreferenciar o ponteiro para obter o objeto real
            if (inimigo.getVida() > 0) {
                 cout << "Posicao: " << inimigo.getPosicaoX() << " - Vida: " << inimigo.getVida() << "\n";
                    if(inimigo.getPosicaoX() == endMap){

                    endGame = true;
                    defeat  = true;
          }
          else{
                int posAnteriorX = inimigo.getPosicaoX();
                int posAnteriorY = inimigo.getPosicaoY();
                inimigo.moverX();
                atualizaMatriz(&inimigo, posAnteriorX, posAnteriorY);
                std::cout << "Inimigo na posição " << inimigo.getPosicaoX() << " " << std::endl;
                }
                for (const auto& ptr_torre : torres) {
                    auto& torre = *ptr_torre; // Desreferenciar o ponteiro para obter o objeto real
                    if (std::abs(torre.getPosicaoX() - inimigo.getPosicaoX()) <= torre.getAlcance()) {
                        torre.atacar();
                        inimigo.receberDano(torre.getAtaque());
                    }
                }
                printaMapa();
            } else {
            
            endGame = true;
            victory = true;

            }

        if (endGame && defeat) {
            cout << "Inimigos chegaram até o final!!!" << "\n";
            cout << "You Lose" << "\n";
            return 0;
        } else if (endGame && victory) {
            cout << "Inimigos Derrotados! Bom trabalho!" << "\n";
            cout << "You Win" << "\n";
            return 1;
            
        }


        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
}

}