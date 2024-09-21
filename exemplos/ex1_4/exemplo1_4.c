#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

int main() {
    p_fila f = cria_fila(0);
    f = enfileira(f, 1);
    f = enfileira(f, 2);
    f = enfileira(f, 3);
    f = enfileira(f, 4);
    // f = enfileira(f, 5);
    // imprime_fila(f);
    // f = desenfileira(f);
    // f = desenfileira(f);
    // f = desenfileira(f);
    // f = desenfileira(f);
    // f = desenfileira(f);
    // imprime_fila(f);
    // f = enfileira(f, 6);
    // imprime_fila(f);
    destroi_fila(f);
    return 0;
}