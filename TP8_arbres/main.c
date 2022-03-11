#include "arbreBinaire.c"

void main(){
    sommet racine = creerArbreBinaire('D');
    ajouterFilsDroit(racine, 'e');
    ajouterFilsGauche(racine, 'a');

    printf("%c\n", racine->info);
    printf("%c\n", racine->droit->info);
    printf("%c\n", racine->gauche->info);
    printf("%c\n", filsDroit(racine)->info);
    printf("%c\n", filsGauche(racine)->info);
}
