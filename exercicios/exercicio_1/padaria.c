#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct Caixa *p_caixa;

struct Caixa{
    int notas2;
    int notas5;
    int notas10;
    int moedas5;
    int moedas10;
    int moedas25;
    int moedas50;
};

p_caixa inicializaCaixa() {
    int n2, n5, n10, m5, m10, m25, m50 = 0;
    scanf("%d %d %d %d %d %d %d", &n2, &n5, &n10, &m5, &m10, &m25, &m50);

    p_caixa caixa = malloc(sizeof(struct Caixa));
    caixa->notas2 = n2;
    caixa->notas5 = n5;
    caixa->notas10 = n10;
    caixa->moedas5 = m5;
    caixa->moedas10 = m10;
    caixa->moedas25 = m25;
    caixa->moedas50 = m50;
    return caixa;
}

int calculaTroco(p_caixa caixa, double valorTroco) {
    int trocoEmCentavos = (int)(valorTroco * 100);

    while (trocoEmCentavos >= 1000 && caixa->notas10 > 0) {
        trocoEmCentavos -= 1000;
        caixa->notas10--;
    }

    while (trocoEmCentavos >= 500 && caixa->notas5 > 0) {
        trocoEmCentavos -= 500;
        caixa->notas5--;
    }

    while (trocoEmCentavos >= 200 && caixa->notas2 > 0) {
        trocoEmCentavos -= 200;
        caixa->notas2--;
    }

    while (trocoEmCentavos >= 50 && caixa->moedas50 > 0) {
        trocoEmCentavos -= 50;
        caixa->moedas50--;
    }

    while (trocoEmCentavos >= 25 && caixa->moedas25 > 0) {
        trocoEmCentavos -= 25;
        caixa->moedas25--;
    }

    while (trocoEmCentavos >= 10 && caixa->moedas10 > 0) {
        trocoEmCentavos -= 10;
        caixa->moedas10--;
    }

    while (trocoEmCentavos >= 5 && caixa->moedas5 > 0) {
        trocoEmCentavos -= 5;
        caixa->moedas5--;
    }

    if (trocoEmCentavos > 0) {
        printf("Troco insuficiente no caixa.\n");
        return FALSE;
    }

    return TRUE;
}

void realizarVenda(p_caixa caixa, double valorVenda, double valorPago) {
    if (valorPago < valorVenda) {
        printf("Pagamento insuficiente.\n");
        return;
    }

    double troco = valorPago - valorVenda;

    printf("Valor da venda: %.2f\n", valorVenda);
    printf("Valor pago: %.2f\n", valorPago);
    printf("Troco a ser dado: %.2f\n", troco);

    if (!calculaTroco(caixa, troco)) {
        printf("Não foi possível fornecer o troco completo.\n");
    } else {
        printf("Troco dado com sucesso.\n");
    }
    printf("====================================\n");
    printf("Valor em caixa: %.2f\n", 0.02 * caixa->notas2 + 0.05 * caixa->notas5 
                        + 0.10 * caixa->notas10 + 0.05 * caixa->moedas5 
                        + 0.10 * caixa->moedas10 + 0.25 * caixa->moedas25 
                        + 0.50 * caixa->moedas50);
    printf("====================================\n\n");
}

int main() {
    p_caixa caixa = inicializaCaixa();
    double valorVenda, valorPago = 0.0;
    while(scanf("%lf %lf", &valorVenda, &valorPago) != EOF) {
        realizarVenda(caixa, valorVenda, valorPago);
    }
    free(caixa);

    return 0;
}
