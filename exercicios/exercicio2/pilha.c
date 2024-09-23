#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pilha.h"

p_pilha inicializaPilha() {
    p_pilha p = malloc(sizeof(struct Pilha));
    p->topo = NULL;
    return p;
}

void pushPilha(char* palavra, p_pilha p) {
    p_no novo = malloc(sizeof(struct No));
    novo->palavra = malloc(MAX * sizeof(char));
    strcpy(novo->palavra, palavra);
    novo->prox = p->topo;
    p->topo = novo;
}

void popPilha(p_pilha p) {
    if (p->topo == NULL) {
        return;
    }
    p_no aux = p->topo;
    p->topo = p->topo->prox;
    free(aux->palavra);
    free(aux);
}

void freePilha(p_pilha p) {
    p_no aux = p->topo;
    while (aux != NULL) {
        p_no temp = aux;
        aux = aux->prox;
        free(temp->palavra);
        free(temp);
    }
    free(p);
}

void printPilha(p_pilha p) {
    p_no aux = p->topo;
    printf("PILHA ATUAL:\n");
    while (aux != NULL) {
        printf("%s\n", aux->palavra);
        aux = aux->prox;
    }
    printf("\n");
}