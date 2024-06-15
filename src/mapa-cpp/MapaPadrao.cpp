#include "../../include/estrutura-hpp/Arvore.hpp"
#include "../../include/estrutura-hpp/Parede.hpp"
#include "../../include/simulador-hpp/Simulador.hpp"
#include "../../include/mapa-hpp/MapaPadrao.hpp" 
#include "../../include/torre-hpp/TorreDeFogo.hpp"
#include "../../include/inimigo-hpp/Esqueleto.hpp"
 
 using std::make_unique;

  
  MapaPadrao::MapaPadrao(int altura, int largura) : Mapa(altura,largura) {

}


 void MapaPadrao::MontaMapa(Simulador& simulador)
 {

  for (int y = 0; y <m_altura; ++y) {
            for (int x = 0; x < m_largura; ++x) {
                if (x % 2 != 0) { // Somente colunas impares
                    if (y % 2 == 0) {
                        simulador.adicionarEstrutura(std::make_unique<Arvore>(y, x));
                    } else {
                        simulador.adicionarEstrutura(std::make_unique<Parede>(y, x));
                    }
                }
            }
        }
  }


void MapaPadrao:: adicionarMapa(Simulador& simulador){
    MapaPadrao mapa(10,10);
    MontaMapa(simulador);

    simulador.adicionarTorre(make_unique<TorreDeFogo>(5,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(6,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(0,1));

    simulador.adicionarInimigo(make_unique<Esqueleto>(0,0));
    simulador.adicionarInimigo(make_unique<Esqueleto>(2,0)); 
    simulador.adicionarInimigo(make_unique<Esqueleto>(4,2)); 
    simulador.adicionarInimigo(make_unique<Esqueleto>(2,2));  
};