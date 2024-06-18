#include "../../include/mapa-hpp/Mapa.hpp"
#include "../../include/entidade-hpp/Entidade.hpp"
#include "../../include/estrutura-hpp/Estrutura.hpp"
#include "../../include/inimigo-hpp/Inimigo.hpp"
#include "../../include/simulador-hpp/Simulador.hpp"
#include "../../include/interface-hpp/Interface.hpp"
#include "../../include/mapa-hpp/Cemiterio.hpp"

#include "iostream"


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
using std::endl;
using std::exception;
using std::endl;
using std::cerr;
using std::out_of_range;
using std::invalid_argument;







Simulador::Simulador(int altura, int largura) : m_altura(altura), m_largura(largura) {
    matrizMapa.resize(m_altura); // Redimensiona o número de linhas da matriz

    // Inicializa cada linha da matriz com vetores vazios de unique_ptr<Entidade>
    for (auto& linha : matrizMapa) {
        linha.resize(m_largura); // Redimensiona o número de colunas da linha
    }
}

Simulador::Simulador() {
}

void Simulador::adicionarTorre(unique_ptr<Torre> torre) {
    try {
        // Verificar se a torre é válida
        if (!torre) {
            throw invalid_argument("Torre inválida!");
        }

        int posX = torre->getPosicaoX();
        int posY = torre->getPosicaoY();

        // Verificar se a posição está dentro dos limites da matriz
        if (posX >= 0 && posX < m_altura && posY >= 0 && posY < m_largura) {
            // Adiciona a torre ao vetor torres e à matriz
            torres.push_back(torre.get());
            matrizMapa[posX][posY] = move(torre);
        } else {
            throw out_of_range("Posição da torre fora dos limites da matriz!");
        }
    } catch (const exception& e) {
        cerr << "Erro ao adicionar a torre: " << e.what() << '\n';
    } catch (...) {
        cerr << "Erro desconhecido ao adicionar a torre.\n";
    }
}



void Simulador::adicionarInimigo(unique_ptr<Inimigo> inimigo) {
    try {
        // Verificar se o inimigo é válido
        if (!inimigo) {
            throw invalid_argument("Inimigo inválido!");
        }

        int posX = inimigo->getPosicaoX();
        int posY = inimigo->getPosicaoY();

        // Verificar se a posição está dentro dos limites da matriz
        if (posX >= 0 && posX < m_altura && posY >= 0 && posY < m_largura) {
            // Adiciona o inimigo ao vetor inimigos e à matriz
            inimigos.push_back(inimigo.get());
            matrizMapa[posX][posY] = move(inimigo);
        } else {
            throw out_of_range("Posição do inimigo fora dos limites da matriz!");
        }
    } catch (const exception& e) {
        cerr << "Erro ao adicionar o inimigo: " << e.what() << '\n';
    } catch (...) {
        cerr << "Erro desconhecido ao adicionar o inimigo.\n";
    }
}

void Simulador::adicionarEstrutura(unique_ptr<Estrutura> estrutura) {
    try {
        // Verificar se a estrutura é válida
        if (!estrutura) {
            throw invalid_argument("Estrutura inválida!");
        }

        int posX = estrutura->getPosicaoX();
        int posY = estrutura->getPosicaoY();

        // Verificar se a posição está dentro dos limites da matriz
        if (posX >= 0 && posX < m_altura && posY >= 0 && posY < m_largura) {
            // Adiciona a estrutura ao vetor estruturas e à matriz
            estruturas.push_back(estrutura.get());
            matrizMapa[posX][posY] = move(estrutura);
        } else {
            throw out_of_range("Posição da estrutura fora dos limites da matriz!");
        }
    } catch (const exception& e) {
        cerr << "Erro ao adicionar a estrutura: " << e.what() << '\n';
    } catch (...) {
        cerr << "Erro desconhecido ao adicionar a estrutura.\n";
    }
}


void Simulador::atualizaMatriz(Entidade* entidade, int posAnteriorX, int posAnteriorY, int Vida) {
       try {
        // Verificar se a entidade é válida
        if (!entidade) {
            cerr << "Entidade inválida!\n";
            return;
        }

    // Obter a posição da entidade
    int posX = entidade->getPosicaoX();
    int posY = entidade->getPosicaoY();

    // Verificar se a nova posição está dentro dos limites da matriz
    if (posX >= 0 && posX < m_altura && posY >= 0 && posY < m_largura) {
        // Verificar se a posição anterior está dentro dos limites da matriz
        if (posAnteriorX >= 0 && posAnteriorX < m_altura && posAnteriorY >= 0 && posAnteriorY < m_largura) 
        {
           if (matrizMapa[posAnteriorX][posAnteriorY] != nullptr) {
                matrizMapa[posAnteriorX][posAnteriorY].release();
            }
            } 
            else 
            {
            cout << "Posição anterior (" << posAnteriorX << ", " << posAnteriorY << ") fora dos limites.\n";
            }
          if (Vida == 0) {
                matrizMapa[posX][posY].release();
                
            }
        else
        {
        // Atualizar a matriz com a nova posição da entidade
        matrizMapa[posX][posY].reset(entidade);
        }
    } else {
        cerr << "Inimigo chegou ao final do mapa!\n";
    }
}
   catch (const exception& e) {
        cerr << "Erro ao atualizar a matriz: " << e.what() << '\n';
    } catch (...) {
        cerr << "Erro desconhecido ao atualizar a matriz.\n";
    }
}

