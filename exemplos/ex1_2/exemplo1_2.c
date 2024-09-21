#include <stdio.h>
#define MAX 5

float calcular_media(int arr[MAX]) {
    int soma = 0;
    for (int i = 0; i < MAX; i++) {
        soma += arr[i];
    }
    return soma / MAX;
}

int main() {
    int numeros[MAX];

    for (int i = 0; i < MAX; i++)
        scanf("%d", &numeros[i]);

    float media = calcular_media(numeros);
    printf("A média é: %f\n", media);

    return 0;
}