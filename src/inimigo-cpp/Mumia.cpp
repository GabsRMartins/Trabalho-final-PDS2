#include "../../include/inimigo-hpp/Mumia.hpp"
#include <iostream>
#include <ctime>

Mumia::Mumia(int x, int y)
    : Inimigo("Mumia", x, y, 75) {}


 void Mumia::print(){

    std::cout << "🤕🧻";
 }