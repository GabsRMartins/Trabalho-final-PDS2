#include "../../include/mapa-hpp/Mapa.hpp"  // Inclui o cabeçalho da classe Mapa
#include "../../include/entidade-hpp/Entidade.hpp"  // Inclui o cabeçalho da classe Entidade
#include "../../include/estrutura-hpp/Estrutura.hpp"  // Inclui o cabeçalho da classe Estrutura
#include "../../include/inimigo-hpp/Inimigo.hpp"  // Inclui o cabeçalho da classe Inimigo
#include <thread>  // Biblioteca para trabalhar com threads
#include <chrono>  // Biblioteca para trabalhar com tempo
#include <vector>  // Biblioteca para trabalhar com vetores (arrays dinâmicos)
#include <string>  // Biblioteca para usar strings

using std::string;  // Usa a classe string do namespace std
#include <cmath>  // Biblioteca para funções matemáticas, como std::abs

using std::vector;
using std::unique_ptr;
using std::move;
using std::cout;

// Construtor da classe Mapa que inicializa a altura e largura do mapa
Mapa::Mapa(int altura, int largura) : m_altura(altura), m_largura(largura) {
}
