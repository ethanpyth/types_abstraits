#include "Pile.h"

void creerPile(pile P){
    P->length = 0;
    P->firstFree = 0;
    P->last = NIL;
    int i;
    P->tab[0].prec = NIL;
    for(i = 1; i <= T; i++)
    {
        P->tab[i].prec = i - 1;
    }
}

int pileVide(pile P){
    return (P->length == 0) ? 1 : 0;
}

int pilePleine(pile P){
    return (P->length >= T) ? 1 : 0 ;
}

void empile(pile P, char c){
    if(!pilePleine(P)){
        P->tab[P->length++].value = c;
        P->firstFree = P->length;
        P->last = P->length;
        P->tab[P->length].prec = P->length - 1;
    }
}

void depile(pile P){
    if(!pileVide(P)){
        P->firstFree = P->length--;
        P->tab[P->length].value = NIL;
        P->last = P->length;
    }
}

void destroyPile(pile P){
    if(!pileVide(P)){
        int i;
        while(!pileVide(P)){
            depile(P);
        }
    }
}

char valeur(pile P){
    return P->tab[P->last].value;
}
