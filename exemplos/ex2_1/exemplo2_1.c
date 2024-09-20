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

int main() {
    int *x = malloc(MAX * sizeof(int)); 
    printf("O valor é %d\n", soma(x, MAX));
    free(x);
    return 0;
}