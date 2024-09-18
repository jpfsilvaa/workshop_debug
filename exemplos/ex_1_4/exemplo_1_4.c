#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* criar_nodo(int valor) {
    Node *nodo = malloc(sizeof(Node));
    if (nodo == NULL) {
        fprintf(stderr, "Erro ao alocar memória.\n");
        exit(1);
    }
    nodo->data = valor;
    nodo->next = NULL;
    return nodo;
}

void adicionar_no_final(Node **head, int valor) {
    Node *nodo_novo = criar_nodo(valor);
    if (*head == NULL) {
        *head = nodo_novo;  // Erro: não aloca corretamente o novo nó
        return;
    }

    Node *atual = *head;
    while (atual->next != NULL) {
        atual = atual->next;
    }
    atual->next = nodo_novo;
}

void liberar_lista(Node *head) {
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

void imprimir_lista(Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node *lista = NULL;

    adicionar_no_final(&lista, 1);
    adicionar_no_final(&lista, 2);
    adicionar_no_final(&lista, 3);
    
    imprimir_lista(lista);

    liberar_lista(lista);
    
    // Tentativa de acessar a lista após liberar memória
    imprimir_lista(lista);  // Causa Segmentation Fault

    return 0;
}
