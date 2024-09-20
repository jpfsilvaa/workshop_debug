#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

p_fila cria_fila(int val) {
    p_fila f = malloc(sizeof(struct Fila));
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}