#include <time.h>
#include "lista_dupla.h"

int main (){
    t_lista_dupla ld;
    t_lista_dupla ld1;
    inicia_lista(&ld);
    srand(time(0));
    do {
        if (rand() % 2){
            enfileira (rand() % 10, &ld);
            exibir_lista(&ld, "chegou mais um");
        }
        else{
            if(!lista_vazia(&ld)){
                desenfileira(&ld);
                exibir_lista(&ld, "primeiro foi atendido");
            }
            else {
                printf("nao chegou ninguem\n");
            }
        }
        exibir_primeiro(&ld);
        exibir_ultimo(&ld);
    } while (!lista_vazia(&ld));
    return 0;
}