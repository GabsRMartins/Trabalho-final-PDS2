#include "../../include/estrutura-hpp/Teia.hpp" // Inclui a definição da classe Teia
#include "../../include/estrutura-hpp/Arvore.hpp" // Inclui a definição da classe Arvore
#include "../../include/simulador-hpp/Simulador.hpp" // Inclui a definição da classe Simulador
#include "../../include/mapa-hpp/DesertoMisterioso.hpp" // Inclui a definição da classe DesertoMisterioso

using std::make_unique; // Usa a função make_unique do namespace std

// Construtor do mapa Deserto Misterioso
DesertoMisterioso::DesertoMisterioso(int altura, int largura) : Mapa(altura, largura) {}

// Método para montar o mapa Deserto Misterioso
void DesertoMisterioso::MontaMapa(Simulador& simulador) {
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
                    // Caso contrário, adiciona uma árvore na posição (y, x)
                    simulador.adicionarEstrutura(make_unique<Arvore>(y, x));
                }
            }
        }
    }
}