void Simulador::printaMapa() {
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
bool Simulador:: simular(int dificuldade) {
    cout << "\n"<< "-----------Partida iniciada!-------------" << endl;
    int endMap = m_altura - 1;
    bool endGame = false;
    bool victory = false;
    bool defeat = false;
    int rounds=1;
   

    while (true) {
        for (auto it = inimigos.begin(); it != inimigos.end();) {
            auto& inimigo = **it; // Desreferenciar o ponteiro para obter o objeto real
            int vidaInimigo;
            switch (dificuldade) {
                case 1:
                {
                    vidaInimigo = inimigo.getVidaFacil();
                }break;
                case 2:
                {
                    vidaInimigo = inimigo.getVida();
                }break;
                case 3:
                {
                    vidaInimigo = inimigo.getVidaDificil();
                
                }break;
                }
            int posAnteriorX = inimigo.getPosicaoX();
            int posAnteriorY = inimigo.getPosicaoY();

            if (vidaInimigo > 0) {
                cout<< "\n-----------------INICIO DO ROUND "<< rounds <<"-----------------\n";
                cout << "Inimigo detectado!";
                if (posAnteriorX == endMap) {
                    endGame = true;
                    defeat = true;
                }
                inimigo.moverX();
                atualizaMatriz(&inimigo, posAnteriorX, posAnteriorY, vidaInimigo);
               cout << "\nPreparando ataque contra o inimigo na posição [" << inimigo.getPosicaoX() << "] - Vida: " << vidaInimigo << endl; 

                for (const auto& ptr_torre : torres) {
                    auto& torre = *ptr_torre; // Desreferenciar o ponteiro para obter o objeto real
                    if (std::abs(torre.getPosicaoX() - inimigo.getPosicaoX()) <= torre.getAlcance()) {
                        
                        if(inimigo.getVida() == 0){
                            cout<<"\nInimigo derrotado!\n";
                        break;}
                        torre.atacar();
                        inimigo.receberDano(torre.getAtaque());
                    }
                }
                cout<< "\nMapa do round "<<rounds<<"!\n\n";
                printaMapa();
                ++it; // Avançar o interador para o próximo inimigo
                cout<< "\n-----------------FIM DO ROUND "<< rounds <<"-----------------\n";
                rounds=rounds+1;
            } else {
                atualizaMatriz(&inimigo, posAnteriorX, posAnteriorY, vidaInimigo); 
                it = inimigos.erase(it); // Remover inimigo derrotado e atualizar o iterador
            if( inimigos.size() == 0)
            {
                endGame = true;
                victory = true;
             }
            }

            if (endGame && defeat) {
                cout << "Inimigos chegaram até o final :(" << "\n";
                cout << "DEFEAT!😖" << "\n";
                return false;
            } else if (endGame && victory) {
                cout << "Inimigos Derrotados! Bom trabalho!" << "\n";
                cout << "VICTORY!🏆" << "\n";
                return true;
            }
        std::this_thread::sleep_for(std::chrono::seconds(3));
        }

    }
}

void Simulador::startSimulacao(Simulador& simulador){
    Interface dificuldade;
    cout<<"Bem vindo ao Defense PDS 2!"<< endl;
    int opcao;
    cout<<"Qual a dificuldade você gostaria de jogar?";
    cout<<" [1] Fácil || [2] Médio || [3] Difícil || [0] Sair" << endl;
    scanf("%d",&opcao);
    switch (opcao)
    {
    case 1:
        {
        dificuldade.facil(simulador);
        break;
        }
    case 2:     
        {
        dificuldade.medio(simulador);
        break;
        }
    case 3:   
        {
        dificuldade.dificil(simulador);
        break;
        }
    case 0:
            break;
    default:
            cout << "Opção inválida! Digite um valor entre 1 e 3 para selecionar a dificuldade!" << endl;
            break;
    }
    
                
               

}


void Simulador::setLimites(int altura, int largura) 
{
    m_altura = altura; 
    m_largura = largura;

      matrizMapa.resize(m_altura); // Redimensiona o número de linhas da matriz

   for (auto& linha : matrizMapa) {
        linha.resize(m_largura); // Redimensiona o número de colunas da linha
    }

}
