#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pilha.h"

p_pilha inicializaPilha() {
    p_pilha p = malloc(sizeof(struct Pilha));
    p->tam = 0;
    p->prox = NULL;
    return p;
}

p_pilha pushPilha(char palavra[MAX], p_pilha p) {
    p_pilha novo = malloc(sizeof(struct Pilha));
    strcpy(novo->palavra, palavra);
    novo->tam = p->tam + 1;
    novo->prox = p;
    return novo;
}

p_pilha popPilha(p_pilha p) {
    p_pilha aux = p;
    p = aux->prox;
    free(aux);
    return p;
}

void freePilha(p_pilha p) {
    while (p != NULL) {
        p = popPilha(p);
    }
}

void printPilha(p_pilha p) {
    p_pilha aux = p;
    printf("PILHA ATUAL:\n");
    while (aux != NULL) {
        printf("%s\n", aux->palavra);
        aux = aux->prox;
    }
    printf("\n");
}