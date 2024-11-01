#include "lista.h"

int menu(){
    int op;
    printf("Escolha uma opcao:\n");
    printf("1 - Empilhar\n");
    printf("2 - Desempilhar\n");
    printf("3 - Mostrar pilha\n");
    printf("0 - Sair\n");
    printf("-> ");
    scanf("%d", &op);
    return op;

}
int main(){
    int op;
    t_lista l;
    inicia_lista(&l);

    do {
        op = menu();
        switch (op){
            case 1:
                printf("Digite o valor para empilhar: ");
                int a;
                scanf ("%d", &a);
                push (a, &l);
                break;
            case 2:
                if (!lista_vazia(&l))
                    printf("%d Foi desempilhado!\n", pop(&l));
                else
                    printf ("Pilha esta vazia\n");
                break;
            case 3:
                exibe_lista(&l, "Pilha:");
                break;
            case 0:
                printf("Vlw, quem voltar eh viado!");
                break;
            default:
                printf("Opção invalida, tenta de novo otario!");
                break;
        }
    } while (op != 0);
}