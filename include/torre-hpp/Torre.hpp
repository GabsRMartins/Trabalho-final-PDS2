#ifndef TORRE_HPP
#define TORRE_HPP

#include <string>

class Torre {
protected:
    std::string nome; // Nome da torre
    int posicao; // Posição da torre no mapa
    int alcance; // Alcance de ataque da torre
    int ataque; // Valor de ataque da torre

public:
    // Construtor da classe Torre
    Torre(const std::string& nome, int posicao, int alcance, int ataque);

    // Destrutor virtual (pode ser sobrescrito pelas classes derivadas)
    virtual ~Torre() = default;

    // Método virtual puro para atacar (deve ser implementado pelas classes derivadas)
    virtual void atacar() const = 0;

    // Método para obter a posição da torre
    int getPosicao() const;

    // Método para obter o alcance de ataque da torre
    int getAlcance() const;
    
    // Método para atacar
    int getAtaque() const;
};

#endif
