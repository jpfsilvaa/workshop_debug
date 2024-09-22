#ifndef FILA_H
#define FILA_H

typedef struct Fila *p_fila;
typedef struct No *p_no;

struct No {
    int valor;
    p_no prox;
};

struct Fila {
    p_no inicio;
    int valor;
    p_no fim;
};


p_fila cria_fila();

void enfileira(p_fila f, int valor);

int desenfileira(p_fila f);

void imprime_fila(p_fila f);

void destroi_fila(p_fila f);

#endif