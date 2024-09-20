#define MAX 100

typedef struct Pilha *p_pilha;

struct Pilha { 
    char palavra[MAX];
    int tam;
    p_pilha prox;
};
 
p_pilha inicializaPilha();

p_pilha pushPilha(char palavra[MAX], p_pilha p);

p_pilha popPilha(p_pilha p);

void freePilha(p_pilha p);

void printPilha(p_pilha p);