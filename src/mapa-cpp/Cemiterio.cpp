#include "../../include/estrutura-hpp/Teia.hpp"
#include "../../include/estrutura-hpp/Lapide.hpp"
#include "../../include/simulador-hpp/Simulador.hpp"
#include "../../include/torre-hpp/TorreDeFogo.hpp"
#include "../../include/inimigo-hpp/Esqueleto.hpp"
#include "../../include/mapa-hpp/Cemiterio.hpp" 
#include "iostream"
 
using std::make_unique;
using std::cout;

  
  Cemiterio::Cemiterio(int altura, int largura) : Mapa(altura,largura) {

   cout<<" Cemiterio Criado "<< std::endl;


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

void Cemiterio:: adicionarMapa(Simulador& simulador){
    MontaMapa(simulador);
 
    simulador.adicionarTorre(make_unique<TorreDeFogo>(5,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(6,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(0,1));

    simulador.adicionarInimigo(make_unique<Esqueleto>(0,0));
    simulador.adicionarInimigo(make_unique<Esqueleto>(2,0)); 
    simulador.adicionarInimigo(make_unique<Esqueleto>(4,2)); 
    simulador.adicionarInimigo(make_unique<Esqueleto>(2,2));  
};



Cemiterio::~Cemiterio(){
    cout<<" Cemiterio Destruido";

}