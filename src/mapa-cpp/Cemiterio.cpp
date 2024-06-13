#include "../../include/estrutura-hpp/Teia.hpp"
#include "../../include/estrutura-hpp/Lapide.hpp"
 #include "../../include/simulador-hpp/Simulador.hpp"
 #include "../../include/mapa-hpp/Cemiterio.hpp" 
 
 using std::make_unique;

  
  Cemiterio::Cemiterio(int altura, int largura) : Mapa(altura,largura) {

}


 void Cemiterio::MontaMapa(Simulador& simulador){

  for (int y = 0; y <m_altura; ++y) {
            for (int x = 0; x < m_largura; ++x) {
                if (x % 2 != 0) { // Somente colunas impares
                    if (y % 2 == 0) {
                        simulador.adicionarEstrutura(make_unique<Teia>(y, x));
                    } else {
                        simulador.adicionarEstrutura(make_unique<Lapide>(y, x));
                    }
                }
            }
        }

   



  }