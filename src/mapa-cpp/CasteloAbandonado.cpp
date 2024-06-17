#include "../../include/estrutura-hpp/Lapide.hpp" // Inclui a definição da classe Lapide
#include "../../include/estrutura-hpp/Parede.hpp" // Inclui a definição da classe Parede
#include "../../include/simulador-hpp/Simulador.hpp" // Inclui a definição da classe Simulador
#include "../../include/mapa-hpp/CasteloAbandonado.hpp" // Inclui a definição da classe CasteloAbandonado

using std::make_unique; // Usa a função make_unique do namespace std

// Construtor do mapa Castelo Abandonado
CasteloAbandonado::CasteloAbandonado(int altura, int largura) : Mapa(altura, largura) {}

// Método para montar o mapa Castelo Abandonado
void CasteloAbandonado::MontaMapa(Simulador& simulador) {
    // Itera sobre cada linha do mapa
    for (int y = 0; y < m_altura; ++y) {
        // Itera sobre cada coluna do mapa
        for (int x = 0; x < m_largura; ++x) {
            // Se a coluna for par
            if (x % 2 == 0) {
                // Se a linha for par
                if (y % 2 == 0) {
                    // Adiciona uma lápide na posição (y, x)
                    simulador.adicionarEstrutura(make_unique<Lapide>(y, x));
                } else {
                    // Caso contrário, adiciona uma parede na posição (y, x)
                    simulador.adicionarEstrutura(make_unique<Parede>(y, x));
                }
            }
        }
    }
}
