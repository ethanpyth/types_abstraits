#include "list_D_C.c"

int main(){
    LDC h = createList();

    insertInHead(h, 'd');
    insertAfter(h, 'e');
    //insertInHead(h, 'h');
    //insertAfter(h, 'a');
    //insertInQueue(h, 's');
    //printf("taille : %d\n", h->length);
    printf("tete : %c\n", h->idHeadCells->val);
    printf("valeur inséré : %c\n", h->idKey->idNextCells->val);
    printf("queue : %c\n", h->idQueueCells->val);
    
    printf("suivant : %c\n", h->idHeadCells->idNextCells->val);
    return 0;
}