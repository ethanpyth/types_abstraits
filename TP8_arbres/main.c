#include "arbreBinaire.c"

void main(){
    sommet racine = creerArbreBinaire('D');
    ajouterFilsDroit(racine, 'e');
    ajouterFilsGauche(racine, 'a');
    //supprimerFilsDroit(racine);
    ajouterFilsDroit(racine->droit, 'f');
    ajouterFilsGauche(racine->droit, 'm');


    printf("racine : %c\n", racine->info);
    printf("fils droit de la racine : %c\n", racine->droit->info);
    printf("fils gauche de la racine :%c\n", racine->gauche->info);
    printf("fils droit du fils droit : %c\n", filsDroit(racine->droit)->info);
    printf("fils gauche du fils droit : %c\n", filsGauche(racine->droit)->info);
}
