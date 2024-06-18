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

// Usando namespaces para simplificar a sintaxe
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





// Construtor da classe Simulador que inicializa a altura e largura do mapa

Simulador::Simulador(int altura, int largura) : m_altura(altura), m_largura(largura) {
    matrizMapa.resize(m_altura); // Redimensiona o número de linhas da matriz

    // Inicializa cada linha da matriz com vetores vazios de unique_ptr<Entidade>
    for (auto& linha : matrizMapa) {
        linha.resize(m_largura); // Redimensiona o número de colunas da linha
    }
}

// Construtor padrão da classe Simulador
Simulador::Simulador() {
}
// Método para adicionar uma torre ao simulador
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
        cerr << "Erro ao adicionar a torre: " << e.what() << '\n'; // Capturar e exibir exceções conhecidas
    } catch (...) {
        cerr << "Erro desconhecido ao adicionar a torre.\n"; // Capturar e exibir exceções desconhecidas
    }
}


// Método para adicionar um inimigo ao simulador
void Simulador::adicionarInimigo(unique_ptr<Inimigo> inimigo) {
    try {
        // Verificar se o inimigo é válido
        if (!inimigo) {
            throw invalid_argument("Inimigo inválido!"); // Lança uma exceção se o inimigo for nulo
        }

        int posX = inimigo->getPosicaoX();
        int posY = inimigo->getPosicaoY();

        // Verificar se a posição está dentro dos limites da matriz
        if (posX >= 0 && posX < m_altura && posY >= 0 && posY < m_largura) {
            // Adiciona o inimigo ao vetor inimigos e à matriz
            inimigos.push_back(inimigo.get()); // Adiciona o ponteiro do inimigo ao vetor
            matrizMapa[posX][posY] = move(inimigo); // Move o inimigo para a posição na matriz
        } else {
            throw out_of_range("Posição do inimigo fora dos limites da matriz!"); // Lança uma exceção se a posição for fora dos limites
        }
    } catch (const exception& e) {
        cerr << "Erro ao adicionar o inimigo: " << e.what() << '\n'; // Capturar e exibir exceções conhecidas
    } catch (...) {
        cerr << "Erro desconhecido ao adicionar o inimigo.\n"; // Capturar e exibir exceções desconhecidas
    }
}

// Método para adicionar uma estrutura ao simulador
void Simulador::adicionarEstrutura(unique_ptr<Estrutura> estrutura) {
    try {
        // Verificar se a estrutura é válida
        if (!estrutura) {
            throw invalid_argument("Estrutura inválida!");
        }
        // Verificar se a posição está dentro dos limites da matriz
        int posX = estrutura->getPosicaoX();
        int posY = estrutura->getPosicaoY();

        // Verificar se a posição está dentro dos limites da matriz
        if (posX >= 0 && posX < m_altura && posY >= 0 && posY < m_largura) {
            // Adiciona a estrutura ao vetor estruturas e à matriz
            estruturas.push_back(estrutura.get()); // Adiciona o ponteiro da estrutura ao vetor
            matrizMapa[posX][posY] = move(estrutura); // Move a estrutura para a posição na matriz
        } else {
            throw out_of_range("Posição da estrutura fora dos limites da matriz!"); // Lança uma exceção se a posição for inválida
        }
    } catch (const exception& e) {
        cerr << "Erro ao adicionar a estrutura: " << e.what() << '\n'; // Captura e exibe exceções conhecidas
    } catch (...) {
        cerr << "Erro desconhecido ao adicionar a estrutura.\n"; // Captura e exibe exceções desconhecidas
    }
}

// Método para atualizar a matriz com a nova posição da entidade
void Simulador::atualizaMatriz(Entidade* entidade, int posAnteriorX, int posAnteriorY, int Vida) {
       try {
        // Verificar se a entidade é válida
        if (!entidade) {
            cerr << "Entidade inválida!\n"; // Exibe erro se a entidade for nula
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
            // Se a posição anterior não estiver vazia, liberar o ponteiro
           if (matrizMapa[posAnteriorX][posAnteriorY] != nullptr) {
                matrizMapa[posAnteriorX][posAnteriorY].release();
            }
            } 
            else 
            {
            cout << "Posição anterior (" << posAnteriorX << ", " << posAnteriorY << ") fora dos limites.\n"; // Informa se a posição anterior está fora dos limites
            }
          // Verificar se a entidade ainda está viva
          if (Vida == 0) {
                // Se a entidade estiver morta, liberar o ponteiro na posição atual
                matrizMapa[posX][posY].release();
                
            }
        else
        {
        // Atualizar a matriz com a nova posição da entidade
        matrizMapa[posX][posY].reset(entidade);
        }
    } else {
        cerr << "Inimigo chegou ao final do mapa!\n"; // Exibe erro se a entidade chegou ao final do mapa
    }
}
   catch (const exception& e) {
        cerr << "Erro ao atualizar a matriz: " << e.what() << '\n'; // Captura e exibe exceções conhecidas
    } catch (...) {
        cerr << "Erro desconhecido ao atualizar a matriz.\n"; // Captura e exibe exceções desconhecidas
    }
}
// Método para imprimir o mapa
void Simulador::printaMapa() {
    for (const auto& linha : matrizMapa) { // Iterar sobre cada linha da matriz do mapa
        for (const auto& entidade_ptr : linha) { // Iterar sobre cada entidade na linha
            if (entidade_ptr) { 
                entidade_ptr->print(); // Se a entidade existir, imprimir a entidade
            } else {
                cout << " - "; // Se não houver entidade, imprimir um espaço vazio
            }
        }
        cout << std::endl; // Quebrar a linha após imprimir cada linha do mapa
    }
}

