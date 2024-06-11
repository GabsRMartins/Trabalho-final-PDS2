#include "../../include/estrutura-hpp/Arvore.hpp"
#include "iostream"

Arvore::Arvore(int x, int y)
    : Estrutura("Arvore", x, y) {}

 void Arvore::print(){

    std::cout << "🌳";
 }