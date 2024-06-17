#include "../../include/estrutura-hpp/Arvore.hpp"
#include "../../include/estrutura-hpp/Parede.hpp"
#include "../../include/estrutura-hpp/Slot.hpp"
#include "../../include/simulador-hpp/Simulador.hpp"
#include "../../include/mapa-hpp/MapaPadrao.hpp" 
#include "../../include/torre-hpp/TorreDeFogo.hpp"
#include "../../include/torre-hpp/TorreDeEletricidade.hpp"
#include "../../include/inimigo-hpp/Esqueleto.hpp"
#include "iostream"

 
 using std::make_unique;
 using std::cout;
 using std::endl;
 using std::cin;

  
  MapaPadrao::MapaPadrao(int altura, int largura) : Mapa(altura,largura) {

}


 void MapaPadrao::MontaMapa(Simulador& simulador)
 {

  for (int y = 0; y <m_altura; ++y) {
            for (int x = 0; x < m_largura; ++x) {
                if (x % 2 != 0) { // Somente colunas impares
                    if (y % 2 == 0) {
                        simulador.adicionarEstrutura(make_unique<Arvore>(y, x));
                    } else {
                        simulador.adicionarEstrutura(make_unique<Parede>(y, x));
                    }
                }
            }
        }

      adicionarTorreMapa(simulador);
  }


void MapaPadrao::adicionarMapa(Simulador& simulador){
    MontaMapa(simulador);
    simulador.adicionarTorre(make_unique<TorreDeFogo>(6,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(7,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(8,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(9,1));
    simulador.adicionarInimigo(make_unique<Esqueleto>(0,0));
    simulador.adicionarInimigo(make_unique<Esqueleto>(4,0));

};


void MapaPadrao::adicionarHorda(Simulador& simulador){

    simulador.adicionarInimigo(make_unique<Esqueleto>(0,0));
    simulador.adicionarInimigo(make_unique<Esqueleto>(4,0));
    simulador.adicionarInimigo(make_unique<Esqueleto>(4,2));
    simulador.adicionarInimigo(make_unique<Esqueleto>(4,4));
    simulador.adicionarInimigo(make_unique<Esqueleto>(0,2));

}






void MapaPadrao::adicionarTorreMapa(Simulador& simulador){
    simulador.adicionarEstrutura(make_unique<Slot>(6,1));
    simulador.adicionarEstrutura(make_unique<Slot>(7,3));
    simulador.adicionarEstrutura(make_unique<Slot>(8,1));
    simulador.adicionarEstrutura(make_unique<Slot>(9,3));
    simulador.adicionarEstrutura(make_unique<Slot>(8,5));
    simulador.adicionarEstrutura(make_unique<Slot>(9,7));
    simulador.printaMapa();
    int escolha = 4 ;
    do {
    cout << "Você tem " << escolha <<  " torrês disponiveís" << endl;
    cout << "Escolha qual coluna  você deseja colocar a torre" << endl;
    int opcao;
    cin >> opcao;

        switch (opcao) 
    {
        case 1:
        {
        simulador.adicionarTorre(make_unique<TorreDeFogo>(6,1));
        simulador.adicionarTorre(make_unique<TorreDeEletricidade>(7,1));
        escolha--;
        break;
        }
        case 2:
        {
        simulador.adicionarTorre(make_unique<TorreDeEletricidade>(6,3));
        simulador.adicionarTorre(make_unique<TorreDeFogo>(9,3));
        escolha--;
        break;
        }
         case 3:
        {
        escolha--;
        break;
        }
 }
    }
    while (escolha > 0);
    adicionarHorda(simulador);
};
