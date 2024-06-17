#include "../../include/estrutura-hpp/Slot.hpp"
#include "iostream"

Slot::Slot(int x, int y)
    : Estrutura("Slot", x, y) {}

 void Slot::print(){

    std::cout << "⭕";
 }