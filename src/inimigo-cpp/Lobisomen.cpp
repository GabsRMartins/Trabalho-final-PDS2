#include "../../include/inimigo-hpp/Lobisomen.hpp"
#include <iostream>
#include <ctime>

Lobisomen::Lobisomen(int x, int y)
    : Inimigo("Lobisomen", x, y, 75) {}


 void Lobisomen::print(){

    std::cout << "🐺";
 }