#include "list_S_C_D.c"

void main(){
    LSCD list = creerListe();

    insereEnTete(list, 'h');
    insereApres(list, 'd');
    insereApres(list, 'e');
    //supprimeApres(list);
    //supprimeEnTete(list);
    
    if(listeVide(list)){
        printf("liste vide\n");
    }else{
        printf("liste pleine\n");
    }
    
    printf("tete : %c\n", list->idHeadCells->v);
    printf("suivant : %c\n", list->idKey->suivant->v);
    printf("taille : %d\n", list->length);
    printf("queue : %c\n", list->idQueueCells->v);
}
