#include <stdio.h>

int busca_binaria(int arr[], int tamanho, int valor) {
    int inicio = 0;
    int fim = tamanho - 1;
    
    while (inicio < fim) {  // Erro lógico: não inclui o caso de 'inicio == fim'
        int meio = (inicio + fim) / 2;

        if (arr[meio] == valor) {
            return meio;
        } else if (arr[meio] > valor) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    return -1;  // Erro: quando 'inicio == fim' e não encontrou o valor
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int valor = 9;

    int resultado = busca_binaria(arr, tamanho, valor);
    if (resultado != -1) {
        printf("Valor encontrado na posição: %d\n", resultado);
    } else {
        printf("Valor não encontrado\n");
    }

    return 0;
}
