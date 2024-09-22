#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

p_fila cria_fila(int val) {
    p_fila f = malloc(sizeof(struct Fila));
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

void enfileira(p_fila f, int valor) {
    p_no novo = malloc(sizeof(struct No));
    novo->valor = valor;
    novo->prox = NULL;
    if (f->inicio == NULL) {
        f->inicio = novo;
    } else {
        f->fim->prox = novo;
        f->fim = novo;
    }
}

int desenfileira(p_fila f) {
    if (f->inicio == NULL) {
        return -1;
    }
    p_no temp = f->inicio;
    int valor = temp->valor;
    free(temp);
    return valor;
}

void imprime_fila(p_fila f) {
    p_no atual = f->inicio;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}

void destroi_fila(p_fila f) {
    p_no atual = f->inicio;
    while (atual != NULL) {
        p_no temp = atual;
        atual = atual->prox;
        free(temp);
    }
    free(f);
}