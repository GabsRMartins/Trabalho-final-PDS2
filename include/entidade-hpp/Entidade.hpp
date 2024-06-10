#ifndef ENTIDADE
#define ENTIDADE


class Entidade {
public:
    virtual ~Entidade() = default;
   virtual void print() = 0;
};

#endif