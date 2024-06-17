#include "../../include/estrutura-hpp/Teia.hpp"
#include "../../include/estrutura-hpp/Lapide.hpp"
#include "../../include/estrutura-hpp/Slot.hpp"
#include "../../include/simulador-hpp/Simulador.hpp"
#include "../../include/torre-hpp/TorreDeFogo.hpp"
#include "../../include/inimigo-hpp/Esqueleto.hpp"
#include "../../include/inimigo-hpp/Zumbi.hpp"
#include "../../include/mapa-hpp/Cemiterio.hpp" 
#include "iostream"
 
using std::make_unique;
using std::cout;
 using std::cin;
  
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


  adicionarTorreMapa(simulador);
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


void Cemiterio:: adicionarTorreMapa(Simulador& simulador){
    simulador.adicionarEstrutura(make_unique<Slot>(6,1));
    simulador.adicionarEstrutura(make_unique<Slot>(7,1));
    simulador.adicionarEstrutura(make_unique<Slot>(8,1));
    simulador.adicionarEstrutura(make_unique<Slot>(9,1));
    simulador.printaMapa();
    cout << "Escolha qual slot você deseja colocar a torre";
    int opcao;
    cin >> opcao;

        switch (opcao) 
    {
        case 1:
        {

    simulador.adicionarTorre(make_unique<TorreDeFogo>(6,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(7,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(8,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(9,1));


    simulador.adicionarInimigo(make_unique<Esqueleto>(0,0));
    simulador.adicionarInimigo(make_unique<Esqueleto>(4,0));
        }
 }

};


Cemiterio::~Cemiterio(){
    cout<<" Cemiterio Destruido";

}

void Cemiterio::adicionarHorda(Simulador& simulador){

    simulador.adicionarInimigo(make_unique<Zumbi>(0,0));
    simulador.adicionarInimigo(make_unique<Zumbi>(4,0));
    simulador.adicionarInimigo(make_unique<Zumbi>(4,2));
    simulador.adicionarInimigo(make_unique<Zumbi>(4,4));
    simulador.adicionarInimigo(make_unique<Zumbi>(0,2));

}
