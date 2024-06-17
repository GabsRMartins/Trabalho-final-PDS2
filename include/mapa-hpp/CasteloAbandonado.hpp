#ifndef CASTELOABANDONADO_HPP
#define CASTELOABANDONADO_HPP

// Inclui as definições necessárias para a implementação da classe CasteloAbandonado
#include "../torre-hpp/Torre.hpp"
#include "../inimigo-hpp/Inimigo.hpp"
#include "../estrutura-hpp/Estrutura.hpp"
#include "../simulador-hpp/Simulador.hpp"
#include "../mapa-hpp/Mapa.hpp"

// Declaração da classe CasteloAbandonado que herda de Mapa
class CasteloAbandonado : public Mapa {

public:
    // Construtor da classe CasteloAbandonado que inicializa a altura e largura do mapa
    CasteloAbandonado(int altura, int largura);

    // Método que monta o mapa do Castelo Abandonado no simulador
    void MontaMapa(Simulador& simulador) override;
};

#endif // Finaliza a definição de CASTELOABANDONADO_HPP para evitar inclusões múltiplas
