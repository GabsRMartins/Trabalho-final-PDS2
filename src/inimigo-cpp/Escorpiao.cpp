#include "../../include/inimigo-hpp/Escorpiao.hpp"
#include "iostream"
#include <string>
using std::string;

Escorpiao::Escorpiao(int x, int y)
    : Inimigo("Escorpiao", x, y, 35) {}

 void Escorpiao::print(){

    std::cout << "🦂";
 }

