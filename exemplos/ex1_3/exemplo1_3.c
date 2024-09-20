#include <stdio.h>

int busca_binaria(int arr[], int tamanho, int valor) {
    int inicio = 0;
    int fim = tamanho - 1;
    
    while (inicio < fim) {
        int meio = (inicio + fim) / 2;

        if (arr[meio] == valor) {
            return meio;
        } else if (arr[meio] > valor) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    return -1;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = 5;
    int valor = 5;

    int posicao = busca_binaria(numeros, tamanho, valor);
    if (posicao == -1) {
        printf("O valor %d não foi encontrado\n", valor);
    } else {
        printf("O valor %d foi encontrado na posição %d\n", valor, posicao);
    }

    return 0;
}