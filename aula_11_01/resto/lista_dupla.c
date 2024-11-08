#include "lista_dupla.h"

void inicia_lista (t_lista_dupla *l){
    l->primeiro = NULL;
    l->ultimo = NULL;
    l->n_nos = 0;
}
int lista_vazia (t_lista_dupla *l){
    return l->primeiro == NULL;
}
void insere_inicio (int i, t_lista_dupla *l){
    t_no_duplo * novo = constroi_no(i);
    if (lista_vazia(l)){
        l->ultimo = novo;
    } else {
        novo->proximo = l->primeiro;
        l->primeiro->anterior = novo;
    }
    l->primeiro = novo;
    l->n_nos++;
}
int insere_fim (int i, t_lista_dupla *l){
    t_no_duplo * novo = constroi_no(i);
    if (novo != NULL) {
        if (lista_vazia(l)) {
            l->primeiro = novo;
    } 
    else {
        novo->anterior = l->ultimo;
        l->ultimo->proximo = novo;
    }
    l->ultimo = novo;
    l->n_nos++;
}
    
}
void exibir_lista (t_lista_dupla *l, char * msg){
    t_no_duplo * aux;
    printf ("\n%s\n", msg);
    if (lista_vazia(l)) {
        printf ("lista vazia!");
    }
    else {
        t_no_duplo * batedor = l->primeiro;
        while (batedor != NULL){ 
            printf ("%d ", batedor->info);
            batedor = batedor->proximo;
        }
    }
    printf ("\n");
}
    int remove_inicio (t_lista_dupla *l) {
        int i = l->primeiro->info; //i é o inteiro que vai ser removido e devolvido 
        t_no_duplo * aux = l->primeiro; // aux é o ponteiro que guarda o endereço que vai ser liberado
        if (l->primeiro == l->ultimo){
            l->primeiro = NULL;
            l->ultimo = NULL;
        }
        else{
            l->primeiro = l->primeiro->proximo;
            l->primeiro->anterior = NULL;

        }
        l->n_nos--;
        free(aux);
        return i;
    }
    
    int remove_fim (t_lista_dupla *l) {
        int i = l->ultimo->info; //i é o inteiro que vai ser removido e devolvido 
        t_no_duplo * aux = l->ultimo; // aux é o ponteiro que guarda o endereço que vai ser liberado
        if (l->primeiro == l->ultimo){
            l->primeiro = NULL;
            l->ultimo = NULL;
        }
        else {
            l->ultimo = l->ultimo->anterior;
            l->ultimo->proximo = NULL;
        }
        l->n_nos--;
        free(aux);
        return i;
    }  

