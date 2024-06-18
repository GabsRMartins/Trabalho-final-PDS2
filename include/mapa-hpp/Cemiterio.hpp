#ifndef Cemiterio_HPP
#define Cemiterio_HPP

#include "../torre-hpp/Torre.hpp"
#include "../inimigo-hpp/Inimigo.hpp"
#include "../estrutura-hpp/Estrutura.hpp"
#include "../simulador-hpp/Simulador.hpp"
#include "../mapa-hpp/Mapa.hpp"

class Cemiterio : public Mapa {

public:
  
    Cemiterio(int altura, int largura);
    void MontaMapa(Simulador& simulador) override;
    void  adicionarTorreMapa(Simulador& simulador, int dificuldade) override;
    void  adicionarHorda(Simulador& simulador,int dificuldade) override;
   

};

#endif
