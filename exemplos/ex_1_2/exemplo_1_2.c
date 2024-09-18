#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b) {
    int *temp = a;  // Erro semântico: salvando o ponteiro, não o valor
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    printf("Antes da troca: x = %d, y = %d\n", x, y);
    
    troca(&x, &y);  // Chamando a função para trocar os valores
    
    printf("Após a troca: x = %d, y = %d\n", x, y);

    return 0;
}
