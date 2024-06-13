#ifndef ENTIDADE
#define ENTIDADE


class Entidade {
public:
    virtual ~Entidade() = default;
    virtual int getPosicaoX()  = 0;
    virtual int getPosicaoY()  = 0;
    virtual void print() = 0;
};

#endif