#include "lista.h"

void inicia_lista (t_lista *l) {
    l->primeiro = NULL;
}
int lista_vazia (t_lista *l) {
    return (l->primeiro == NULL);
}
void push (int i, t_lista *l) {
    t_no * novo = constroi_no(i);
    if (novo != NULL) {
        if (!lista_vazia (l)) {
            novo->proximo = l->primeiro;
        }
        l->primeiro = novo;
    }
}
void exibe_lista (t_lista *l, char * msg) {
    t_no * aux;
    printf ("\n%s\n", msg);
    if (lista_vazia(l)) {
        printf ("pilha vazia!");
    }
    else {
        aux = l->primeiro;
        while (aux != NULL) { 
            printf ("| %d |->", aux->info);
            aux = aux->proximo;
        }
    }
    printf ("\n");
}

int pop (t_lista *l) {
    int i = l->primeiro->info; //i recebe uma cópia da informação armazenada no primeiro nó
    t_no * aux = l->primeiro; //aux recebe uma cópia do endereço do primeiro nó
    l->primeiro = l->primeiro->proximo;
    free(aux);
    return i;
}

int tamanho_lista (t_lista *l) {
    int cont=0;
    if (!lista_vazia (l)) {
        t_no * aux = l->primeiro;
        while (aux != NULL) {
            cont++;
            aux = aux->proximo;
        }
    } 
    return cont;
}
int soma_valores(t_lista * l) {
    t_no *aux;
    int soma = 0;
    if (!lista_vazia(l)) {
        aux = l->primeiro;
        while (aux != NULL) {
            soma += aux->info;
            aux = aux->proximo;
        }
    }
    return soma;
}