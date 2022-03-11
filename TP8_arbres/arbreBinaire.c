#include "arbreBinaire.h"

sommet creerArbreBinaire(objet racine){
    sommet t = (sommet)malloc(sizeof(struct sommet));
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
    sommet t = (sommet)malloc(sizeof(struct sommet));
    if(t){
        t->droit = NULL;
        t->gauche = NULL;
        t->pere = s;
        t->info = o;
        s->gauche = t;
    }
}

void ajouterFilsDroit(sommet s, objet o){
    sommet t = (sommet)malloc(sizeof(struct sommet));
    if(t){
        t->droit = NULL;
        t->gauche = NULL;
        t->pere = s;
        t->info = o;
        s->droit = t;
    }
}
void supprimerFilsGauche(sommet s){
    s->gauche = NULL;
}

void supprimerFilsDroit(sommet s){
    s->droit = NULL;
}

void detruireSommet(sommet s){
    s = NULL;
}

void* getValeur(sommet s){
    s->info;
}

void setValeur(sommet s, objet o){
    s->info = o;
}

sommet pere(sommet S){
    return S->pere;
}

void setFilsGauche(sommet s, sommet fg){
    s->gauche = fg;
    s->gauche->info = fg->info;
}

void setFilsDroit(sommet s, sommet fd){
    s->droit = fd;
    s->droit->info = fd->info;
}

void setPere(sommet s, sommet p){
    s->pere = p;
    s->pere->info = p->info;
}
