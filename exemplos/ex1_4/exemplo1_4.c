#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

int main() {
    int valor_desenf = 0;
    p_fila f = cria_fila(0);
    enfileira(f, 1);
    enfileira(f, 2);
    enfileira(f, 3);
    enfileira(f, 4);
    enfileira(f, 5);

    imprime_fila(f);
    
    valor_desenf = desenfileira(f);
    printf("Valor desenfileirado: %d\n", valor_desenf);
    
    valor_desenf = desenfileira(f);
    printf("Valor desenfileirado: %d\n", valor_desenf);
    
    imprime_fila(f);
    
    enfileira(f, 6);
    
    imprime_fila(f);
    destroi_fila(f);
    return 0;
}