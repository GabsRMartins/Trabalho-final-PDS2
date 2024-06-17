#include "../../include/estrutura-hpp/Teia.hpp" // Inclui a definição da classe Teia
#include "../../include/estrutura-hpp/Lapide.hpp" // Inclui a definição da classe Lapide
#include "../../include/simulador-hpp/Simulador.hpp" // Inclui a definição da classe Simulador
#include "../../include/mapa-hpp/CavernaOculta.hpp" // Inclui a definição da classe CavernaOculta

using std::make_unique; // Usa a função make_unique do namespace std

// Construtor do mapa Caverna Oculta
CavernaOculta::CavernaOculta(int altura, int largura) : Mapa(altura, largura) {}

// Método para montar o mapa Caverna Oculta
void CavernaOculta::MontaMapa(Simulador& simulador) {
    // Itera sobre cada linha do mapa
    for (int y = 0; y < m_altura; ++y) {
        // Itera sobre cada coluna do mapa
        for (int x = 0; x < m_largura; ++x) {
            // Se a coluna for múltipla de 3
            if (x % 3 == 0) {
                // Se a linha for par
                if (y % 2 == 0) {
                    // Adiciona uma teia na posição (y, x)
                    simulador.adicionarEstrutura(make_unique<Teia>(y, x));
                } else {
                    // Caso contrário, adiciona uma lápide na posição (y, x)
                    simulador.adicionarEstrutura(make_unique<Lapide>(y, x));
                }
            }
        }
    }
}
