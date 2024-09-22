#include <stdlib.h>
#include <stdio.h>
#define MAX 100

int soma(int *x, int i) {
    int valor = 0;
    for (int j = 0; j < i; j++) {
        valor += x[j];
    }
    return valor;
}

void imprime(int *x, int i) {
    for (int j = 0; j < i; j++) {
        printf("%d ", x[j]);
    }
    printf("\n");
}

int main() {
    int *x = malloc(MAX * sizeof(int));
    imprime(x, MAX);
    printf("O valor da soma do vetor é %d\n", soma(x, MAX));
    free(x);
    return 0;
}