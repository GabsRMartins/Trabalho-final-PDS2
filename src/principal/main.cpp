#include "../../include/mapa-hpp/Mapa.hpp"
#include "../../include/torre-hpp/TorreDeFogo.hpp"
#include "../../include/inimigo-hpp/Esqueleto.hpp"
#include "../../include/estrutura-hpp/Arvore.hpp"
#include "../../include/estrutura-hpp/Parede.hpp"
#include "../../include/simulador-hpp/Simulador.hpp"
#include "../../include/mapa-hpp/MapaPadrao.hpp"
#include "../../include/mapa-hpp/Cemiterio.hpp"
#include "../../include/inimigo-hpp/Zumbi.hpp"


#include "iostream"
#include <thread>
#include <chrono>
#include <memory> 

using std::cout;
using std::make_unique;
using std::endl;



void mapaPadrao(Simulador& simulador){
    MapaPadrao mapa(10,10);
    mapa.MontaMapa(simulador);

    simulador.adicionarTorre(make_unique<TorreDeFogo>(5,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(6,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(0,1));

    simulador.adicionarInimigo(make_unique<Esqueleto>(0,0));
    simulador.adicionarInimigo(make_unique<Esqueleto>(2,0)); 
    simulador.adicionarInimigo(make_unique<Esqueleto>(4,2)); 
    simulador.adicionarInimigo(make_unique<Esqueleto>(2,2));  
};

void cemiterio(Simulador& simulador){

    Cemiterio mapa(10,10);
    mapa.MontaMapa(simulador);

    simulador.adicionarTorre(make_unique<TorreDeFogo>(5,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(6,1));
    simulador.adicionarTorre(make_unique<TorreDeFogo>(0,1));

    simulador.adicionarInimigo(make_unique<Zumbi>(0,0));
    simulador.adicionarInimigo(make_unique<Zumbi>(2,0)); 
    simulador.adicionarInimigo(make_unique<Zumbi>(4,2)); 
    simulador.adicionarInimigo(make_unique<Zumbi>(2,2));  


};



int main() {
    Simulador simulador(10,10); 

    cout<<"Bem vindo ao Defense PDS 2"<< endl;
    int opcao;
    cout<<"Escolha o Mapa";
    cout<<" [1] Mapa Padrão || [2] Cemitério"<< endl;
    scanf("%d",&opcao);
    switch (opcao)
    {
    case 1:
        mapaPadrao(simulador);
       break;

   case 2:     
             cemiterio(simulador);
    break;
    default:
            cout << "Opção inválida!" << endl;
            return 1;
    };
    // Inicia a simulação
    simulador.simular();
    return 0;
}
