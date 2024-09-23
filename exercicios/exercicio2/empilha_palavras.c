#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main() {
    p_pilha p = inicializaPilha();
    int qtdComandos = 0;
    char* comando = malloc(MAX * sizeof(char));
    char* palavra = malloc(MAX * sizeof(char));

    scanf("%d", &qtdComandos);
    while (qtdComandos--) {
        scanf("%s", comando);
        if (strcmp(comando, "POP") == 0) {
            popPilha(p);
        } else if (strcmp(comando, "PRINT") == 0) {
            printPilha(p);
        } else if (strcmp(comando, "PUSH") == 0) {
            scanf("%s", palavra);
            pushPilha(palavra, p);
        }
    }
    freePilha(p);
    return 0;
}