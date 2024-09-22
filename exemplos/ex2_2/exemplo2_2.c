#include <stdio.h>
#include <stdlib.h>

void imprime(int *x, int i) {
    for (int j = 0; j < i; j++) {
        printf("%d ", x[j]);
    }
    printf("\n");
}

int main() {
    int tamanho = 5;
    int *vetor = malloc(tamanho * sizeof(int));
    int x = 0;
    int i;

    for (i = 0; i < tamanho; i++) {
        vetor[i] = i * 2;
        x += vetor[i];
    }

    imprime(vetor, tamanho);
    printf("O valor da soma do vetor é %d\n\n", x);
    x = 0;

    for (i = 0; i < tamanho; i++) {
        vetor[i + 1] = vetor[i] + 1;
        x += vetor[i + 1];
    }

    imprime(vetor, tamanho);
    printf("O valor da soma do vetor é %d\n", x);

    free(vetor);
    return 0;
}
