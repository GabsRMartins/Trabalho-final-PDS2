#include "../../include/inimigo-hpp/Mumia.hpp"  // Inclui o cabeçalho da classe Mumia
#include <iostream>  // Biblioteca para entrada/saída padrão (ex.: std::cout)
#include <ctime>  // Biblioteca para manipulação de tempo 

// Construtor da classe Mumia que inicializa a posição X e Y e define a vida da múmia, chamando o construtor da classe base Inimigo
Mumia::Mumia(int x, int y)
    : Inimigo("Mumia", x, y, 75) {}

// Método sobrescrito da classe base para imprimir a múmia
void Mumia::print() {
    std::cout << "🤕🧻";  // Imprime os emojis escolhidos para representar uma múmia
}
