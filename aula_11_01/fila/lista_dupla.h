#include "no_duplo.h"

typedef struct {
    t_no_duplo * primeiro;
    t_no_duplo * ultimo;
    int n_nos;
} t_lista_dupla;

void inicia_lista (t_lista_dupla *);
int lista_vazia (t_lista_dupla *);

void enfileira (int, t_lista_dupla *); //insere fim
void exibir_lista (t_lista_dupla *, char *);
void exibir_primeiro(t_lista_dupla *);
void exibir_ultimo(t_lista_dupla *);
int desenfileira (t_lista_dupla *); //remove inicio

