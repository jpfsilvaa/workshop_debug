#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

p_no cria_no(int valor) {
    p_no novo = malloc(sizeof(struct Node));
    novo->valor = valor;
    novo->prox = NULL;
    return novo;
}

p_no insere_no(p_no lista, int valor) {
    p_no novo = cria_no(valor);
    novo->prox = lista;
    return novo;
}

p_no remove_no(p_no lista, int valor) {
    p_no atual = lista;
    p_no anterior = NULL;
    while (atual != NULL && atual->valor != valor) {
        anterior = atual;
        atual = atual->prox;
    }
    if (atual == NULL) {
        return lista;
    }
    if (anterior == NULL) {
        lista = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }
    return lista;
}

void imprime_lista(p_no lista) {
    p_no atual = lista;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}

void libera_lista(p_no lista) {
    p_no atual = lista;
    while (atual != NULL) {
        p_no temp = atual;
        atual = atual->prox;
        free(temp);
    }
}