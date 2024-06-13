#ifndef MAPAPADRAO_HPP
#define MAPAPADRAO_HPP

#include "../torre-hpp/Torre.hpp"
#include "../inimigo-hpp/Inimigo.hpp"
#include "../estrutura-hpp/Estrutura.hpp"
#include "../simulador-hpp/Simulador.hpp"
#include "../mapa-hpp/Mapa.hpp"

class MapaPadrao : public Mapa {

public:
    //Tamanho do mapa
    MapaPadrao(int altura, int largura);
    // Adiciona uma torre ao mapa
  
   void  MontaMapa(Simulador& simulador) override;


  

};

#endif
