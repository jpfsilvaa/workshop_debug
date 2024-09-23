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
    p->tamanho++;
}

void popPilha(p_pilha p) {
    if (p->topo == NULL) {
        return;
    }
    p_no aux = p->topo;
    p->topo = p->topo->prox;
    free(aux->palavra);
}

void freePilha(p_pilha p) {
    p_no aux = p->topo;
    while (aux != NULL) {
        p_no temp = aux;
        aux = aux->prox;
        free(temp->palavra);        
    }
    free(p);
}

void printPilha(p_pilha p) {
    p_no aux = p->topo;
    int i = 0;
    printf("PILHA ATUAL:\n");
    while (i <= p->tamanho) {
        printf("%s\n", aux->palavra);
        aux = aux->prox;
        i++;
    }
    printf("\n");
}