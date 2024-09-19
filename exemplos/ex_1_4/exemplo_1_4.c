#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* criaLista(int valor) {
    Node *node = malloc(sizeof(Node));
    node->data = valor;
    node->next = NULL;
    return node;
}

void adiciona(Node **head, int valor) {
    Node *node_novo = criaLista(valor);
    if (*head == NULL) {
        *head = node_novo;  // Erro: não aloca corretamente o novo nó
        return;
    }

    Node *atual = *head;
    while (atual->next != NULL) {
        atual = atual->next;
    }
    atual->next = node_novo;
}

void liberaLista(Node *head) {
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

void imprimeLista(Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node *lista = NULL;

    adiciona(&lista, 1);
    adiciona(&lista, 2);
    adiciona(&lista, 3);
    
    imprimeLista(lista);

    liberaLista(lista);
    
    // Tentativa de acessar a lista após liberar memória
    imprimeLista(lista);  // Causa Segmentation Fault

    return 0;
}
