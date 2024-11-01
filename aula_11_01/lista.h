#include "no.h"

typedef struct lista {
    t_no * primeiro;
} t_lista;

void inicia_lista (t_lista *);
int lista_vazia (t_lista *);
void push (int, t_lista *);
void exibe_lista (t_lista *, char *);
int pop (t_lista *);
int tamanho_lista (t_lista *);
int soma_valores (t_lista *);