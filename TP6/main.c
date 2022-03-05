#include "Pile.c"

void main(){
    Pile h;
    creerPile(&h);
    empile(&h, 'e');
    depile(&h);
    empile(&h, 'h');
    destroyPile(&h);

    if(pileVide(&h)){
        printf("liste vide\n");
    }else{
        printf("liste pleine\n");
        printf("taille : %d\n", h.length);
        printf("tete : %c\n", h.tab[h.length].value);
    }

}
