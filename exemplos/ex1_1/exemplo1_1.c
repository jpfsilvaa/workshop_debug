#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b) {
    int *temp = a; 
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    printf("Antes da troca: x = %d, y = %d\n", x, y);
    troca(&x, &y);
    printf("Após a troca: x = %d, y = %d\n", x, y);

    return 0;
}
