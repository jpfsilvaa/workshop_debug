#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    p_no lista = cria_no(10);
    lista = insere_no(lista, 20);
    lista = insere_no(lista, 30);
    imprime_lista(lista);

    lista = insere_no(lista, 40);
    lista = remove_no(lista, 20);
    lista = insere_no(lista, 50);
    imprime_lista(lista);

    lista = remove_no(lista, 40);
    lista = insere_no(lista, 60);
    imprime_lista(lista);

    // libera_lista(lista); NAO LIBERAR A MEMORIA PARA VAZAR MEMORIA
    return 0;
}