#include "lista_dupla.h"

void separa_filas(t_lista_dupla *l, t_lista_dupla *lp, t_lista_dupla *li){
      
      
    if (lista_vazia(l)) {
        printf ("fila vazia!");
    }
    else {
        int i = desenfileira(l);
        if(i % 2)
        enfileira(i, li);
        else 
        enfileira(i,lp);
    }
    }

int main(){
    t_lista_dupla l, l_par, l_impar;
    inicia_lista(&l);
    inicia_lista(&l_par);
    inicia_lista(&l_impar);
    for (int i = 1; i<=10;i++) 
    enfileira(i,&l);
    separa_filas(&l, &l_par, &l_impar);
    exibir_lista(&l_par, "Fila dos pares");
    exibir_lista(&l_impar,"Fila dos impares");
}