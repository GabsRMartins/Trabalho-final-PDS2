#include "../../include/estrutura-hpp/Templo.hpp" // Inclui a definição da classe Teia
#include "../../include/estrutura-hpp/Cacto.hpp" // Inclui a definição da classe Arvore
#include "../../include/estrutura-hpp/Slot.hpp" // Inclui a definição da classe Arvore
#include "../../include/simulador-hpp/Simulador.hpp" // Inclui a definição da classe Simulador
#include "../../include/mapa-hpp/DesertoMisterioso.hpp" // Inclui a definição da classe DesertoMisterioso
#include "../../include/torre-hpp/TorreDeAgua.hpp" // Inclui a definição da classe DesertoMisterioso
#include "../../include/torre-hpp/TorreDeGelo.hpp" // Inclui a definição da classe DesertoMisterioso
#include "../../include/inimigo-hpp/Mumia.hpp" // Inclui a definição da classe DesertoMisterioso
#include "../../include/inimigo-hpp/Escorpiao.hpp" // Inclui a definição da classe DesertoMisterioso
#include <set>

using std::make_unique; // Usa a função make_unique do namespace std
using std::cout;
using std::cin;
using std::endl;
using std::set;

// Construtor do mapa Deserto Misterioso
DesertoMisterioso::DesertoMisterioso(int altura, int largura) : Mapa(altura, largura) {}

// Método para montar o mapa Deserto Misterioso
void DesertoMisterioso::MontaMapa(Simulador& simulador) {
    // Itera sobre cada linha do mapa
   for (int y = 0; y <m_altura; ++y) {
            for (int x = 0; x < m_largura; ++x) {
                if (x % 2 != 0) { // Somente colunas impares
                    if (y % 2 == 0) {
                        simulador.adicionarEstrutura(make_unique<Cacto>(y, x));
                    } else {
                        simulador.adicionarEstrutura(make_unique<Templo>(y, x));
                    }
                }
            }
        }


}


// Método para adicionar hordas de inimigos ao mapa no simulador, baseado na dificuldade
void DesertoMisterioso::adicionarHorda(Simulador& simulador, int dificuldade){

    switch (dificuldade){
        case 1:{
            simulador.adicionarInimigo(make_unique<Escorpiao>(0,0));
            simulador.adicionarInimigo(make_unique<Escorpiao>(0,2));
            simulador.adicionarInimigo(make_unique<Escorpiao>(0,6));
            simulador.adicionarInimigo(make_unique<Escorpiao>(0,10));
            simulador.adicionarInimigo(make_unique<Escorpiao>(0,4));
            break;}
        case 2:{
            simulador.adicionarInimigo(make_unique<Escorpiao>(0,0));
            simulador.adicionarInimigo(make_unique<Escorpiao>(0,2));
            simulador.adicionarInimigo(make_unique<Escorpiao>(0,4));
            simulador.adicionarInimigo(make_unique<Escorpiao>(0,6));
            simulador.adicionarInimigo(make_unique<Escorpiao>(0,8));

            simulador.adicionarInimigo(make_unique<Mumia>(2,2));
            simulador.adicionarInimigo(make_unique<Mumia>(2,6));
            break;}
        case 3:{
            simulador.adicionarInimigo(make_unique<Escorpiao>(0,0));
            simulador.adicionarInimigo(make_unique<Escorpiao>(0,2));
            simulador.adicionarInimigo(make_unique<Escorpiao>(0,4));
            simulador.adicionarInimigo(make_unique<Escorpiao>(0,6));

            simulador.adicionarInimigo(make_unique<Mumia>(0,2));
            simulador.adicionarInimigo(make_unique<Mumia>(2,2));
            simulador.adicionarInimigo(make_unique<Mumia>(2,2));
            simulador.adicionarInimigo(make_unique<Mumia>(2,6));
            break;}

        }


}

// Método para adicionar torres ao mapa no simulador, baseado na dificuldade
void DesertoMisterioso::adicionarTorreMapa(Simulador& simulador,int dificuldade){
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
    while (escolha > 0) {
    cout << "Você tem " << escolha <<  " torrês disponiveís" << endl;
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
            simulador.adicionarTorre(make_unique<TorreDeAgua>(4,1));
            simulador.adicionarTorre(make_unique<TorreDeGelo>(5,1));
            escolha--;
        break;}
        case 3:
            {
            simulador.adicionarTorre(make_unique<TorreDeAgua>(7,3));
            simulador.adicionarTorre(make_unique<TorreDeGelo>(6,3));;
            escolha--;
            break;
        }
        case 5:{
            simulador.adicionarTorre(make_unique<TorreDeGelo>(4,5));
            simulador.adicionarTorre(make_unique<TorreDeAgua>(3,5));
            escolha--;
            break;
            }
        case 7:
        {
            simulador.adicionarTorre(make_unique<TorreDeAgua>(7,7));
            simulador.adicionarTorre(make_unique<TorreDeGelo>(2,7));
            escolha--;
            break;
        }
        case 9:
        {
            simulador.adicionarTorre(make_unique<TorreDeGelo>(4,9));
            simulador.adicionarTorre(make_unique<TorreDeGelo>(7,9));;
            escolha--;
            break;
        }
        case 11:
        {
            simulador.adicionarTorre(make_unique<TorreDeGelo>(6,11));
            simulador.adicionarTorre(make_unique<TorreDeAgua>(4,11));
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
    
