/* Lista.h */
#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using namespace std;

class lista{
protected:
    struct elo{
        int dado;
        elo * prox;
        elo():prox(NULL){};
        elo(int elem, elo *prox_elem=NULL):
        dado(elem),prox(prox_elem) {}
    };
    elo *prim;  /* ponteiro para primeiro elemento */
public:
    lista():prim(NULL) {};
    virtual ~lista();
    bool vazia();
    virtual void insere(const int& novo);
    virtual bool remove(const int& elem);
    int tamanho() const;
    void imprime() const;
};
#endif