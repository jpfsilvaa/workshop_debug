#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main() {
    p_pilha p = inicializaPilha();
    char palavra[55];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    for (int i = 0; i < strlen(palavra); i++) {
        p = pushPilha(palavra[i]);
    }
    printPilha(&p);
    freePilha(&p);
    return 0;
}