#include <time.h>
#include "lista_dupla.h"
int main(){
    t_lista_dupla l;
    srand(time(0));
    inicia_lista(&l);
    do {
        if (rand() % 2 == 0){ //insere
            if (rand() % 2 == 0){ //insere no inicio
                insere_inicio(rand() % 10, &l);
                printf("insercao de inicio \n");
            } 
            else {//insere no final
                insere_fim(rand() % 10, &l);
                printf("insercao de fim \n");

            }
        }
        else{// remove
            if(!lista_vazia(&l)){    
                if(rand() % 2 == 0){ //remove no inicio
                    printf ("%d saiu do inicio \n", remove_inicio(&l));
                }
                else{ // remove no fim
                    printf("%d saiu do final \n", remove_fim(&l));
                }
            }
        }
        exibir_lista (&l, "  ");
    } while(!lista_vazia(&l));
    
    return 0;
}