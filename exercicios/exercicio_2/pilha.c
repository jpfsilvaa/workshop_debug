#include <stdlib.h>
#include "pilha.h"

p_pilha inicializaPilha() {
    p_pilha p = malloc(sizeof(struct Pilha));
    p->tam = 0;
    p->prox = NULL;
    return p;
}

p_pilha pushPilha(char var, p_pilha p) {
    p_pilha novo = malloc(sizeof(struct Pilha));
    novo->v[0] = var;
    novo->tam = p->tam + 1;
    novo->prox = p;
    return novo;
}

p_pilha popPilha(p_pilha *p) {
    p_pilha aux = *p;
    *p = aux->prox;
    free(aux);
    return *p;
}

void freePilha(p_pilha *p) {
    while (*p != NULL) {
        *p = popPilha(p);
    }
}

void printPilha(p_pilha *p) {
    p_pilha aux = *p;
    while (aux != NULL) {
        printf("%c", aux->v[0]);
        aux = aux->prox;
    }
    printf("\n");
}