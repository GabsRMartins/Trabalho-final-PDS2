#include "../../include/estrutura-hpp/Arvore.hpp"
#include "../../include/estrutura-hpp/Parede.hpp"
 #include "../../include/simulador-hpp/Simulador.hpp"
 #include "../../include/mapa-hpp/MapaPadrao.hpp" 
 
 using std::make_unique;

  
  MapaPadrao::MapaPadrao(int altura, int largura) : Mapa(altura,largura) {

}


 void MapaPadrao::MontaMapa(Simulador& simulador){

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