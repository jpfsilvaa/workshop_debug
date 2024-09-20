#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main() {
    p_pilha p = inicializaPilha();
    int qtdComandos = 0;
    char comando[MAX];

    scanf("%d", &qtdComandos);
    while (qtdComandos--) {
        scanf("%s", comando);
        if (strcmp(comando, "POP") == 0) {
            p = popPilha(p);
        } else if (strcmp(comando, "PRINT") == 0) {
            printPilha(p);
        } else if (strcmp(comando, "PUSH") == 0) {
            char palavra[MAX];
            scanf("%s", palavra);
            p = pushPilha(palavra, p);
        }
    }
    freePilha(p);
    return 0;
}