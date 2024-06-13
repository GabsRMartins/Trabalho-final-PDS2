#include "../../include/mapa-hpp/Mapa.hpp"
#include "../../include/entidade-hpp/Entidade.hpp"
#include "../../include/estrutura-hpp/Estrutura.hpp"
#include "../../include/inimigo-hpp/Inimigo.hpp"
#include <thread> // Biblioteca para trabalhar com threads
#include <chrono> // Biblioteca para trabalhar com tempo
#include <vector>
// Aqui temos duas bibliotecas importantes:
// - <thread>: Permite criar e gerenciar threads (processos paralelos).
// - <chrono>: Fornece funções para medir o tempo e criar pausas.
#include <cmath> // Para std::abs

using std::vector;
using std::unique_ptr;
using std::move;
using std::cout;




Mapa::Mapa(int altura, int largura) : m_altura(altura), m_largura(largura) {

}
