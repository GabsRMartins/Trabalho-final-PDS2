#ifndef DESERTOMISTERIOSO_HPP
#define DESERTOMISTERIOSO_HPP

// Inclui as definições necessárias para a implementação da classe DesertoMisterioso
#include "../torre-hpp/Torre.hpp"
#include "../inimigo-hpp/Inimigo.hpp"
#include "../estrutura-hpp/Estrutura.hpp"
#include "../simulador-hpp/Simulador.hpp"
#include "../mapa-hpp/Mapa.hpp"

// Declaração da classe DesertoMisterioso que herda de Mapa
class DesertoMisterioso : public Mapa {

public:
    // Construtor da classe DesertoMisterioso que inicializa a altura e largura do mapa
    DesertoMisterioso(int altura, int largura);
 
   void MontaMapa(Simulador& simulador) override;
   void  adicionarTorreMapa(Simulador& simulador, int dificuldade) override;
   void  adicionarHorda(Simulador& simulador, int dificuldade) override;

};

#endif // Finaliza a definição de DESERTOMISTERIOSO_HPP para evitar inclusões múltiplas