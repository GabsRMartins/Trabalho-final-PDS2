#include "../../include/inimigo-hpp/Zumbi.hpp"
#include "iostream"
#include <string>
using std::string;

Zumbi::Zumbi(int x, int y)
    : Inimigo("Zumbi", x, y, 80) {}

 void Zumbi::print(){

    std::cout << "🧟";
 }

