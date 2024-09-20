#include <stdio.h>

float calcular_media(int arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return soma / tamanho;
}

int main() {
    int numeros[] = {5, 10, 15, 20, 22, 43, 12, 99, 1, 43, 12, 62, 11};
    int tamanho = 5;

    float media = calcular_media(numeros, tamanho);
    printf("A média é: %f\n", media);

    return 0;
}