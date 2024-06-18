#include "../../include/estrutura-hpp/Areia.hpp"
#include "iostream"

Areia::Areia(int x, int y)
    : Estrutura("Areia", x, y) {}

 void Areia::print(){

    std::cout << "🏜️";
 }