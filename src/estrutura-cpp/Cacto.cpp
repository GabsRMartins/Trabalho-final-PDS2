#include "../../include/estrutura-hpp/Cacto.hpp"
#include "iostream"

Cacto::Cacto(int x, int y)
    : Estrutura("Cacto", x, y) {}

 void Cacto::print(){

    std::cout << "🌵";
 }