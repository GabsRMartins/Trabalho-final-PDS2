#include "../../include/inimigo-hpp/Vampiro.hpp"
#include "iostream"
#include <string>
using std::string;

Vampiro::Vampiro(int x, int y)
    : Inimigo("Vampiro", x, y, 100) {}

 void Vampiro::print(){

    std::cout << "🧛";
 }

