#include "../../include/inimigo-hpp/Esqueleto.hpp"
#include "iostream"
#include <string>
using std::string;

Esqueleto::Esqueleto(int x, int y)
    : Inimigo("Esqueleto", x, y, 50) {}

 void Esqueleto::print(){

    std::cout << "💀";
 }

string Esqueleto::getTipo(){
    return "Esqueleto";
}