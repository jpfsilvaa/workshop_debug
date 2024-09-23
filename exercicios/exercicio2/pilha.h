#define MAX 100

typedef struct Pilha *p_pilha;
typedef struct No *p_no;

struct No {
    char* palavra;
    p_no prox;
};

struct Pilha { 
    p_no topo;
};
 
p_pilha inicializaPilha();

void pushPilha(char* palavra, p_pilha p);

void popPilha(p_pilha p);

void freePilha(p_pilha p);

void printPilha(p_pilha p);