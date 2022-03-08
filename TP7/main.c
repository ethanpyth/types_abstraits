#include "tas.c"

void main(){
    TasMin t;

    creerTas(&t, 'e');
    printf("%c\n", t.arbre[t.s]);
    printf("taille : %d \n", t.taille);
}
