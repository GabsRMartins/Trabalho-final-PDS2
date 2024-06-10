#ifndef TORRE_HPP
#define TORRE_HPP

 #include"../entidade-hpp/Entidade.hpp"
#include <string>

class Torre : public Entidade {
protected:
    std::string nome; // Nome da torre
    int m_positionX; // Posição da torre no mapa
    int m_positionY; // Posição da torre no mapa
    int alcance; // Alcance de ataque da torre
    int ataque; // Valor de ataque da torre

public:
    // Construtor da classe Torre
    Torre(const std::string& nome, int x, int y, int alcance, int ataque);

    // Destrutor virtual (pode ser sobrescrito pelas classes derivadas)
    virtual ~Torre() = default;

    // Método virtual puro para atacar (deve ser implementado pelas classes derivadas)
    virtual void atacar() const = 0;

    // Método para obter a posição da torre
    int getPosicaoX() const;
    int getPosicaoY() const;


    // Método para obter o alcance de ataque da torre
    int getAlcance() const;
    
    // Método para atacar
    int getAtaque() const;

   void print() override;
};

#endif
