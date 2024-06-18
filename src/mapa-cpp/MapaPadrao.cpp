#include "../../include/estrutura-hpp/Arvore.hpp"
#include "../../include/estrutura-hpp/Parede.hpp"
#include "../../include/estrutura-hpp/Slot.hpp"
#include "../../include/simulador-hpp/Simulador.hpp"
#include "../../include/mapa-hpp/MapaPadrao.hpp" 
#include "../../include/torre-hpp/TorreDeFogo.hpp"
#include "../../include/torre-hpp/TorreDeEletricidade.hpp"
#include "../../include/inimigo-hpp/Vampiro.hpp"
#include "../../include/inimigo-hpp/Lobisomen.hpp"
#include "iostream"
#include <set>
 
 using std::make_unique;
 using std::cout;
 using std::endl;
 using std::cin;
 using std::set;

  
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

    
  }





void MapaPadrao::adicionarHorda(Simulador& simulador, int dificuldade){

    switch (dificuldade){
        case 1:{
            simulador.adicionarInimigo(make_unique<Vampiro>(0,0));
            simulador.adicionarInimigo(make_unique<Vampiro>(2,0));
            simulador.adicionarInimigo(make_unique<Vampiro>(6,0));
            simulador.adicionarInimigo(make_unique<Vampiro>(10,0));
            simulador.adicionarInimigo(make_unique<Vampiro>(4,0));
            break;}
        case 2:{
            simulador.adicionarInimigo(make_unique<Vampiro>(0,0));
            simulador.adicionarInimigo(make_unique<Vampiro>(2,0));
            simulador.adicionarInimigo(make_unique<Vampiro>(4,0));
            simulador.adicionarInimigo(make_unique<Vampiro>(6,0));
            simulador.adicionarInimigo(make_unique<Vampiro>(8,0));

            simulador.adicionarInimigo(make_unique<Lobisomen>(2,2));
            simulador.adicionarInimigo(make_unique<Lobisomen>(6,2));
            break;}
        case 3:{
            simulador.adicionarInimigo(make_unique<Vampiro>(0,0));
            simulador.adicionarInimigo(make_unique<Vampiro>(2,0));
            simulador.adicionarInimigo(make_unique<Vampiro>(4,0));
            simulador.adicionarInimigo(make_unique<Vampiro>(6,0));

            simulador.adicionarInimigo(make_unique<Lobisomen>(0,2));
            simulador.adicionarInimigo(make_unique<Lobisomen>(2,4));
            simulador.adicionarInimigo(make_unique<Lobisomen>(2,2));
            simulador.adicionarInimigo(make_unique<Lobisomen>(6,2));          
            break;}

        }


}

void MapaPadrao::adicionarTorreMapa(Simulador& simulador,int dificuldade){
    simulador.adicionarEstrutura(make_unique<Slot>(4,1));
    simulador.adicionarEstrutura(make_unique<Slot>(5,1));
    simulador.adicionarEstrutura(make_unique<Slot>(7,3));
    simulador.adicionarEstrutura(make_unique<Slot>(6,3));
    simulador.adicionarEstrutura(make_unique<Slot>(4,5));
    simulador.adicionarEstrutura(make_unique<Slot>(3,5));

    simulador.adicionarEstrutura(make_unique<Slot>(7,7));
    simulador.adicionarEstrutura(make_unique<Slot>(2,7));
    if(dificuldade < 3){
    simulador.adicionarEstrutura(make_unique<Slot>(4,9));
    simulador.adicionarEstrutura(make_unique<Slot>(7,9));
    if(dificuldade < 2){
        
    simulador.adicionarEstrutura(make_unique<Slot>(6,11));
    simulador.adicionarEstrutura(make_unique<Slot>(4,11));
    }
    }
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
       set<int> colunasEscolhidas;
    while (escolha > 0)  {
    cout << "Você tem " << escolha <<  " colunas  disponiveís para alocar as torres" << endl;

    cout << "Digite o número de qual coluna você deseja colocar as torres: " << endl;
    cout << "Os slots em vermelho são os disponíveis para receber as torres. Lembrando que são somente números ímpares!" << endl;
  
    int opcao;
    cin >> opcao;
     if (colunasEscolhidas.find(opcao) != colunasEscolhidas.end()) {
            cout << "Coluna já escolhida! Por favor, escolha outra coluna." << endl;
            continue; // Pede uma nova entrada válida
        }
        switch (opcao) 
    {
        case 1:
            {
            simulador.adicionarTorre(make_unique<TorreDeFogo>(4,1));
            simulador.adicionarTorre(make_unique<TorreDeEletricidade>(5,1));
            escolha--;
        break;}
        case 3:
            {
            simulador.adicionarTorre(make_unique<TorreDeFogo>(7,3));
            simulador.adicionarTorre(make_unique<TorreDeEletricidade>(6,3));;
            escolha--;
            break;
        }
        case 5:{
            simulador.adicionarTorre(make_unique<TorreDeFogo>(4,5));
            simulador.adicionarTorre(make_unique<TorreDeFogo>(3,5));
            escolha--;
            break;
            }
        case 7:
        {
            simulador.adicionarTorre(make_unique<TorreDeFogo>(7,7));
            simulador.adicionarTorre(make_unique<TorreDeEletricidade>(2,7));
            escolha--;
            break;
        }
        case 9:
        {
            simulador.adicionarTorre(make_unique<TorreDeEletricidade>(4,9));
            simulador.adicionarTorre(make_unique<TorreDeEletricidade>(7,9));;
            escolha--;
            break;
        }
        case 11:
        {
            simulador.adicionarTorre(make_unique<TorreDeEletricidade>(6,11));
            simulador.adicionarTorre(make_unique<TorreDeFogo>(4,11));
            escolha--;
            break;
        }
            default:
                cout << "Opção inválida! Por favor, digite um valor de coluna válido." << endl;
                continue; // Volta para o início do loop para pedir outra entrada válida
        }
        colunasEscolhidas.insert(opcao);
 }          
  
    adicionarHorda(simulador, dificuldade);
}
