#ifndef MAPAPADRAO_HPP  
#define MAPAPADRAO_HPP  

#include "../torre-hpp/Torre.hpp"  // Inclui o cabeçalho da classe Torre
#include "../inimigo-hpp/Inimigo.hpp"  // Inclui o cabeçalho da classe Inimigo
#include "../estrutura-hpp/Estrutura.hpp"  // Inclui o cabeçalho da classe Estrutura
#include "../simulador-hpp/Simulador.hpp"  // Inclui o cabeçalho da classe Simulador
#include "../mapa-hpp/Mapa.hpp"  // Inclui o cabeçalho da classe Mapa

// Declaração da classe MapaPadrao que herda da classe Mapa
class MapaPadrao : public Mapa {
public:
    // Construtor da classe MapaPadrao que inicializa a altura e largura do mapa
    MapaPadrao(int altura, int largura);

    // Método sobrescrito para montar o mapa no simulador
    void MontaMapa(Simulador& simulador) override;

    // Método sobrescrito para adicionar torres ao mapa no simulador, baseado na dificuldade
    void adicionarTorreMapa(Simulador& simulador, int dificuldade) override;

    // Método sobrescrito para adicionar hordas de inimigos ao mapa no simulador, baseado na dificuldade
    void adicionarHorda(Simulador& simulador, int dificuldade) override;
};

#endif  
