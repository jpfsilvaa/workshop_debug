#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho = 5;
    int *vetor = malloc(tamanho * sizeof(int));
    int i;

    for (i = 0; i < tamanho; i++) {
        vetor[i] = i * 2;
    }

    for (i = 0; i < tamanho; i++) {
        vetor[i + 1] = vetor[i] + 1;
    }

    for (i = 0; i < tamanho; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    free(vetor);
    return 0;
}
