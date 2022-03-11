#include "arbreBinaire.h"

sommet creerArbreBinaire(objet racine){
    sommet t = (sommet)malloc(sizeof(Sommet));
    if(t){
        t->pere = NULL;
        t->info = racine;
        t->droit = NULL;
        t->gauche = NULL;
        return t;
    }
}

sommet filsGauche(sommet S){
    return S->gauche; 
}

sommet filsDroit(sommet S){
    return S->droit;
}

void ajouterFilsGauche(sommet s, objet o){
    sommet t = (sommet)malloc(sizeof(Sommet));
    if(t){
        t->droit = NULL;
        t->gauche = NULL;
        t->pere = s;
        t->info = o;
        s->gauche = t;
    }
}

void ajouterFilsDroit(sommet s, objet o){
    sommet t = (sommet)malloc(sizeof(Sommet));
    if(t){
        t->droit = NULL;
        t->gauche = NULL;
        t->pere = s;
        t->info = o;
        s->droit = t;
    }
}
// void supprimerFilsGauche(sommet s){

// }

// void supprimerFilsDroit(sommet s){

// }
