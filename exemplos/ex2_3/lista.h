#ifndef LISTA_H
#define LISTA_H

typedef struct Node *p_no;

struct Node {
    int valor;
    p_no prox;
};

p_no cria_no(int valor);

p_no insere_no(p_no lista, int valor);

void imprime_lista(p_no lista);

p_no remove_no(p_no lista, int valor);

void libera_lista(p_no lista);

#endif