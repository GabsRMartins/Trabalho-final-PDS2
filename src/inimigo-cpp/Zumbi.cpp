#include "../../include/inimigo-hpp/Zumbi.hpp"
#include "iostream"

Zumbi::Zumbi(int x, int y)
    : Inimigo("Zumbi", x, y, 50) {}

 void Zumbi::print(){

    std::cout << "🧟";
 }