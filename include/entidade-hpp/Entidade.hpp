#ifndef ENTIDADE  
#define ENTIDADE 

// Declaração da classe Entidade
class Entidade {
public:
    // Destrutor virtual padrão. Isso garante que o destrutor da classe derivada seja chamado corretamente
    virtual ~Entidade() = default;

    // Método virtual puro que deve ser implementado pelas classes derivadas
    // Retorna a posição da entidade
    virtual int getPosicaoX() = 0;
    virtual int getPosicaoY() = 0;
    
    // Imprime as informações da entidade
    virtual void print() = 0;
};

#endif  
