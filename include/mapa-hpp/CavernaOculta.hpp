#ifndef CAVERNAOCULTA_HPP
#define CAVERNAOCULTA_HPP

// Inclui as definições necessárias para a implementação da classe CavernaOculta
#include "../torre-hpp/Torre.hpp"
#include "../inimigo-hpp/Inimigo.hpp"
#include "../estrutura-hpp/Estrutura.hpp"
#include "../simulador-hpp/Simulador.hpp"
#include "../mapa-hpp/Mapa.hpp"

// Declaração da classe CavernaOculta que herda de Mapa
class CavernaOculta : public Mapa {

public:
    // Construtor da classe CavernaOculta que inicializa a altura e largura do mapa
    CavernaOculta(int altura, int largura);

    // Método que monta o mapa da Caverna Oculta no simulador
    void MontaMapa(Simulador& simulador) override;
};

#endif // Finaliza a definição de CAVERNAOCULTA_HPP para evitar inclusões múltiplas
