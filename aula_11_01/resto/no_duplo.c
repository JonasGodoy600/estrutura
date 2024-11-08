#include "no_duplo.h" 
t_no_duplo * constroi_no (int i){
    t_no_duplo * apont_no = (t_no_duplo *) malloc (sizeof(t_no_duplo));
    if (apont_no != NULL){
        apont_no->info = i;
        apont_no->anterior = apont_no->proximo = NULL;
    }
    return apont_no;
}
