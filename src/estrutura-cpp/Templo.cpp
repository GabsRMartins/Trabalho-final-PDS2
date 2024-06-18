#include "../../include/estrutura-hpp/Templo.hpp"
#include "iostream"

Templo::Templo(int x, int y)
    : Estrutura("Templo", x, y) {}

 void Templo::print(){

    std::cout << "  🛕  ";
 }