#include "TAS.h"

void creerTas(TasMin *t, char x){
    t->taille = 1;
    t->s = RACINE;
    t->arbre[1] = x;
}

char valeur(TasMin *t){
    return t->arbre[1];
}

void entasser(TasMin *t, char x){
    t->taille++;
    t->s++;
    t->arbre;
    reorganiserAsc(t, x);
}

void reorganiserAsc(TasMin *t, int s){
    if(s != RACINE){
        if (t->arbre[s] < pere(t, s)){
            permuter(t, s, s/2);
            reorganiserAsc(t, s/2);
        }
    }
}

char pere(TasMin *t, int s){
    return t->arbre[s/2];
}

void permuter(TasMin *t, int s1, int s2){
    char a = t->arbre[s1];
    t->arbre[s1] = t->arbre[s2];
    t->arbre[s2] = a;
}
