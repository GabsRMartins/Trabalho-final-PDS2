#include "../../include/estrutura-hpp/Lapide.hpp"
#include "iostream"

Lapide::Lapide(int x, int y)
    : Estrutura("Lapide", x, y) {}

 void Lapide::print(){

    std::cout << "🪦 ";
 }