// Método para simular o jogo
bool Simulador:: simular(int dificuldade) {
    cout << "\n"<< "-----------Partida iniciada!-------------" << endl;
    int endMap = m_altura - 1; // Define o fim do mapa como a altura menos um
    bool endGame = false; // Flag para determinar o fim do jogo
    bool victory = false; // Flag para determinar a vitória
    bool defeat = false; // Flag para determinar a derrota
    int rounds=1; // Contador de rodadas
    

    while (true) { // Loop principal do jogo
        for (auto it = inimigos.begin(); it != inimigos.end();) { // Iterar sobre os inimigos
            auto& inimigo = **it; // Desreferenciar o ponteiro para obter o objeto real
            int vidaInimigo;
            switch (dificuldade) {  // Definir a vida do inimigo com base na dificuldade escolhida
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
            int posAnteriorX = inimigo.getPosicaoX(); // Guarda a posição X anterior do inimigo
            int posAnteriorY = inimigo.getPosicaoY(); // Guarda a posição Y anterior do inimigo

            if (vidaInimigo > 0) { // Se o inimigo ainda estiver vivo
                cout<< "\n-----------------INICIO DO ROUND "<< rounds <<"-----------------\n";
                cout << "Inimigo detectado!";
                if (posAnteriorX == endMap) { // Se o inimigo alcançou o fim do mapa
                    endGame = true;
                    defeat = true;
                }
                inimigo.moverX(); // Mover o inimigo no eixo X
                atualizaMatriz(&inimigo, posAnteriorX, posAnteriorY, vidaInimigo); // Atualizar a matriz com a nova posição do inimigo
               cout << "\nPreparando ataque contra o inimigo na posição [" << inimigo.getPosicaoX() << "] - Vida: " << vidaInimigo << endl; 

                for (const auto& ptr_torre : torres) { // Iterar sobre as torres
                    auto& torre = *ptr_torre; // Desreferenciar o ponteiro para obter o objeto real
                    if (std::abs(torre.getPosicaoX() - inimigo.getPosicaoX()) <= torre.getAlcance()) { // Se a torre estiver no alcance do inimigo
                        
                        if(inimigo.getVida() == 0){  // Se o inimigo estiver morto
                            cout<<"\nInimigo derrotado!\n";
                        break;} // Sair do loop das torres se o inimigo estiver morto
                        torre.atacar(); // Torre ataca o inimigo
                        inimigo.receberDano(torre.getAtaque()); // Inimigo recebe dano da torre
                    }
                }
                cout<< "\nMapa do round "<<rounds<<"!\n\n";
                printaMapa(); // Imprimir o mapa atualizado
                ++it; // Avançar o interador para o próximo inimigo
                cout<< "\n-----------------FIM DO ROUND "<< rounds <<"-----------------\n";
                rounds=rounds+1; // Incrementar contador de rodadas
            } else {
                atualizaMatriz(&inimigo, posAnteriorX, posAnteriorY, vidaInimigo); // Atualizar a matriz com a posição anterior do inimigo morto 
                it = inimigos.erase(it); // Remover inimigo derrotado e atualizar o iterador
            if( inimigos.size() == 0) // Se todos os inimigos forem derrotados
            {
                endGame = true;
                victory = true;
             }
            }

            if (endGame && defeat) {  // Se o jogo terminou com derrota
                cout << "Inimigos chegaram até o final :(" << "\n";
                cout << "DEFEAT!😖" << "\n";
                return false;
            } else if (endGame && victory) { // Se o jogo terminou com vitória
                cout << "Inimigos Derrotados! Bom trabalho!" << "\n";
                cout << "VICTORY!🏆" << "\n";
                return true;
            }
        std::this_thread::sleep_for(std::chrono::seconds(3));
        }

    }
}
// Método para iniciar a simulação com configuração de dificuldade
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

// Método para definir os limites do mapa
void Simulador::setLimites(int altura, int largura) 
{
    m_altura = altura; 
    m_largura = largura;

      matrizMapa.resize(m_altura); // Redimensiona o número de linhas da matriz

   for (auto& linha : matrizMapa) {
        linha.resize(m_largura); // Redimensiona o número de colunas da linha
    }

}
