#include "tas.c"

void main(){
    TasMin t;

    creerTas(&t, 'd');
    entasser(&t, 'c');
    entasser(&t, 'b');
    entasser(&t, 'a');
    entasser(&t, 'g');
    printf("valeur : %c\n", valeur(&t));
    printf("fils gauche : %c\n", filsG(&t, RACINE));
    printf("fils droit : %c\n", filsD(&t, RACINE));
    

    printf("valeur : %c\n", valeur(&t));
    supprimer(&t);
}
