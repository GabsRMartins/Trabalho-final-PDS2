#include "../../include/estrutura-hpp/Parede.hpp"
#include "iostream"

Parede::Parede(int x, int y)
    : Estrutura("Parede", x, y) {}

 void Parede::print(){

    std::cout << "🧱";
 }