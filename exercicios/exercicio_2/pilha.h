typedef struct Pilha *p_pilha;

typedef struct Pilha{ 
    char v[55];
    int tam;
    p_pilha prox;
};
 
p_pilha inicializaPilha();
p_pilha pushPilha(char var);
p_pilha popPilha(p_pilha *p);
void freePilha(p_pilha *p);
void printPilha(p_pilha *p);