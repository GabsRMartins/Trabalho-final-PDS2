#include "../../include/estrutura-hpp/Teia.hpp"
#include "../../include/estrutura-hpp/Lapide.hpp"
#include "../../include/estrutura-hpp/Slot.hpp"
#include "../../include/simulador-hpp/Simulador.hpp"
#include "../../include/torre-hpp/TorreDeVeneno.hpp"
#include "../../include/torre-hpp/TorreDeFantasmas.hpp"
#include "../../include/inimigo-hpp/Esqueleto.hpp"
#include "../../include/inimigo-hpp/Zumbi.hpp"
#include "../../include/mapa-hpp/Cemiterio.hpp" 
#include "../../include/interface-hpp/Interface.hpp"
#include "iostream"
 
using std::make_unique;
using std::cout;
using std::cin;
using std::endl;
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


void Cemiterio::adicionarTorreMapa(Simulador& simulador,int dificuldade){
    simulador.adicionarEstrutura(make_unique<Slot>(4,1));
    simulador.adicionarEstrutura(make_unique<Slot>(5,1));
    simulador.adicionarEstrutura(make_unique<Slot>(7,3));
    simulador.adicionarEstrutura(make_unique<Slot>(6,3));
    simulador.adicionarEstrutura(make_unique<Slot>(4,5));
    simulador.adicionarEstrutura(make_unique<Slot>(3,5));
    simulador.adicionarEstrutura(make_unique<Slot>(7,7));
    simulador.adicionarEstrutura(make_unique<Slot>(2,7));
    simulador.adicionarEstrutura(make_unique<Slot>(4,9));
    simulador.adicionarEstrutura(make_unique<Slot>(7,9));
    simulador.adicionarEstrutura(make_unique<Slot>(6,11));
    simulador.adicionarEstrutura(make_unique<Slot>(4,11));
    simulador.printaMapa();

    int escolha;
    switch (dificuldade){
        case 1:{
            escolha=5;
            break;
        }
        case 2:{
            escolha=4;
            break;
        }
        case 3:{
            escolha=3;
            break;
        }

    }
    do {
    cout << "Você tem " << escolha <<  " torrês disponiveís" << endl;
    cout << "Escolha qual coluna  você deseja colocar a torre" << endl;
    int opcao;
    cin >> opcao;

        switch (opcao) 
    {
        case 1:
            {
            simulador.adicionarTorre(make_unique<TorreDeFantasmas>(4,1));
            simulador.adicionarTorre(make_unique<TorreDeVeneno>(5,1));
            escolha--;
        break;}
        case 3:
            {
            simulador.adicionarTorre(make_unique<TorreDeFantasmas>(7,3));
            simulador.adicionarTorre(make_unique<TorreDeVeneno>(6,3));;
            escolha--;
            break;
        }
        case 5:{
            simulador.adicionarTorre(make_unique<TorreDeFantasmas>(4,5));
            simulador.adicionarTorre(make_unique<TorreDeFantasmas>(3,5));
            escolha--;
            break;
            }
        case 7:
        {
            simulador.adicionarTorre(make_unique<TorreDeFantasmas>(7,7));
            simulador.adicionarTorre(make_unique<TorreDeVeneno>(2,7));
            escolha--;
            break;
        }
        case 9:
        {
            simulador.adicionarTorre(make_unique<TorreDeVeneno>(4,9));
            simulador.adicionarTorre(make_unique<TorreDeVeneno>(7,9));;
            escolha--;
            break;
        }
        case 11:
        {
            simulador.adicionarTorre(make_unique<TorreDeVeneno>(6,11));
            simulador.adicionarTorre(make_unique<TorreDeFantasmas>(4,11));
            escolha--;
            break;
        }
            default:
                cout << "Opção inválida! Por favor, digite um valor de coluna válido." << endl;
                continue; // Volta para o início do loop para pedir outra entrada válida
        }
 }          
    while (escolha > 0);
    adicionarHorda(simulador, dificuldade);
}




void Cemiterio::adicionarHorda(Simulador& simulador, int dificuldade){

    switch (dificuldade){
        case 1:{
            simulador.adicionarInimigo(make_unique<Esqueleto>(0,0));
            simulador.adicionarInimigo(make_unique<Zumbi>(2,0));
            simulador.adicionarInimigo(make_unique<Esqueleto>(6,0));
            simulador.adicionarInimigo(make_unique<Zumbi>(10,0));
            simulador.adicionarInimigo(make_unique<Esqueleto>(4,0));
            break;}
        case 2:{
            simulador.adicionarInimigo(make_unique<Esqueleto>(0,0));
            simulador.adicionarInimigo(make_unique<Zumbi>(2,0));
            simulador.adicionarInimigo(make_unique<Esqueleto>(4,0));
            simulador.adicionarInimigo(make_unique<Zumbi>(6,0));
            simulador.adicionarInimigo(make_unique<Esqueleto>(8,0));

            simulador.adicionarInimigo(make_unique<Zumbi>(2,2));
            simulador.adicionarInimigo(make_unique<Zumbi>(6,2));
            break;}
        case 3:{
            simulador.adicionarInimigo(make_unique<Esqueleto>(0,0));
            simulador.adicionarInimigo(make_unique<Esqueleto>(2,0));
            simulador.adicionarInimigo(make_unique<Esqueleto>(4,0));
            simulador.adicionarInimigo(make_unique<Esqueleto>(6,0));

            simulador.adicionarInimigo(make_unique<Zumbi>(0,2));
            simulador.adicionarInimigo(make_unique<Zumbi>(2,4));
            simulador.adicionarInimigo(make_unique<Zumbi>(2,2));
            simulador.adicionarInimigo(make_unique<Zumbi>(6,2));
            break;}

        }


}