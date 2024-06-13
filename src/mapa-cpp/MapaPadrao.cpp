#include "../../include/estrutura-hpp/Arvore.hpp"
#include "../../include/estrutura-hpp/Parede.hpp"
 #include "../../include/simulador-hpp/Simulador.hpp"
 #include "../../include/mapa-hpp/MapaPadrao.hpp" 
 
 using std::make_unique;

  
  MapaPadrao::MapaPadrao(int altura, int largura) : Mapa(altura,largura) {

}


 void MapaPadrao::MontaMapa(Simulador& simulador){

    simulador.adicionarEstrutura(make_unique<Arvore>(1,1));
    simulador.adicionarEstrutura(make_unique<Arvore>(2,1));
    simulador.adicionarEstrutura(make_unique<Parede>(3,1));
    simulador.adicionarEstrutura(make_unique<Arvore>(4,1));
    simulador.adicionarEstrutura(make_unique<Parede>(7,1));
    simulador.adicionarEstrutura(make_unique<Parede>(8,1));
    simulador.adicionarEstrutura(make_unique<Parede>(9,1));
    simulador.adicionarEstrutura(make_unique<Arvore>(1,3));
    simulador.adicionarEstrutura(make_unique<Arvore>(1,5));
  }