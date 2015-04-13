#include "lista.h"

/* Testa se lista est� vazia */
bool lista::vazia(){
    return (prim==NULL);
}

/* Insere elemento no in�cio da lista. */
void lista::insere(const int& novo){
    elo *p;
    p = new elo(novo);
    p->prox = prim;
    prim = p;
}

/* Remove da lista o primeiro elemento com valor igual a "novo". Ret. true se removeu. */
bool lista::remove(const int& elem){
    elo *p,
    *ant; /* ponteiro p/
           anterior */
    for(p=prim; ((p!=NULL) && (p->dado!=elem));p=p->prox)
        ant=p;
    if (p==NULL) return false;
    if (p==prim) prim=prim->prox;
    else ant->prox=p->prox;
    delete p;
    return true;
}

/* Ret. o tamanho da lista */
int lista::tamanho() const {
    int tam=0;
    elo *p;
    
    for(p=prim;p!=NULL; p=p->prox)
        tam++;
    return tam;
}

/* Imprime todos os elementos da lista */
void lista::imprime() const {
    elo *p;
    cout << "Elementos da lista" << endl;
    for(p=prim;p!=NULL; p=p->prox)
        cout << p->dado << ' ';
    cout << endl;
}

lista::~lista(){
    elo *p=prim;
    while(prim!=NULL)
    {
        p=prim->prox;
        delete prim;
        prim=p;
    }
}