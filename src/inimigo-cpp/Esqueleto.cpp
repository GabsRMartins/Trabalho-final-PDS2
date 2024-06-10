#include "../../include/inimigo-hpp/Esqueleto.hpp"
#include "iostream"

Esqueleto::Esqueleto(int x, int y)
    : Inimigo("Esqueleto", x, y, 50) {}

 void Esqueleto::print(){

    std::cout << "Esqueleto";
 }