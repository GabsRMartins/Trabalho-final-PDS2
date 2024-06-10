#include "Mapa.hpp"
#include <thread> // Biblioteca para trabalhar com threads
#include <chrono> // Biblioteca para trabalhar com tempo

// Aqui temos duas bibliotecas importantes:
// - <thread>: Permite criar e gerenciar threads (processos paralelos).
// - <chrono>: Fornece funções para medir o tempo e criar pausas.
#include <cmath> // Para std::abs

Mapa::Mapa(int tamanho) : tamanho(tamanho) {}

void Mapa::adicionarTorre(std::unique_ptr<Torre> torre) {
    torres.push_back(std::move(torre));
}

void Mapa::adicionarInimigo(std::unique_ptr<Inimigo> inimigo) {
    inimigos.push_back(std::move(inimigo));
}

void Mapa::simular() {
    while (true) {
        // Movimenta os inimigos e verifica se estão dentro do alcance das torres
        for (const auto& inimigo : inimigos) {
            inimigo->mover();
            std::cout << "Inimigo na posicao " << inimigo->getPosicao() << " ";
            for (const auto& torre : torres) {
                if (std::abs(torre->getPosicao() - inimigo->getPosicao()) <= torre->getAlcance()) {
                    torre->atacar();
                    inimigo->receberDano(torre->getAtaque());
                }
            }
        }

        // Exibe o estado dos inimigos (posição e vida)
        std::cout << "\nEstado dos inimigos:\n";
        for (const auto& inimigo : inimigos) {
            std::cout << "Posicao: " << inimigo->getPosicao() << " - Vida: " << inimigo->getVida() << "\n";
        }

        // Condição de parada para a simulação (todos os inimigos mortos)
        bool todosInimigosMortos = true;
        for (const auto& inimigo : inimigos) {
            if (inimigo->getVida() > 0) {
                todosInimigosMortos = false;
                break;
            }
        }
        if (todosInimigosMortos) break;

        // Adiciona um pequeno delay para simulação (1 segundo)
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
